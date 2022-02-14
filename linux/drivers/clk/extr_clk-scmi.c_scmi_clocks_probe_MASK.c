
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scmi_handle {TYPE_1__* clk_ops; } ;
struct device {struct device_node* of_node; } ;
struct scmi_device {struct scmi_handle* handle; struct device dev; } ;
struct clk_hw {int dummy; } ;
struct scmi_clk {int id; struct clk_hw hw; TYPE_2__* info; struct scmi_handle const* handle; } ;
struct device_node {int dummy; } ;
struct clk_hw_onecell_data {int num; struct clk_hw** hws; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int (* count_get ) (struct scmi_handle const*) ;TYPE_2__* (* info_get ) (struct scmi_handle const*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,struct scmi_clk*) ;
 void* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,struct clk_hw_onecell_data*) ;
 int VAR_4 ;
 int FUNC_5 (struct device*,struct scmi_clk*) ;
 int FUNC_6 (struct clk_hw_onecell_data*,struct clk_hw**,int) ;
 int FUNC_7 (struct scmi_handle const*) ;
 TYPE_2__* FUNC_8 (struct scmi_handle const*,int) ;

__attribute__((used)) static int FUNC_9(struct scmi_device *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct clk_hw **VAR_9;
 struct clk_hw_onecell_data *VAR_10;
 struct device *VAR_11 = &VAR_5->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 const struct scmi_handle *VAR_13 = VAR_5->handle;

 if (!VAR_13 || !VAR_13->clk_ops)
  return -VAR_1;

 VAR_7 = VAR_13->clk_ops->count_get(VAR_13);
 if (VAR_7 < 0) {
  FUNC_1(VAR_11, "%pOFn: invalid clock output count\n", VAR_12);
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_11, FUNC_6(VAR_10, VAR_9, VAR_7),
    VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->num = VAR_7;
 VAR_9 = VAR_10->hws;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct scmi_clk *VAR_14;

  VAR_14 = FUNC_3(VAR_11, sizeof(*VAR_14), VAR_3);
  if (!VAR_14)
   return -VAR_2;

  VAR_14->info = VAR_13->clk_ops->info_get(VAR_13, VAR_6);
  if (!VAR_14->info) {
   FUNC_0(VAR_11, "invalid clock info for idx %d\n", VAR_6);
   continue;
  }

  VAR_14->id = VAR_6;
  VAR_14->handle = VAR_13;

  VAR_8 = FUNC_5(VAR_11, VAR_14);
  if (VAR_8) {
   FUNC_1(VAR_11, "failed to register clock %d\n", VAR_6);
   FUNC_2(VAR_11, VAR_14);
   VAR_9[VAR_6] = ((void*)0);
  } else {
   FUNC_0(VAR_11, "Registered clock:%s\n", VAR_14->info->name);
   VAR_9[VAR_6] = &VAR_14->hw;
  }
 }

 return FUNC_4(VAR_11, VAR_4,
        VAR_10);
}
