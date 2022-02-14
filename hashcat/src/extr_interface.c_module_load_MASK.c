
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int * module_init; int * module_handle; } ;
typedef TYPE_1__ module_ctx_t ;
struct TYPE_8__ {int * folder_config; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int folder_config_t ;
typedef int * MODULE_INIT ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,char*,char*) ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int const*,int const,char*,int ) ;

bool FUNC_8 (hashcat_ctx_t *VAR_1, module_ctx_t *VAR_2, const u32 VAR_3)
{
  const folder_config_t *VAR_4 = VAR_1->folder_config;

  FUNC_6 (VAR_2, 0, sizeof (module_ctx_t));

  char *VAR_5 = (char *) FUNC_5 (VAR_0);

  FUNC_7 (VAR_4, VAR_3, VAR_5, VAR_0);

  VAR_2->module_handle = FUNC_2 (VAR_5);

  if (VAR_2->module_handle == ((void*)0))
  {



    FUNC_1 (VAR_1, "%s", FUNC_0 ());


    return 0;
  }

  VAR_2->module_init = (MODULE_INIT) FUNC_3 (VAR_2->module_handle, "module_init");

  if (VAR_2->module_init == ((void*)0))
  {
    FUNC_1 (VAR_1, "Cannot load symbol 'module_init' in module %s", VAR_5);

    return 0;
  }

  FUNC_4 (VAR_5);

  return 1;
}
