
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hisi_clock_data {int clk_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct hisi_clock_data* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hisi_clock_data* FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_4 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static struct hisi_clock_data *FUNC_6(
     struct platform_device *VAR_4)
{
 struct hisi_clock_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_3(VAR_2,
    FUNC_0(VAR_2),
    VAR_5);
 if (VAR_6)
  return FUNC_1(VAR_6);

 VAR_6 = FUNC_5(VAR_4->dev.of_node,
   VAR_3, &VAR_5->clk_data);
 if (VAR_6)
  goto unregister_gate;

 return VAR_5;

unregister_gate:
 FUNC_4(VAR_2,
    FUNC_0(VAR_2),
    VAR_5);
 return FUNC_1(VAR_6);
}
