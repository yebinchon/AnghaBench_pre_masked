
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shallow_info {unsigned int** used_shallow; int* need_reachability_test; int nr_ours; size_t* ours; int * shallow_ref; TYPE_2__* shallow; TYPE_1__* ref; void* reachable; } ;
struct TYPE_4__ {int nr; } ;
struct TYPE_3__ {int nr; } ;


 int FUNC_0 (unsigned int**,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct shallow_info*,unsigned int**,int *) ;
 int FUNC_3 (int ,int ,int) ;
 void* FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct shallow_info *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6 = FUNC_1(VAR_2->ref->nr, 32);

 FUNC_0(VAR_2->used_shallow, VAR_2->shallow->nr);
 FUNC_2(VAR_2, VAR_2->used_shallow, ((void*)0));

 VAR_2->need_reachability_test =
  FUNC_4(VAR_2->shallow->nr, sizeof(*VAR_2->need_reachability_test));
 VAR_2->reachable =
  FUNC_4(VAR_2->shallow->nr, sizeof(*VAR_2->reachable));
 VAR_2->shallow_ref = FUNC_4(VAR_2->ref->nr, sizeof(*VAR_2->shallow_ref));

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_ours; VAR_3++)
  VAR_2->need_reachability_test[VAR_2->ours[VAR_3]] = 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->shallow->nr; VAR_3++) {
  if (!VAR_2->used_shallow[VAR_3])
   continue;
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
   if (!VAR_2->used_shallow[VAR_3][VAR_4])
    continue;
   VAR_2->need_reachability_test[VAR_3]++;
   for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
    if (VAR_2->used_shallow[VAR_3][VAR_4] & (1U << VAR_5))
     VAR_2->shallow_ref[VAR_4 * 32 + VAR_5]++;
  }





  VAR_2->need_reachability_test[VAR_3] =
   VAR_2->need_reachability_test[VAR_3] > 1;
 }







 FUNC_3(VAR_0, VAR_1, 1);
}
