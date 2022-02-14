
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_delete {int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2 (struct tl_act_extra *VAR_2) {
  struct tl_list_delete *VAR_3 = (void *)VAR_2->extra;
  int VAR_4 = FUNC_0 (VAR_3->list_id);
  if (VAR_4 == -2) { return -2; }
  FUNC_1 (VAR_4 <= 0 ? VAR_0 : VAR_1);
  return 0;
}
