
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_user_info {long long binlog_pos; int flags; int updated_at; } ;
struct TYPE_4__ {long long binlog_pos; int flags; int updated_at; } ;
struct TYPE_3__ {struct proc_user_info* uinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct proc_user_info*) ;
 int FUNC_1 (struct proc_user_info*) ;
 int FUNC_2 (int) ;

int FUNC_3 (long long VAR_4, int VAR_5) {
  if (!VAR_3) {
    return -1;
  }
  VAR_2.binlog_pos = VAR_4;
  int VAR_6 = (VAR_2.flags & ~(VAR_0 | VAR_1)) | (VAR_5 ? VAR_0 : (VAR_4 ? VAR_1 : 0));
  VAR_2.flags = VAR_6;
  VAR_2.updated_at = FUNC_2 (1000000);

  int VAR_7;
  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
    struct proc_user_info *VAR_8 = VAR_3->uinfo + VAR_7;
    FUNC_0 (VAR_8);
    VAR_8->binlog_pos = VAR_4;
    VAR_8->updated_at = VAR_2.updated_at;
    VAR_8->flags = VAR_6;
    FUNC_1 (VAR_8);
  }

  return 1;
}
