
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct repository {int dummy; } ;
struct prio_queue {int compare; int member_0; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {int generation; TYPE_1__ object; struct commit_list* parents; } ;


 int FUNC_0 (char*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct prio_queue*) ;
 int FUNC_2 (struct commit*,struct commit_list**) ;
 int FUNC_3 (struct commit*,struct commit_list**) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 struct commit* FUNC_5 (struct prio_queue*) ;
 int FUNC_6 (struct prio_queue*,struct commit*) ;
 scalar_t__ FUNC_7 (struct prio_queue*) ;
 scalar_t__ FUNC_8 (struct repository*,struct commit*) ;

__attribute__((used)) static struct commit_list *FUNC_9(struct repository *VAR_7,
      struct commit *VAR_8, int VAR_9,
      struct commit **VAR_10,
      int VAR_11)
{
 struct prio_queue VAR_12 = { VAR_6 };
 struct commit_list *VAR_13 = ((void*)0);
 int VAR_14;
 uint32_t VAR_15 = VAR_0;

 if (!VAR_11)
  VAR_12.compare = VAR_5;

 VAR_8->object.flags |= VAR_1;
 if (!VAR_9) {
  FUNC_2(VAR_8, &VAR_13);
  return VAR_13;
 }
 FUNC_6(&VAR_12, VAR_8);

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_10[VAR_14]->object.flags |= VAR_2;
  FUNC_6(&VAR_12, VAR_10[VAR_14]);
 }

 while (FUNC_7(&VAR_12)) {
  struct commit *VAR_16 = FUNC_5(&VAR_12);
  struct commit_list *VAR_17;
  int VAR_18;

  if (VAR_11 && VAR_16->generation > VAR_15)
   FUNC_0("bad generation skip %8x > %8x at %s",
       VAR_16->generation, VAR_15,
       FUNC_4(&VAR_16->object.oid));
  VAR_15 = VAR_16->generation;

  if (VAR_16->generation < VAR_11)
   break;

  VAR_18 = VAR_16->object.flags & (VAR_1 | VAR_2 | VAR_4);
  if (VAR_18 == (VAR_1 | VAR_2)) {
   if (!(VAR_16->object.flags & VAR_3)) {
    VAR_16->object.flags |= VAR_3;
    FUNC_3(VAR_16, &VAR_13);
   }

   VAR_18 |= VAR_4;
  }
  VAR_17 = VAR_16->parents;
  while (VAR_17) {
   struct commit *VAR_19 = VAR_17->item;
   VAR_17 = VAR_17->next;
   if ((VAR_19->object.flags & VAR_18) == VAR_18)
    continue;
   if (FUNC_8(VAR_7, VAR_19))
    return ((void*)0);
   VAR_19->object.flags |= VAR_18;
   FUNC_6(&VAR_12, VAR_19);
  }
 }

 FUNC_1(&VAR_12);
 return VAR_13;
}
