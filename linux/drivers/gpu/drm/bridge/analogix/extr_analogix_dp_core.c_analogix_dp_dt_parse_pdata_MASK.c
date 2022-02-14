
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_info {int max_link_rate; int max_lane_count; } ;
struct device_node {int dummy; } ;
struct analogix_dp_device {TYPE_2__* plat_data; struct video_info video_info; TYPE_1__* dev; } ;
struct TYPE_4__ {int dev_type; } ;
struct TYPE_3__ {struct device_node* of_node; } ;





 int FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct analogix_dp_device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev->of_node;
 struct video_info *VAR_2 = &VAR_0->video_info;

 switch (VAR_0->plat_data->dev_type) {
 case 129:
 case 128:




  VAR_2->max_link_rate = 0x0A;
  VAR_2->max_lane_count = 0x04;
  break;
 case 130:




  FUNC_0(VAR_1, "samsung,link-rate",
         &VAR_2->max_link_rate);
  FUNC_0(VAR_1, "samsung,lane-count",
         &VAR_2->max_lane_count);
  break;
 }

 return 0;
}
