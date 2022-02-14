
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct firmware {int* data; } ;
struct elan_tp_data {int fw_validpage_count; TYPE_1__* ops; int fw_completion; struct i2c_client* client; } ;
struct TYPE_2__ {int (* prepare_fw_update ) (struct i2c_client*) ;int (* finish_fw_update ) (struct i2c_client*,int *) ;int (* get_checksum ) (struct i2c_client*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct elan_tp_data*,int const*,int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,int,int*) ;

__attribute__((used)) static int FUNC_7(struct elan_tp_data *VAR_3,
      const struct firmware *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_3->client;
 struct device *VAR_6 = &VAR_5->dev;
 int VAR_7, VAR_8;
 int VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 u16 VAR_12 = 0, VAR_13 = 0;

 VAR_9 = VAR_3->ops->prepare_fw_update(VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_10 = FUNC_2(&VAR_4->data[VAR_2 * 2]);

 VAR_11 = (VAR_10 * 2) / VAR_1;
 for (VAR_7 = VAR_11; VAR_7 < VAR_3->fw_validpage_count; VAR_7++) {
  u16 VAR_14 = 0;
  const u8 *VAR_15 = &VAR_4->data[VAR_7 * VAR_1];

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8 += 2)
   VAR_14 += ((VAR_15[VAR_8 + 1] << 8) | VAR_15[VAR_8]);

  VAR_9 = FUNC_1(VAR_3, VAR_15, VAR_14, VAR_7);
  if (VAR_9) {
   FUNC_0(VAR_6, "write page %d fail: %d\n", VAR_7, VAR_9);
   return VAR_9;
  }

  VAR_12 += VAR_14;
 }


 FUNC_3(600);

 VAR_9 = VAR_3->ops->finish_fw_update(VAR_5, &VAR_3->fw_completion);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_3->ops->get_checksum(VAR_5, 1, &VAR_13);
 if (VAR_9)
  return VAR_9;

 if (VAR_12 != VAR_13) {
  FUNC_0(VAR_6, "checksum diff sw=[%04X], fw=[%04X]\n",
   VAR_12, VAR_13);
  return -VAR_0;
 }

 return 0;
}
