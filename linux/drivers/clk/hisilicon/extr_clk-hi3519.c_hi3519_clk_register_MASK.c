
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
 struct hisi_clock_data* FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_4 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_5 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_6 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_7 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_8 (int ,int ,struct hisi_clock_data*) ;
 int FUNC_9 (int ,int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static struct hisi_clock_data *FUNC_10(struct platform_device *VAR_6)
{
 struct hisi_clock_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 VAR_8 = FUNC_3(VAR_2,
         FUNC_0(VAR_2),
         VAR_7);
 if (VAR_8)
  return FUNC_1(VAR_8);

 VAR_8 = FUNC_5(VAR_4,
    FUNC_0(VAR_4),
    VAR_7);
 if (VAR_8)
  goto unregister_fixed_rate;

 VAR_8 = FUNC_4(VAR_3,
    FUNC_0(VAR_3),
    VAR_7);
 if (VAR_8)
  goto unregister_mux;

 VAR_8 = FUNC_9(VAR_6->dev.of_node,
   VAR_5, &VAR_7->clk_data);
 if (VAR_8)
  goto unregister_gate;

 return VAR_7;

unregister_fixed_rate:
 FUNC_6(VAR_2,
    FUNC_0(VAR_2),
    VAR_7);

unregister_mux:
 FUNC_8(VAR_4,
    FUNC_0(VAR_4),
    VAR_7);
unregister_gate:
 FUNC_7(VAR_3,
    FUNC_0(VAR_3),
    VAR_7);
 return FUNC_1(VAR_8);
}
