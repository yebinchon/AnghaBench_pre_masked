
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_object_delete {int object_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

int FUNC_3 (struct tl_act_extra *VAR_1) {
  struct tl_object_delete *VAR_2 = (void *)VAR_1->extra;
  int VAR_3 = FUNC_1 (VAR_2->object_id);
  FUNC_0 (VAR_3 != -2);
  FUNC_2 (VAR_0);
  FUNC_2 (VAR_3 > 0);
  FUNC_2 (VAR_3 <= 0);
  FUNC_2 (0);
  return 0;
}
