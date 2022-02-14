
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sm_t ;
typedef int sm_status ;
typedef TYPE_2__* sm_private_t ;
struct TYPE_6__ {int max_fd; int all_fds; } ;
struct TYPE_5__ {int (* remove_fd ) (TYPE_1__*,int) ;TYPE_2__* private_state; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;

sm_status FUNC_2(sm_t VAR_1) {
  sm_private_t VAR_2 = VAR_1->private_state;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 <= VAR_2->max_fd; VAR_3++) {
    if (FUNC_0(VAR_3, VAR_2->all_fds)) {
      VAR_1->remove_fd(VAR_1, VAR_3);
    }
  }
  return VAR_0;
}
