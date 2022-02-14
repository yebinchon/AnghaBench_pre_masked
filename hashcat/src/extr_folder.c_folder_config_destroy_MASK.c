
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* folder_config; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {int install_dir; int cwd; int cpath_real; } ;
typedef TYPE_2__ folder_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  folder_config_t *VAR_1 = VAR_0->folder_config;

  FUNC_0 (VAR_1->cpath_real);
  FUNC_0 (VAR_1->cwd);
  FUNC_0 (VAR_1->install_dir);

  FUNC_1 (VAR_1, 0, sizeof (folder_config_t));
}
