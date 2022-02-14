
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_mutex_t ;
struct TYPE_3__ {int cond_var; } ;
typedef TYPE_1__ uv_cond_t ;
typedef int uint64_t ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;

int FUNC_3(uv_cond_t* VAR_2, uv_mutex_t* VAR_3, uint64_t VAR_4) {
  if (FUNC_1(&VAR_2->cond_var, VAR_3, (DWORD)(VAR_4 / 1e6)))
    return 0;
  if (FUNC_0() != VAR_0)
    FUNC_2();
  return VAR_1;
}
