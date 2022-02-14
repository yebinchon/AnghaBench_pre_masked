
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_sum {int id_ints; int has_weights; int count; scalar_t__ arr; int mode; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;
typedef int array_object_id_t ;


 int VAR_0 ;
 long long FUNC_0 (int ,int ,int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (long long) ;

int FUNC_3 (struct tl_act_extra *VAR_1) {
  struct tl_list_sum *VAR_2 = (void *)(VAR_1->extra);
  long long VAR_3 = FUNC_0 (VAR_2->list_id, VAR_2->mode, (array_object_id_t *)VAR_2->arr, VAR_2->count, VAR_2->has_weights, VAR_2->id_ints);
  if (VAR_3 == -2) {
    return -2;
  }
  if (VAR_3 < 0) {
    return VAR_3;
  }
  FUNC_1 (VAR_0);
  FUNC_2 (VAR_3);
  return 0;
}
