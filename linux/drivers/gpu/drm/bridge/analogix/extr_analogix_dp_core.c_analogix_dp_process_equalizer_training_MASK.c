
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_2__ {int lane_count; int link_rate; scalar_t__ eq_loop; int * training_lane; int lt_state; } ;
struct analogix_dp_device {TYPE_1__ link_train; int aux; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (struct analogix_dp_device*,int *) ;
 int FUNC_3 (struct analogix_dp_device*,void**) ;
 int FUNC_4 (struct analogix_dp_device*,void**) ;
 int FUNC_5 (struct analogix_dp_device*) ;
 int FUNC_6 (struct analogix_dp_device*,int ,int) ;
 int FUNC_7 (struct analogix_dp_device*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,int ,int *,int) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int ,int *,int) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct analogix_dp_device *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 u8 VAR_12, VAR_13[2], VAR_14[2];

 FUNC_13(400, 401);

 VAR_9 = VAR_7->link_train.lane_count;

 VAR_10 = FUNC_10(&VAR_7->aux, VAR_1, VAR_13, 2);
 if (VAR_10 < 0)
  return VAR_10;

 if (FUNC_1(VAR_13, VAR_9)) {
  FUNC_5(VAR_7);
  return -VAR_4;
 }

 VAR_10 = FUNC_10(&VAR_7->aux, VAR_0,
      VAR_14, 2);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_11(&VAR_7->aux, VAR_2,
       &VAR_12);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_2(VAR_7, VAR_14);

 if (!FUNC_0(VAR_13, VAR_12, VAR_9)) {

  VAR_10 = FUNC_7(VAR_7);
  if (VAR_10 < 0)
   return VAR_10;

  FUNC_8(VAR_7->dev, "Link Training success!\n");
  FUNC_4(VAR_7, &VAR_11);
  VAR_7->link_train.link_rate = VAR_11;
  FUNC_8(VAR_7->dev, "final bandwidth = %.2x\n",
   VAR_7->link_train.link_rate);

  FUNC_3(VAR_7, &VAR_11);
  VAR_7->link_train.lane_count = VAR_11;
  FUNC_8(VAR_7->dev, "final lane count = %.2x\n",
   VAR_7->link_train.lane_count);

  VAR_7->link_train.lt_state = VAR_5;

  return 0;
 }


 VAR_7->link_train.eq_loop++;

 if (VAR_7->link_train.eq_loop > VAR_6) {
  FUNC_9(VAR_7->dev, "EQ Max loop\n");
  FUNC_5(VAR_7);
  return -VAR_4;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_6(VAR_7,
   VAR_7->link_train.training_lane[VAR_8], VAR_8);

 VAR_10 = FUNC_12(&VAR_7->aux, VAR_3,
       VAR_7->link_train.training_lane, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
