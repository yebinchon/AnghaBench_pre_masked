
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_link_rate; int max_lane_count; } ;
struct analogix_dp_device {TYPE_1__ video_info; scalar_t__ fast_train_enable; } ;


 int FUNC_0 (struct analogix_dp_device*) ;
 int FUNC_1 (struct analogix_dp_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct analogix_dp_device *VAR_0)
{
 if (VAR_0->fast_train_enable)
  return FUNC_0(VAR_0);

 return FUNC_1(VAR_0, VAR_0->video_info.max_lane_count,
        VAR_0->video_info.max_link_rate);
}
