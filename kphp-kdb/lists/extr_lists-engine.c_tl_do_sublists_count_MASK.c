
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_count {int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2 (struct tl_act_extra *VAR_2) {
  struct tl_list_count *VAR_3 = (void *)(VAR_2->extra);
  int VAR_4 = FUNC_0 (VAR_3->list_id, VAR_0);
  if (VAR_4 == -2) { return -2; }
  if (VAR_4 < 0) { return VAR_4; }
  if (VAR_4 > 9) { VAR_4 = 9; }
  int VAR_5;
  FUNC_1 (VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    FUNC_1 (VAR_0[VAR_5]);
  }
  for (VAR_5 = VAR_4; VAR_5 < 9; VAR_5++) {
    FUNC_1 (0);
  }
  return 0;
}
