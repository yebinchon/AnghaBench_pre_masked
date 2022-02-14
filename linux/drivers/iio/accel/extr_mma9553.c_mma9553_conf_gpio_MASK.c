
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mma9553_event {scalar_t__ enabled; } ;
struct mma9553_data {scalar_t__ gpio_bitnum; int client; int stepcnt; int activity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ) ;
 struct mma9553_event* FUNC_2 (struct mma9553_data*,int ,int ,int ) ;
 int FUNC_3 (struct mma9553_data*,int,int ) ;
 int FUNC_4 (struct mma9553_data*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct mma9553_data *VAR_11)
{
 u8 VAR_12 = 0, VAR_13 = VAR_5;
 int VAR_14;
 struct mma9553_event *VAR_15;
 bool VAR_16;

 VAR_16 = FUNC_3(VAR_11, 1,
       VAR_0);
 VAR_15 = FUNC_2(VAR_11, VAR_3, VAR_2,
        VAR_1);





 if (VAR_16 && VAR_15->enabled)
  VAR_12 = FUNC_0(VAR_9);
 else if (VAR_15->enabled)
  VAR_12 = FUNC_0(VAR_10);
 else if (VAR_16)
  VAR_12 = FUNC_0(VAR_8);
 else
  VAR_13 = VAR_4;

 if (VAR_11->gpio_bitnum == VAR_12)
  return 0;


 if (VAR_16 || VAR_15->enabled) {
  VAR_14 = FUNC_4(VAR_11, &VAR_11->activity,
          &VAR_11->stepcnt);
  if (VAR_14 < 0)
   return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_11->client, VAR_6, VAR_13,
      VAR_12, VAR_7);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_11->gpio_bitnum = VAR_12;

 return 0;
}
