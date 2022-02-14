
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_count {int cnt; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

int FUNC_2 (struct tl_act_extra *VAR_1) {
  struct tl_list_count *VAR_2 = (void *)(VAR_1->extra);
  int VAR_3 = FUNC_0 (VAR_2->list_id, VAR_2->cnt);
  if (VAR_3 == -2) { return -2; }

  FUNC_1 (VAR_0);
  FUNC_1 (VAR_3 >= 0 ? VAR_3 : 0);
  return 0;
}
