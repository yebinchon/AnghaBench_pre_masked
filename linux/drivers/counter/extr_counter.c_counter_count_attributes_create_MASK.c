
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct counter_func_avail_unit {int num_functions; int functions_list; struct counter_count* count; } ;
struct counter_device_attr_group {int attr_list; } ;
struct counter_device {TYPE_1__* ops; } ;
struct counter_count_unit {int num_functions; int functions_list; struct counter_count* count; } ;
struct counter_count {int name; int num_functions; int functions_list; } ;
struct counter_attr_parm {char* prefix; char* name; struct counter_func_avail_unit* component; int * store; int * show; struct counter_device_attr_group* group; } ;
struct TYPE_2__ {scalar_t__ function_set; scalar_t__ function_get; scalar_t__ count_write; scalar_t__ count_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_attr_parm*) ;
 int FUNC_1 (struct counter_device_attr_group* const,struct counter_count* const) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int *) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (struct counter_device_attr_group* const,int ) ;
 int FUNC_4 (struct counter_func_avail_unit*) ;
 struct counter_func_avail_unit* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(
 struct counter_device_attr_group *const VAR_7,
 const struct counter_device *const VAR_8,
 struct counter_count *const VAR_9)
{
 struct counter_count_unit *VAR_10;
 struct counter_attr_parm VAR_11;
 int VAR_12;
 struct counter_count_unit *VAR_13;
 struct counter_func_avail_unit *VAR_14;


 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->count = VAR_9;


 VAR_11.group = VAR_7;
 VAR_11.prefix = "";
 VAR_11.name = "count";
 VAR_11.show = (VAR_8->ops->count_read) ? VAR_3 : ((void*)0);
 VAR_11.store = (VAR_8->ops->count_write) ? VAR_4 : ((void*)0);
 VAR_11.component = VAR_10;
 VAR_12 = FUNC_0(&VAR_11);
 if (VAR_12) {
  FUNC_4(VAR_10);
  return VAR_12;
 }


 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_1);
 if (!VAR_13) {
  VAR_12 = -VAR_0;
  goto err_free_attr_list;
 }
 VAR_13->count = VAR_9;


 VAR_11.group = VAR_7;
 VAR_11.prefix = "";
 VAR_11.name = "function";
 VAR_11.show = (VAR_8->ops->function_get) ? VAR_5 : ((void*)0);
 VAR_11.store = (VAR_8->ops->function_set) ? VAR_6 : ((void*)0);
 VAR_11.component = VAR_13;
 VAR_12 = FUNC_0(&VAR_11);
 if (VAR_12) {
  FUNC_4(VAR_13);
  goto err_free_attr_list;
 }


 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_1);
 if (!VAR_14) {
  VAR_12 = -VAR_0;
  goto err_free_attr_list;
 }
 VAR_14->functions_list = VAR_9->functions_list;
 VAR_14->num_functions = VAR_9->num_functions;


 VAR_11.group = VAR_7;
 VAR_11.prefix = "";
 VAR_11.name = "function_available";
 VAR_11.show = VAR_2;
 VAR_11.store = ((void*)0);
 VAR_11.component = VAR_14;
 VAR_12 = FUNC_0(&VAR_11);
 if (VAR_12) {
  FUNC_4(VAR_14);
  goto err_free_attr_list;
 }


 VAR_12 = FUNC_3(VAR_7, VAR_9->name);
 if (VAR_12)
  goto err_free_attr_list;


 VAR_12 = FUNC_1(VAR_7, VAR_9);
 if (VAR_12)
  goto err_free_attr_list;

 return 0;

err_free_attr_list:
 FUNC_2(&VAR_7->attr_list);
 return VAR_12;
}
