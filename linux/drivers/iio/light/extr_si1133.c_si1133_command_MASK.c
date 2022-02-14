
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct si1133_data {int rsp_seq; int mutex; int regmap; int completion; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


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
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int,int,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct si1133_data*) ;
 int FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct si1133_data *VAR_10, u8 VAR_11)
{
 struct device *VAR_12 = &VAR_10->client->dev;
 u32 VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_2(&VAR_10->mutex);

 VAR_15 = (VAR_10->rsp_seq + 1) & VAR_7;

 if (VAR_11 == VAR_2)
  FUNC_7(&VAR_10->completion);

 VAR_14 = FUNC_6(VAR_10->regmap, VAR_8, VAR_11);
 if (VAR_14) {
  FUNC_0(VAR_12, "Failed to write command %#02hhx, ret=%d\n", VAR_11,
    VAR_14);
  goto out;
 }

 if (VAR_11 == VAR_2) {

  if (!FUNC_10(&VAR_10->completion,
   FUNC_1(VAR_6))) {
   VAR_14 = -VAR_0;
   goto out;
  }
  VAR_14 = FUNC_4(VAR_10->regmap, VAR_9, &VAR_13);
  if (VAR_14)
   goto out;
 } else {
  VAR_14 = FUNC_5(VAR_10->regmap,
            VAR_9, VAR_13,
            (VAR_13 & VAR_4) ==
            VAR_15 ||
            (VAR_13 & VAR_1),
            VAR_3,
            VAR_5 * 1000);
  if (VAR_14) {
   FUNC_0(VAR_12,
     "Failed to read command %#02hhx, ret=%d\n",
     VAR_11, VAR_14);
   goto out;
  }
 }

 if (VAR_13 & VAR_1) {
  VAR_14 = FUNC_9(VAR_12, VAR_13, VAR_11);
  FUNC_8(VAR_10);
 } else {
  VAR_10->rsp_seq = VAR_15;
 }

out:
 FUNC_3(&VAR_10->mutex);

 return VAR_14;
}
