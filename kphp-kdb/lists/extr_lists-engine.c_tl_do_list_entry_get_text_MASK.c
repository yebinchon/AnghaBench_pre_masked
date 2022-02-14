
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_entry_get_text {int object_id; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

int FUNC_4 (struct tl_act_extra *VAR_3) {
  struct tl_list_entry_get_text *VAR_4 = (void *)(VAR_3->extra);
  int VAR_5 = FUNC_1 (VAR_4->list_id, VAR_4->object_id, VAR_0);
  if (VAR_5 == -2) { return -2; }
  if (VAR_5 < 0) {
    FUNC_2 (VAR_1);
    return 0;
  }
  FUNC_2 (VAR_2);
  int VAR_6 = VAR_0[12];
  char **VAR_7 = (char **)(VAR_0 + 10);
  FUNC_0 (VAR_7 || !VAR_6);
  FUNC_3 (VAR_7 ? *VAR_7 : 0, VAR_6);
  return 0;
}
