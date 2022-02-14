
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit_list*) ;
 scalar_t__ FUNC_2 (struct commit*,struct commit_list**) ;
 int FUNC_3 (struct commit*) ;
 struct commit* FUNC_4 (struct commit_list**) ;

__attribute__((used)) static void FUNC_5(struct commit_list **VAR_2,
        struct commit_list **VAR_3,
        int VAR_4, int VAR_5)
{
 int VAR_6 = ((1u << (VAR_0 + VAR_4)) - 1);
 int VAR_7 = VAR_6 & ~((1u << VAR_0) - 1);

 while (*VAR_2) {
  struct commit_list *VAR_8;
  int VAR_9 = !!FUNC_1(*VAR_2);
  struct commit *VAR_10 = FUNC_4(VAR_2);
  int VAR_11 = VAR_10->object.flags & VAR_6;

  if (!VAR_9 && VAR_5 <= 0)
   break;

  FUNC_2(VAR_10, VAR_3);
  if ((VAR_11 & VAR_7) == VAR_7)
   VAR_11 |= VAR_1;
  VAR_8 = VAR_10->parents;

  while (VAR_8) {
   struct commit *VAR_12 = VAR_8->item;
   int VAR_13 = VAR_12->object.flags;
   VAR_8 = VAR_8->next;
   if ((VAR_13 & VAR_11) == VAR_11)
    continue;
   FUNC_3(VAR_12);
   if (FUNC_2(VAR_12, VAR_3) && !VAR_9)
    VAR_5--;
   VAR_12->object.flags |= VAR_11;
   FUNC_0(VAR_12, VAR_2);
  }
 }
 for (;;) {
  int VAR_14 = 0;
  struct commit_list *VAR_15;
  for (VAR_15 = *VAR_3; VAR_15; VAR_15 = VAR_15->next) {
   struct commit *VAR_16 = VAR_15->item;
   struct commit_list *VAR_17;

   if (((VAR_16->object.flags & VAR_7) != VAR_7) &&
       !(VAR_16->object.flags & VAR_1))
    continue;







   VAR_17 = VAR_16->parents;
   while (VAR_17) {
    struct commit *VAR_18 = VAR_17->item;
    VAR_17 = VAR_17->next;
    if (!(VAR_18->object.flags & VAR_1)) {
     VAR_18->object.flags |= VAR_1;
     VAR_14 = 1;
    }
   }
  }
  if (!VAR_14)
   break;
 }
}
