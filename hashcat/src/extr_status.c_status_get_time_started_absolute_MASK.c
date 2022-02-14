
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int runtime_start; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 char* FUNC_0 (int const*,char*) ;
 char* FUNC_1 (char*) ;
 size_t FUNC_2 (char*) ;

char *FUNC_3 (const hashcat_ctx_t *VAR_0)
{
  const status_ctx_t *VAR_1 = VAR_0->status_ctx;

  const time_t VAR_2 = VAR_1->runtime_start;

  char VAR_3[32] = { 0 };

  char *VAR_4 = FUNC_0 (&VAR_2, VAR_3);

  const size_t VAR_5 = FUNC_2 (VAR_4);

  if (VAR_4[VAR_5 - 1] == '\n') VAR_4[VAR_5 - 1] = 0;
  if (VAR_4[VAR_5 - 2] == '\r') VAR_4[VAR_5 - 2] = 0;

  return FUNC_1 (VAR_4);
}
