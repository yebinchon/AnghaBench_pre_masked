
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct counter_device_attr_group {int attr_list; } ;
struct counter_device {int num_signals; int num_counts; TYPE_1__* device_state; } ;
struct TYPE_2__ {size_t num_groups; struct counter_device_attr_group* groups_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct counter_device_attr_group*,struct counter_device* const) ;
 int FUNC_2 (struct counter_device_attr_group*,size_t) ;
 int FUNC_3 (struct counter_device_attr_group*,struct counter_device* const) ;
 int FUNC_4 (struct counter_device_attr_group*,struct counter_device* const) ;
 struct counter_device_attr_group* FUNC_5 (size_t const,int,int ) ;

__attribute__((used)) static int FUNC_6(
 struct counter_device *const VAR_2)
{
 const size_t VAR_3 =
  VAR_2->num_signals + VAR_2->num_counts + 1;
 struct counter_device_attr_group *VAR_4;
 size_t VAR_5;
 int VAR_6;
 size_t VAR_7 = 0;


 VAR_4 = FUNC_5(VAR_3, sizeof(*VAR_4),
         VAR_1);
 if (!VAR_4)
  return -VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(&VAR_4[VAR_5].attr_list);


 VAR_6 = FUNC_4(VAR_4, VAR_2);
 if (VAR_6)
  goto err_free_groups_list;
 VAR_7 += VAR_2->num_signals;


 VAR_6 = FUNC_1(VAR_4 + VAR_7, VAR_2);
 if (VAR_6)
  goto err_free_groups_list;
 VAR_7 += VAR_2->num_counts;


 VAR_6 = FUNC_3(VAR_4 + VAR_7, VAR_2);
 if (VAR_6)
  goto err_free_groups_list;
 VAR_7++;


 VAR_2->device_state->groups_list = VAR_4;
 VAR_2->device_state->num_groups = VAR_7;

 return 0;

err_free_groups_list:
 FUNC_2(VAR_4, VAR_7);
 return VAR_6;
}
