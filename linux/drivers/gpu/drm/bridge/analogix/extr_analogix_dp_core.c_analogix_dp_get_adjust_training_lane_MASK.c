
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int lane_count; scalar_t__* training_lane; } ;
struct analogix_dp_device {TYPE_1__ link_train; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;

__attribute__((used)) static void FUNC_4(struct analogix_dp_device *VAR_4,
       u8 VAR_5[2])
{
 int VAR_6, VAR_7;
 u8 VAR_8, VAR_9, VAR_10;

 VAR_7 = VAR_4->link_train.lane_count;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_8 = FUNC_3(
      VAR_5, VAR_6);
  VAR_9 = FUNC_2(
      VAR_5, VAR_6);
  VAR_10 = FUNC_1(VAR_8) |
    FUNC_0(VAR_9);

  if (VAR_8 == VAR_3)
   VAR_10 |= VAR_1;
  if (VAR_9 == VAR_2)
   VAR_10 |= VAR_0;

  VAR_4->link_train.training_lane[VAR_6] = VAR_10;
 }
}
