
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hash_name; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_5__ {TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 char* FUNC_0 (int ) ;

char *FUNC_1 (const hashcat_ctx_t *VAR_0)
{
  const hashconfig_t *VAR_1 = VAR_0->hashconfig;

  return FUNC_0 (VAR_1->hash_name);
}
