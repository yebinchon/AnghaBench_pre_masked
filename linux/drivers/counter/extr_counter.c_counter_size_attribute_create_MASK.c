
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_size_unit {size_t size; } ;
struct counter_device_attr_group {int dummy; } ;
struct counter_attr_parm {char* prefix; char* name; struct counter_size_unit* component; int * store; int show; struct counter_device_attr_group* group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_attr_parm*) ;
 int VAR_2 ;
 int FUNC_1 (struct counter_size_unit*) ;
 struct counter_size_unit* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(
 struct counter_device_attr_group *const VAR_3,
 const size_t VAR_4, const char *const VAR_5)
{
 struct counter_size_unit *VAR_6;
 struct counter_attr_parm VAR_7;
 int VAR_8;


 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->size = VAR_4;

 VAR_7.group = VAR_3;
 VAR_7.prefix = "";
 VAR_7.name = VAR_5;
 VAR_7.show = VAR_2;
 VAR_7.store = ((void*)0);
 VAR_7.component = VAR_6;
 VAR_8 = FUNC_0(&VAR_7);
 if (VAR_8)
  goto err_free_size_comp;

 return 0;

err_free_size_comp:
 FUNC_1(VAR_6);
 return VAR_8;
}
