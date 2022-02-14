
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {unsigned int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct commit_list* FUNC_0 (struct commit_list*,int) ;
 struct commit_list* FUNC_1 (struct commit_list*,int) ;
 int FUNC_2 (struct commit_list*) ;
 int VAR_2 ;
 int** FUNC_3 (int *,struct commit*) ;
 scalar_t__ FUNC_4 (struct commit_list*) ;
 int FUNC_5 (struct commit*) ;
 scalar_t__ FUNC_6 (struct commit_list*,int) ;
 int FUNC_7 (char*,int,int,struct commit_list*) ;
 scalar_t__ FUNC_8 (struct commit_list*) ;
 int FUNC_9 (struct commit_list*,scalar_t__) ;

__attribute__((used)) static struct commit_list *FUNC_10(struct commit_list *VAR_3,
          int VAR_4, int *VAR_5,
          int VAR_6)
{
 int VAR_7, VAR_8;
 struct commit_list *VAR_9;

 VAR_8 = 0;

 for (VAR_7 = 0, VAR_9 = VAR_3; VAR_9; VAR_9 = VAR_9->next) {
  struct commit *VAR_10 = VAR_9->item;
  unsigned VAR_11 = VAR_10->object.flags;

  *FUNC_3(&VAR_2, VAR_9->item) = &VAR_5[VAR_7++];
  switch (FUNC_5(VAR_10)) {
  case 0:
   if (!(VAR_11 & VAR_0)) {
    FUNC_9(VAR_9, 1);
    VAR_8++;
    FUNC_7("bisection 2 count one",
       VAR_8, VAR_4, VAR_3);
   }




   break;
  case 1:
   FUNC_9(VAR_9, -1);
   break;
  default:
   FUNC_9(VAR_9, -2);
   break;
  }
 }

 FUNC_7("bisection 2 initialize", VAR_8, VAR_4, VAR_3);
 for (VAR_9 = VAR_3; VAR_9; VAR_9 = VAR_9->next) {
  if (VAR_9->item->object.flags & VAR_1)
   continue;
  if (FUNC_8(VAR_9) != -2)
   continue;
  FUNC_9(VAR_9, FUNC_4(VAR_9));
  FUNC_2(VAR_3);


  if (!VAR_6 && FUNC_6(VAR_9, VAR_4))
   return VAR_9;
  VAR_8++;
 }

 FUNC_7("bisection 2 count_distance", VAR_8, VAR_4, VAR_3);

 while (VAR_8 < VAR_4) {
  for (VAR_9 = VAR_3; VAR_9; VAR_9 = VAR_9->next) {
   struct commit_list *VAR_12;
   unsigned VAR_13 = VAR_9->item->object.flags;

   if (0 <= FUNC_8(VAR_9))
    continue;
   for (VAR_12 = VAR_9->item->parents; VAR_12; VAR_12 = VAR_12->next) {
    if (VAR_12->item->object.flags & VAR_1)
     continue;
    if (0 <= FUNC_8(VAR_12))
     break;
   }
   if (!VAR_12)
    continue;






   if (!(VAR_13 & VAR_0)) {
    FUNC_9(VAR_9, FUNC_8(VAR_12)+1);
    VAR_8++;
    FUNC_7("bisection 2 count one",
       VAR_8, VAR_4, VAR_3);
   }
   else
    FUNC_9(VAR_9, FUNC_8(VAR_12));


   if (!VAR_6 && FUNC_6(VAR_9, VAR_4))
    return VAR_9;
  }
 }

 FUNC_7("bisection 2 counted all", VAR_8, VAR_4, VAR_3);

 if (!VAR_6)
  return FUNC_0(VAR_3, VAR_4);
 else
  return FUNC_1(VAR_3, VAR_4);
}
