
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int process; } ;
typedef TYPE_1__ process_info_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,scalar_t__*) ;

int FUNC_1(process_info_t *VAR_0) {
  DWORD VAR_1;
  if (!FUNC_0(VAR_0->process, &VAR_1))
    return -1;
  return (int)VAR_1;
}
