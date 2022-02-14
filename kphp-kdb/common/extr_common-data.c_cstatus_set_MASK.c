
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_user_info {int flags; int updated_at; } ;
struct TYPE_4__ {int flags; int updated_at; } ;
struct TYPE_3__ {struct proc_user_info* uinfo; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct proc_user_info*) ;
 int FUNC_1 (struct proc_user_info*) ;
 int FUNC_2 (int) ;

int FUNC_3 (int VAR_2, int VAR_3) {
  if (!VAR_1) {
    return -1;
  }
  int VAR_4 = (VAR_0.flags & ~VAR_3) | VAR_2;
  VAR_0.flags = VAR_4;
  VAR_0.updated_at = FUNC_2 (1000000);

  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
    struct proc_user_info *VAR_6 = VAR_1->uinfo + VAR_5;
    FUNC_0 (VAR_6);
    VAR_6->updated_at = VAR_0.updated_at;
    VAR_6->flags = VAR_4;
    FUNC_1 (VAR_6);
  }

  return VAR_4;
}
