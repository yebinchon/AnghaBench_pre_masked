
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int module_ctx_t ;
typedef int hashconfig_t ;
struct TYPE_3__ {int * module_ctx; int * hashconfig; } ;
typedef TYPE_1__ hashcat_ctx_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  hashconfig_t *VAR_1 = VAR_0->hashconfig;
  module_ctx_t *VAR_2 = VAR_0->module_ctx;

  FUNC_1 (VAR_2);

  FUNC_0 (VAR_1, 0, sizeof (hashconfig_t));
}
