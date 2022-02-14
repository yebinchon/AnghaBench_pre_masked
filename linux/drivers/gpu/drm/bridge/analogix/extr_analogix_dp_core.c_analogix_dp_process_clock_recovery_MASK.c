
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int lane_count; scalar_t__* cr_loop; int * training_lane; int lt_state; } ;
struct analogix_dp_device {TYPE_1__ link_train; int aux; int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (struct analogix_dp_device*,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct analogix_dp_device*,int) ;
 int FUNC_7 (struct analogix_dp_device*) ;
 int FUNC_8 (struct analogix_dp_device*,int ,int) ;
 int FUNC_9 (struct analogix_dp_device*,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (int *,int ,scalar_t__*,int) ;
 int FUNC_13 (int *,int ,int *,int) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static int FUNC_16(struct analogix_dp_device *VAR_12)
{
 int VAR_13, VAR_14, VAR_15;
 u8 VAR_16, VAR_17, VAR_18;
 u8 VAR_19[2], VAR_20[2];

 FUNC_15(100, 101);

 VAR_14 = VAR_12->link_train.lane_count;

 VAR_15 = FUNC_12(&VAR_12->aux, VAR_1, VAR_19, 2);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_12(&VAR_12->aux, VAR_0,
      VAR_20, 2);
 if (VAR_15 < 0)
  return VAR_15;

 if (FUNC_2(VAR_19, VAR_14) == 0) {

  FUNC_9(VAR_12, VAR_10);

  VAR_15 = FUNC_14(&VAR_12->aux, VAR_5,
         VAR_2 |
      VAR_4);
  if (VAR_15 < 0)
   return VAR_15;

  FUNC_10(VAR_12->dev, "Link Training Clock Recovery success\n");
  VAR_12->link_train.lt_state = VAR_7;
 } else {
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   VAR_18 = FUNC_6(
       VAR_12, VAR_13);
   VAR_16 = FUNC_4(
       VAR_20, VAR_13);
   VAR_17 = FUNC_3(
       VAR_20, VAR_13);

   if (FUNC_1(VAR_18) ==
     VAR_16 &&
       FUNC_0(VAR_18) ==
     VAR_17)
    VAR_12->link_train.cr_loop[VAR_13]++;

   if (VAR_12->link_train.cr_loop[VAR_13] == VAR_8 ||
       VAR_16 == VAR_11 ||
       VAR_17 == VAR_9) {
    FUNC_11(VAR_12->dev, "CR Max reached (%d,%d,%d)\n",
     VAR_12->link_train.cr_loop[VAR_13],
     VAR_16, VAR_17);
    FUNC_7(VAR_12);
    return -VAR_6;
   }
  }
 }

 FUNC_5(VAR_12, VAR_20);

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  FUNC_8(VAR_12,
   VAR_12->link_train.training_lane[VAR_13], VAR_13);

 VAR_15 = FUNC_13(&VAR_12->aux, VAR_3,
       VAR_12->link_train.training_lane, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 return 0;
}
