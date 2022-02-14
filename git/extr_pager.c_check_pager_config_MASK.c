
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pager_command_config_data {char const* cmd; int want; int * value; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,struct pager_command_config_data*) ;

int FUNC_1(const char *VAR_2)
{
 struct pager_command_config_data VAR_3;

 VAR_3.cmd = VAR_2;
 VAR_3.want = -1;
 VAR_3.value = ((void*)0);

 FUNC_0(VAR_0, &VAR_3);

 if (VAR_3.value)
  VAR_1 = VAR_3.value;
 return VAR_3.want;
}
