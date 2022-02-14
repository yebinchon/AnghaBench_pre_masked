
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int terminated; int status; int pid; } ;
typedef TYPE_1__ process_info_t ;
struct TYPE_4__ {int n; scalar_t__* pipe; scalar_t__ vec; } ;
typedef TYPE_2__ dowait_args ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (scalar_t__,char*,int) ;

__attribute__((used)) static void* FUNC_3(void* VAR_2) {
  dowait_args* VAR_3 = VAR_2;

  int VAR_4, VAR_5;
  process_info_t* VAR_6;

  for (VAR_4 = 0; VAR_4 < VAR_3->n; VAR_4++) {
    VAR_6 = (process_info_t*)(VAR_3->vec + VAR_4 * sizeof(process_info_t));
    if (VAR_6->terminated) continue;
    VAR_5 = FUNC_1(VAR_6->pid, &VAR_6->status, 0);
    if (VAR_5 < 0) {
      FUNC_0("waitpid");
      return ((void*)0);
    }
    VAR_6->terminated = 1;
  }

  if (VAR_3->pipe[1] >= 0) {

    ssize_t VAR_7;

    do
      VAR_7 = FUNC_2(VAR_3->pipe[1], "", 1);
    while (VAR_7 == -1 && VAR_1 == VAR_0);
  }

  return ((void*)0);
}
