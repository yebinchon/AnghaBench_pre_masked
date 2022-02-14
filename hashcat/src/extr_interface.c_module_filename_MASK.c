
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* shared_dir; } ;
typedef TYPE_1__ folder_config_t ;


 int FUNC_0 (char*,size_t const,char*,char*,int const) ;

int FUNC_1 (const folder_config_t *VAR_0, const int VAR_1, char *VAR_2, const size_t VAR_3)
{




  return FUNC_0 (VAR_2, VAR_3, "%s/modules/module_%05d.so", VAR_0->shared_dir, VAR_1);

}
