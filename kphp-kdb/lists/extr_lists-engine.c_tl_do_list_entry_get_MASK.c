
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_list_entry_get {int mode; int object_id; int list_id; } ;
struct tl_act_extra {scalar_t__ extra; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (long long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;

int FUNC_6 (struct tl_act_extra *VAR_3) {
  struct tl_list_entry_get *VAR_4 = (void *)(VAR_3->extra);
  int VAR_5 = FUNC_1 (VAR_4->list_id, VAR_4->object_id, VAR_0);
  if (VAR_5 == -2) { return -2; }
  if (VAR_5 < 0) {
    FUNC_2 (VAR_1);
    return 0;
  }
  FUNC_0 (VAR_5 == 6);
  int VAR_6 = VAR_0[12];

  FUNC_2 (VAR_2);


  if (VAR_4->mode & (1 << 15)) {
    FUNC_4 (VAR_4->object_id);
  }
  if (VAR_4->mode & (1 << 6)) {
    FUNC_2 (VAR_0[0]);
  }
  if (VAR_4->mode & (1 << 7)) {
    FUNC_2 (VAR_0[1]);
  }
  if (VAR_4->mode & (1 << 8)) {
    FUNC_3 (*(long long *)(VAR_0 + 2));
  }
  if (VAR_4->mode & (1 << 9)) {
    FUNC_3 (*(long long *)(VAR_0 + 4));
  }
  if (VAR_4->mode & (1 << 10)) {
    char **VAR_7 = (char **)(VAR_0 + 10);
    FUNC_5 (VAR_7 ? *VAR_7 : 0, VAR_6);
  }
  return 0;
}
