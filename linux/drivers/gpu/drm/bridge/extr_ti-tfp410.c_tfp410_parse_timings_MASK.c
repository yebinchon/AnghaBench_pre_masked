
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_bridge_timings {int input_bus_flags; void* hold_time_ps; void* setup_time_ps; } ;
struct tfp410 {TYPE_1__* dev; int bus_format; struct drm_bridge_timings timings; } ;
struct device_node {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int) ;
 struct device_node* FUNC_1 (struct device_node*,int ,int ) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 struct drm_bridge_timings VAR_8 ;

__attribute__((used)) static int FUNC_4(struct tfp410 *VAR_9, bool VAR_10)
{
 struct drm_bridge_timings *VAR_11 = &VAR_9->timings;
 struct device_node *VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14 = 24;
 s32 VAR_15 = 0;


 *VAR_11 = VAR_8;

 if (VAR_10)





  return 0;






 VAR_12 = FUNC_1(VAR_9->dev->of_node, 0, 0);
 if (!VAR_12)
  return -VAR_5;


 FUNC_3(VAR_12, "pclk-sample", &VAR_13);
 FUNC_3(VAR_12, "bus-width", &VAR_14);
 FUNC_2(VAR_12);

 VAR_11->input_bus_flags = VAR_0;

 switch (VAR_13) {
 case 0:
  VAR_11->input_bus_flags |= VAR_1
      | VAR_3;
  break;
 case 1:
  VAR_11->input_bus_flags |= VAR_2
      | VAR_4;
  break;
 default:
  return -VAR_5;
 }

 switch (VAR_14) {
 case 12:
  VAR_9->bus_format = VAR_7;
  break;
 case 24:
  VAR_9->bus_format = VAR_6;
  break;
 default:
  return -VAR_5;
 }


 FUNC_3(VAR_9->dev->of_node, "ti,deskew", (u32 *)&VAR_15);
 if (VAR_15 < -4 || VAR_15 > 3)
  return -VAR_5;

 VAR_11->setup_time_ps = FUNC_0(0, 1200 - 350 * VAR_15);
 VAR_11->hold_time_ps = FUNC_0(0, 1300 + 350 * VAR_15);

 return 0;
}
