
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sis_ts_data {TYPE_1__* client; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


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
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t FUNC_0 (scalar_t__) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int *,char*,scalar_t__ const) ;
 scalar_t__ FUNC_4 (scalar_t__ const*) ;
 int FUNC_5 (struct input_dev*,scalar_t__ const) ;
 int FUNC_6 (struct input_dev*,int ,int) ;
 int FUNC_7 (struct input_dev*,int) ;
 int FUNC_8 (struct input_dev*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sis_ts_data *VAR_18, const u8 *VAR_19, u8 VAR_20)
{
 struct input_dev *VAR_21 = VAR_18->input;
 int VAR_22;
 u8 VAR_23 = VAR_19[VAR_12];
 u8 VAR_24;
 u8 VAR_25, VAR_26;
 u16 VAR_27, VAR_28;

 if (VAR_23 != VAR_16 && VAR_23 != VAR_17) {
  FUNC_3(&VAR_18->client->dev, "Unexpected touch status: %#02x\n",
   VAR_19[VAR_12]);
  return -VAR_5;
 }

 VAR_22 = FUNC_5(VAR_21, VAR_19[VAR_11]);
 if (VAR_22 < 0)
  return -VAR_6;

 FUNC_7(VAR_21, VAR_22);
 FUNC_6(VAR_21, VAR_7,
       VAR_23 == VAR_16);

 if (VAR_23 == VAR_16) {
  VAR_24 = VAR_25 = VAR_26 = 1;
  if (VAR_20 != VAR_8) {
   if (FUNC_1(VAR_20)) {
    VAR_26 = VAR_19[VAR_13];
    VAR_25 = VAR_19[VAR_10];
   }

   if (FUNC_2(VAR_20))
    VAR_24 =
     VAR_19[FUNC_0(VAR_20)];
  }

  VAR_27 = FUNC_4(&VAR_19[VAR_14]);
  VAR_28 = FUNC_4(&VAR_19[VAR_15]);

  FUNC_8(VAR_21, VAR_3,
     VAR_26 * VAR_9);
  FUNC_8(VAR_21, VAR_4,
     VAR_25 * VAR_9);
  FUNC_8(VAR_21, VAR_2, VAR_24);
  FUNC_8(VAR_21, VAR_0, VAR_27);
  FUNC_8(VAR_21, VAR_1, VAR_28);
 }

 return 0;
}
