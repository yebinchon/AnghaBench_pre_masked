
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hisi_clock_data* FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_4 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_5 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,struct hisi_clock_data*) ;
 int FUNC_7 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_8 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_9 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_10 (int ,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static struct hisi_clock_data *FUNC_11(
    struct platform_device *VAR_7)
{
 struct hisi_clock_data *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_7, VAR_1);
 if (!VAR_8)
  return FUNC_1(-VAR_0);


 VAR_9 = FUNC_6(&VAR_7->dev,
    VAR_5,
    FUNC_0(VAR_5),
    VAR_8);
 if (VAR_9)
  return FUNC_1(VAR_9);

 VAR_9 = FUNC_3(VAR_2,
         FUNC_0(VAR_2),
         VAR_8);
 if (VAR_9)
  return FUNC_1(VAR_9);

 VAR_9 = FUNC_5(VAR_4,
    FUNC_0(VAR_4),
    VAR_8);
 if (VAR_9)
  goto unregister_fixed_rate;

 VAR_9 = FUNC_4(VAR_3,
    FUNC_0(VAR_3),
    VAR_8);
 if (VAR_9)
  goto unregister_mux;

 VAR_9 = FUNC_10(VAR_7->dev.of_node,
   VAR_6, &VAR_8->clk_data);
 if (VAR_9)
  goto unregister_gate;

 return VAR_8;

unregister_gate:
 FUNC_8(VAR_3,
    FUNC_0(VAR_3),
    VAR_8);
unregister_mux:
 FUNC_9(VAR_4,
    FUNC_0(VAR_4),
    VAR_8);
unregister_fixed_rate:
 FUNC_7(VAR_2,
    FUNC_0(VAR_2),
    VAR_8);
 return FUNC_1(VAR_9);
}
