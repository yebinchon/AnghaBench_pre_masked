
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct file_user_list_entry* dir_entry; } ;
typedef TYPE_1__ user_t ;
struct imessage {int dummy; } ;
struct file_user_list_entry {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (struct imessage*,TYPE_1__*,struct file_user_list_entry*,int,int,int) ;
 struct file_user_list_entry* FUNC_3 (int) ;

int FUNC_4 (struct imessage *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  user_t *VAR_4;
  struct file_user_list_entry *VAR_5;

  if (FUNC_0 (VAR_1) < 0 || VAR_2 <= 0) {
    return -1;
  }

  VAR_4 = FUNC_1 (VAR_1);
  if (VAR_4) {
    VAR_5 = VAR_4->dir_entry;
  } else {
    VAR_5 = FUNC_3 (VAR_1);
  }

  return FUNC_2 (VAR_0, VAR_4, VAR_5, VAR_1, VAR_2, VAR_3);
}
