
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct edt_ft5x06_ts_data {int version; int max_support_points; int input; int prop; TYPE_1__* client; } ;
struct device {int dummy; } ;
typedef int rdbuf ;
typedef int irqreturn_t ;
typedef int cmd ;
struct TYPE_2__ {struct device dev; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct edt_ft5x06_ts_data*,int*,int) ;
 int FUNC_2 (TYPE_1__*,int,int*,int,int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int *,int,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_5, void *VAR_6)
{
 struct edt_ft5x06_ts_data *VAR_7 = VAR_6;
 struct device *VAR_8 = &VAR_7->client->dev;
 u8 VAR_9;
 u8 VAR_10[63];
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20;

 switch (VAR_7->version) {
 case 132:
  VAR_9 = 0xf9;
  VAR_16 = 5;
  VAR_17 = 4;
  VAR_19 = 1;
  break;

 case 131:
 case 130:
 case 129:
 case 128:
  VAR_9 = 0x0;
  VAR_16 = 3;
  VAR_17 = 6;
  VAR_19 = 0;
  break;

 default:
  goto out;
 }

 FUNC_8(VAR_10, 0, sizeof(VAR_10));
 VAR_18 = VAR_17 * VAR_7->max_support_points + VAR_16 + VAR_19;

 VAR_20 = FUNC_2(VAR_7->client,
     sizeof(VAR_9), &VAR_9,
     VAR_18, VAR_10);
 if (VAR_20) {
  FUNC_0(VAR_8, "Unable to fetch data, error: %d\n",
        VAR_20);
  goto out;
 }


 if (VAR_7->version == 132) {
  if (VAR_10[0] != 0xaa || VAR_10[1] != 0xaa ||
   VAR_10[2] != VAR_18) {
   FUNC_0(VAR_8,
     "Unexpected header: %02x%02x%02x!\n",
     VAR_10[0], VAR_10[1], VAR_10[2]);
   goto out;
  }

  if (!FUNC_1(VAR_7, VAR_10, VAR_18))
   goto out;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->max_support_points; VAR_11++) {
  u8 *VAR_21 = &VAR_10[VAR_11 * VAR_17 + VAR_16];

  VAR_12 = VAR_21[0] >> 6;

  if (VAR_12 == VAR_3)
   continue;


  if (VAR_7->version == 132 && VAR_12 == VAR_2)
   continue;

  VAR_13 = FUNC_3(VAR_21) & 0x0fff;
  VAR_14 = FUNC_3(VAR_21 + 2) & 0x0fff;

  if (VAR_7->version == 129)
   FUNC_9(VAR_13, VAR_14);

  VAR_15 = (VAR_21[2] >> 4) & 0x0f;

  FUNC_6(VAR_7->input, VAR_15);
  if (FUNC_5(VAR_7->input, VAR_1,
            VAR_12 != VAR_4))
   FUNC_10(VAR_7->input, &VAR_7->prop,
            VAR_13, VAR_14, 1);
 }

 FUNC_4(VAR_7->input, 1);
 FUNC_7(VAR_7->input);

out:
 return VAR_0;
}
