
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lane_count; int * training_lane; int link_rate; } ;
struct analogix_dp_device {int dev; TYPE_1__ link_train; int aux; } ;
typedef enum pll_status { ____Placeholder_pll_status } pll_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int VAR_8 ;
 int FUNC_3 (struct analogix_dp_device*) ;
 int FUNC_4 (struct analogix_dp_device*) ;
 int FUNC_5 (struct analogix_dp_device*,int) ;
 int FUNC_6 (struct analogix_dp_device*,int ,int) ;
 int FUNC_7 (struct analogix_dp_device*,int ) ;
 int FUNC_8 (struct analogix_dp_device*,int ) ;
 int FUNC_9 (int *,int ,int *,int) ;
 int FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (int ,struct analogix_dp_device*,int,int,int,int) ;
 int FUNC_12 (int,int) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_13(struct analogix_dp_device *VAR_10)
{
 int VAR_11, VAR_12;
 u8 VAR_13, VAR_14[2];
 enum pll_status VAR_15;

 FUNC_4(VAR_10);

 FUNC_7(VAR_10, VAR_10->link_train.link_rate);
 FUNC_5(VAR_10, VAR_10->link_train.lane_count);

 for (VAR_11 = 0; VAR_11 < VAR_10->link_train.lane_count; VAR_11++) {
  FUNC_6(VAR_10,
   VAR_10->link_train.training_lane[VAR_11], VAR_11);
 }

 VAR_12 = FUNC_11(VAR_8, VAR_10, VAR_15,
     VAR_15 != VAR_5, 120,
     120 * VAR_3);
 if (VAR_12) {
  FUNC_0(VAR_10->dev, "Wait for pll lock failed %d\n", VAR_12);
  return VAR_12;
 }


 FUNC_8(VAR_10, VAR_6);

 FUNC_12(500, 600);

 FUNC_8(VAR_10, VAR_7);

 FUNC_12(500, 600);


 FUNC_8(VAR_10, VAR_2);





 if (VAR_9) {
  VAR_12 = FUNC_10(&VAR_10->aux, VAR_1,
     &VAR_13);
  if (VAR_12 < 0) {
   FUNC_0(VAR_10->dev, "Read align status failed %d\n",
          VAR_12);
   return VAR_12;
  }

  VAR_12 = FUNC_9(&VAR_10->aux, VAR_0, VAR_14,
           2);
  if (VAR_12 < 0) {
   FUNC_0(VAR_10->dev, "Read link status failed %d\n",
          VAR_12);
   return VAR_12;
  }

  if (FUNC_2(VAR_14,
        VAR_10->link_train.lane_count)) {
   FUNC_0(VAR_10->dev, "Clock recovery failed\n");
   FUNC_3(VAR_10);
   return -VAR_4;
  }

  if (FUNC_1(VAR_14, VAR_13,
           VAR_10->link_train.lane_count)) {
   FUNC_0(VAR_10->dev, "Channel EQ failed\n");
   FUNC_3(VAR_10);
   return -VAR_4;
  }
 }

 return 0;
}
