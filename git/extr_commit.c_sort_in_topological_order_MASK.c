
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_queue {struct author_date_slab* cb_data; int * compare; } ;
struct indegree_slab {int dummy; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;
struct author_date_slab {int dummy; } ;
typedef int queue ;
typedef enum rev_sort_order { ____Placeholder_rev_sort_order } rev_sort_order ;
struct TYPE_2__ {struct commit_list* next; } ;




 int VAR_0 ;
 int FUNC_0 (struct author_date_slab*) ;
 int FUNC_1 (struct indegree_slab*) ;
 int FUNC_2 (struct prio_queue*) ;
 TYPE_1__* FUNC_3 (struct commit*,struct commit_list**) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (struct commit_list*) ;
 int* FUNC_5 (struct indegree_slab*,struct commit*) ;
 int FUNC_6 (struct author_date_slab*) ;
 int FUNC_7 (struct indegree_slab*) ;
 int FUNC_8 (struct prio_queue*,char,int) ;
 struct commit* FUNC_9 (struct prio_queue*) ;
 int FUNC_10 (struct prio_queue*,struct commit*) ;
 int FUNC_11 (struct prio_queue*) ;
 int FUNC_12 (struct author_date_slab*,struct commit*) ;

void FUNC_13(struct commit_list **VAR_3, enum rev_sort_order VAR_4)
{
 struct commit_list *VAR_5, *VAR_6 = *VAR_3;
 struct commit_list **VAR_7;
 struct indegree_slab VAR_8;
 struct prio_queue VAR_9;
 struct commit *VAR_10;
 struct author_date_slab VAR_11;

 if (!VAR_6)
  return;
 *VAR_3 = ((void*)0);

 FUNC_7(&VAR_8);
 FUNC_8(&VAR_9, '\0', sizeof(VAR_9));

 switch (VAR_4) {
 default:
  VAR_9.compare = ((void*)0);
  break;
 case 128:
  VAR_9.compare = VAR_2;
  break;
 case 129:
  FUNC_6(&VAR_11);
  VAR_9.compare = VAR_1;
  VAR_9.cb_data = &VAR_11;
  break;
 }


 for (VAR_5 = VAR_6; VAR_5; VAR_5 = VAR_5->next) {
  struct commit *VAR_12 = VAR_5->item;
  *(FUNC_5(&VAR_8, VAR_12)) = 1;

  if (VAR_4 == 129)
   FUNC_12(&VAR_11, VAR_12);
 }


 for (VAR_5 = VAR_6; VAR_5; VAR_5 = VAR_5->next) {
  struct commit_list *VAR_13 = VAR_5->item->parents;
  while (VAR_13) {
   struct commit *VAR_14 = VAR_13->item;
   int *VAR_15 = FUNC_5(&VAR_8, VAR_14);

   if (*VAR_15)
    (*VAR_15)++;
   VAR_13 = VAR_13->next;
  }
 }
 for (VAR_5 = VAR_6; VAR_5; VAR_5 = VAR_5->next) {
  struct commit *VAR_16 = VAR_5->item;

  if (*(FUNC_5(&VAR_8, VAR_16)) == 1)
   FUNC_10(&VAR_9, VAR_16);
 }





 if (VAR_4 == VAR_0)
  FUNC_11(&VAR_9);


 FUNC_4(VAR_6);

 VAR_7 = VAR_3;
 *VAR_3 = ((void*)0);
 while ((VAR_10 = FUNC_9(&VAR_9)) != ((void*)0)) {
  struct commit_list *VAR_17;

  for (VAR_17 = VAR_10->parents; VAR_17 ; VAR_17 = VAR_17->next) {
   struct commit *VAR_18 = VAR_17->item;
   int *VAR_19 = FUNC_5(&VAR_8, VAR_18);

   if (!*VAR_19)
    continue;






   if (--(*VAR_19) == 1)
    FUNC_10(&VAR_9, VAR_18);
  }




  *(FUNC_5(&VAR_8, VAR_10)) = 0;

  VAR_7 = &FUNC_3(VAR_10, VAR_7)->next;
 }

 FUNC_1(&VAR_8);
 FUNC_2(&VAR_9);
 if (VAR_4 == 129)
  FUNC_0(&VAR_11);
}
