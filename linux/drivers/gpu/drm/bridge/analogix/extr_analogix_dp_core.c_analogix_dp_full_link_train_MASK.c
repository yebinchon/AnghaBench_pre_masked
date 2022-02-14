
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ link_rate; scalar_t__ lane_count; int lt_state; } ;
struct analogix_dp_device {int dev; TYPE_1__ link_train; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;


 scalar_t__ VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (struct analogix_dp_device*,scalar_t__*) ;
 int FUNC_1 (struct analogix_dp_device*,scalar_t__*) ;
 int FUNC_2 (struct analogix_dp_device*) ;
 int FUNC_3 (struct analogix_dp_device*) ;
 int FUNC_4 (struct analogix_dp_device*) ;
 int FUNC_5 (struct analogix_dp_device*) ;
 int FUNC_6 (struct analogix_dp_device*,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct analogix_dp_device *VAR_6,
           u32 VAR_7, u32 VAR_8)
{
 int VAR_9 = 0;
 bool VAR_10 = 0;





 FUNC_5(VAR_6);


 FUNC_0(VAR_6, &VAR_6->link_train.link_rate);
 FUNC_1(VAR_6, &VAR_6->link_train.lane_count);

 if ((VAR_6->link_train.link_rate != VAR_0) &&
     (VAR_6->link_train.link_rate != VAR_1) &&
     (VAR_6->link_train.link_rate != VAR_2)) {
  FUNC_7(VAR_6->dev, "Rx Max Link Rate is abnormal :%x !\n",
   VAR_6->link_train.link_rate);
  VAR_6->link_train.link_rate = VAR_0;
 }

 if (VAR_6->link_train.lane_count == 0) {
  FUNC_7(VAR_6->dev, "Rx Max Lane count is abnormal :%x !\n",
   VAR_6->link_train.lane_count);
  VAR_6->link_train.lane_count = (u8)VAR_4;
 }


 if (VAR_6->link_train.lane_count > VAR_7)
  VAR_6->link_train.lane_count = VAR_7;
 if (VAR_6->link_train.link_rate > VAR_8)
  VAR_6->link_train.link_rate = VAR_8;


 FUNC_6(VAR_6, VAR_5, 0);

 VAR_6->link_train.lt_state = 128;


 while (!VAR_9 && !VAR_10) {
  switch (VAR_6->link_train.lt_state) {
  case 128:
   VAR_9 = FUNC_2(VAR_6);
   if (VAR_9)
    FUNC_7(VAR_6->dev, "LT link start failed!\n");
   break;
  case 132:
   VAR_9 = FUNC_3(VAR_6);
   if (VAR_9)
    FUNC_7(VAR_6->dev, "LT CR failed!\n");
   break;
  case 131:
   VAR_9 = FUNC_4(VAR_6);
   if (VAR_9)
    FUNC_7(VAR_6->dev, "LT EQ failed!\n");
   break;
  case 129:
   VAR_10 = 1;
   break;
  case 130:
   return -VAR_3;
  }
 }
 if (VAR_9)
  FUNC_7(VAR_6->dev, "eDP link training failed (%d)\n", VAR_9);

 return VAR_9;
}
