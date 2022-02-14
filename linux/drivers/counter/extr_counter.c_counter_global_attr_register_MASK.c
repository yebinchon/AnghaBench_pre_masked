
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_device_attr_group {int attr_list; } ;
struct counter_device {int num_signals; int num_counts; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct counter_device_attr_group* const,struct counter_device* const) ;
 int FUNC_2 (struct counter_device_attr_group* const,int ) ;
 int FUNC_3 (struct counter_device_attr_group* const,int ,char*) ;

__attribute__((used)) static int FUNC_4(
 struct counter_device_attr_group *const VAR_0,
 struct counter_device *const VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_2(VAR_0, VAR_1->name);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_3(VAR_0, VAR_1->num_counts,
         "num_counts");
 if (VAR_2)
  goto err_free_attr_list;


 VAR_2 = FUNC_3(VAR_0, VAR_1->num_signals,
         "num_signals");
 if (VAR_2)
  goto err_free_attr_list;


 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  goto err_free_attr_list;

 return 0;

err_free_attr_list:
 FUNC_0(&VAR_0->attr_list);
 return VAR_2;
}
