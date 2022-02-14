
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_name_unit {char* name; } ;
struct counter_device_attr_group {int dummy; } ;
struct counter_attr_parm {char* prefix; char* name; struct counter_name_unit* component; int * store; int show; struct counter_device_attr_group* group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_attr_parm*) ;
 int VAR_2 ;
 int FUNC_1 (struct counter_name_unit*) ;
 struct counter_name_unit* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(
 struct counter_device_attr_group *const VAR_3,
 const char *const VAR_4)
{
 struct counter_name_unit *VAR_5;
 struct counter_attr_parm VAR_6;
 int VAR_7;


 if (!VAR_4)
  return 0;


 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->name = VAR_4;


 VAR_6.group = VAR_3;
 VAR_6.prefix = "";
 VAR_6.name = "name";
 VAR_6.show = VAR_2;
 VAR_6.store = ((void*)0);
 VAR_6.component = VAR_5;
 VAR_7 = FUNC_0(&VAR_6);
 if (VAR_7)
  goto err_free_name_comp;

 return 0;

err_free_name_comp:
 FUNC_1(VAR_5);
 return VAR_7;
}
