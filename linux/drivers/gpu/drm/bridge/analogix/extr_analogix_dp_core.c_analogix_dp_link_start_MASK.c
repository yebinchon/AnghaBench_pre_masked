
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lane_count; int link_rate; scalar_t__* cr_loop; scalar_t__ eq_loop; int lt_state; } ;
struct analogix_dp_device {int aux; int dev; TYPE_1__ link_train; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct analogix_dp_device*) ;
 int FUNC_1 (struct analogix_dp_device*) ;
 int FUNC_2 (struct analogix_dp_device*,int) ;
 int FUNC_3 (struct analogix_dp_device*,int ,int) ;
 int FUNC_4 (struct analogix_dp_device*,int) ;
 int FUNC_5 (struct analogix_dp_device*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ,int*,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct analogix_dp_device *VAR_13)
{
 u8 VAR_14[4];
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_16 = VAR_13->link_train.lane_count;

 VAR_13->link_train.lt_state = VAR_0;
 VAR_13->link_train.eq_loop = 0;

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
  VAR_13->link_train.cr_loop[VAR_15] = 0;


 FUNC_4(VAR_13, VAR_13->link_train.link_rate);
 FUNC_2(VAR_13, VAR_13->link_train.lane_count);


 VAR_14[0] = VAR_13->link_train.link_rate;
 VAR_14[1] = VAR_13->link_train.lane_count;
 VAR_18 = FUNC_7(&VAR_13->aux, VAR_1, VAR_14, 2);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_1(VAR_13);
 if (VAR_18 < 0) {
  FUNC_6(VAR_13->dev, "failed to set enhance mode\n");
  return VAR_18;
 }


 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
  FUNC_3(VAR_13,
   VAR_11, VAR_15);


 VAR_17 = 0;
 while (FUNC_0(VAR_13) == VAR_10) {
  if (VAR_17 == VAR_3) {
   FUNC_6(VAR_13->dev, "Wait for PLL lock timed out\n");
   return -VAR_9;
  }

  VAR_17++;
  FUNC_9(90, 120);
 }


 FUNC_5(VAR_13, VAR_12);


 VAR_18 = FUNC_8(&VAR_13->aux, VAR_6,
        VAR_2 |
     VAR_5);
 if (VAR_18 < 0)
  return VAR_18;

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
  VAR_14[VAR_15] = VAR_7 |
       VAR_8;

 VAR_18 = FUNC_7(&VAR_13->aux, VAR_4, VAR_14,
       VAR_16);
 if (VAR_18 < 0)
  return VAR_18;

 return 0;
}
