
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int session; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_5__ {TYPE_1__* user_options; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 char* FUNC_0 (int ) ;

char *FUNC_1 (const hashcat_ctx_t *VAR_0)
{
  const user_options_t *VAR_1 = VAR_0->user_options;

  return FUNC_0 (VAR_1->session);
}
