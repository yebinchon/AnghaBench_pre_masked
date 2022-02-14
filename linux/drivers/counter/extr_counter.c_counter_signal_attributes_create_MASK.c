
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct counter_signal_unit {struct counter_signal* signal; } ;
struct counter_signal {int name; } ;
struct counter_device_attr_group {int attr_list; } ;
struct counter_device {TYPE_1__* ops; } ;
struct counter_attr_parm {char* prefix; char* name; struct counter_signal_unit* component; int * store; int * show; struct counter_device_attr_group* group; } ;
struct TYPE_2__ {scalar_t__ signal_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_attr_parm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct counter_device_attr_group* const,int ) ;
 int FUNC_3 (struct counter_device_attr_group* const,struct counter_signal* const) ;
 int * VAR_2 ;
 int FUNC_4 (struct counter_signal_unit*) ;
 struct counter_signal_unit* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(
 struct counter_device_attr_group *const VAR_3,
 const struct counter_device *const VAR_4,
 struct counter_signal *const VAR_5)
{
 struct counter_signal_unit *VAR_6;
 struct counter_attr_parm VAR_7;
 int VAR_8;


 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->signal = VAR_5;


 VAR_7.group = VAR_3;
 VAR_7.prefix = "";
 VAR_7.name = "signal";
 VAR_7.show = (VAR_4->ops->signal_read) ? VAR_2 : ((void*)0);
 VAR_7.store = ((void*)0);
 VAR_7.component = VAR_6;
 VAR_8 = FUNC_0(&VAR_7);
 if (VAR_8) {
  FUNC_4(VAR_6);
  return VAR_8;
 }


 VAR_8 = FUNC_2(VAR_3, VAR_5->name);
 if (VAR_8)
  goto err_free_attr_list;


 VAR_8 = FUNC_3(VAR_3, VAR_5);
 if (VAR_8)
  goto err_free_attr_list;

 return 0;

err_free_attr_list:
 FUNC_1(&VAR_3->attr_list);
 return VAR_8;
}
