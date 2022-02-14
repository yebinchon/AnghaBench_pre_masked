
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int run_thread_level1; } ;
typedef TYPE_1__ status_ctx_t ;
typedef scalar_t__ ssize_t ;
typedef int hc_device_param_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__,int,int *,TYPE_1__ const*) ;

bool FUNC_1 (int VAR_1, void *VAR_2, size_t VAR_3, int VAR_4, hc_device_param_t *VAR_5, const status_ctx_t *VAR_6)
{
  char *VAR_7 = (char *) VAR_2;

  ssize_t VAR_8;
  ssize_t VAR_9 = VAR_3;

  for (VAR_8 = 0; VAR_8 < VAR_9 - VAR_0; VAR_8 += VAR_0)
  {
    if (FUNC_0 (VAR_1, VAR_7 + VAR_8, VAR_0, VAR_4, VAR_5, VAR_6) == 0) return 0;

    if (VAR_6) if (VAR_6->run_thread_level1 == 0) return 0;
  }

  if (FUNC_0 (VAR_1, VAR_7 + VAR_8, VAR_9 - VAR_8, VAR_4, VAR_5, VAR_6) == 0) return 0;

  if (VAR_6) if (VAR_6->run_thread_level1 == 0) return 0;

  return 1;
}
