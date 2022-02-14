
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct cht_wc_i2c_adap {int io_error; int done; int adap_lock; int read_data; int wait; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 int FUNC_0 (int ,struct cht_wc_i2c_adap*) ;
 struct cht_wc_i2c_adap* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_10, u16 VAR_11,
          unsigned short VAR_12, char VAR_13,
          u8 VAR_14, int VAR_15,
          union i2c_smbus_data *VAR_16)
{
 struct cht_wc_i2c_adap *VAR_17 = FUNC_1(VAR_10);
 int VAR_18;

 FUNC_3(&VAR_17->adap_lock);
 VAR_17->io_error = 0;
 VAR_17->done = 0;
 FUNC_4(&VAR_17->adap_lock);

 VAR_18 = FUNC_5(VAR_17->regmap, VAR_0, VAR_11);
 if (VAR_18)
  return VAR_18;

 if (VAR_13 == VAR_9) {
  VAR_18 = FUNC_5(VAR_17->regmap, VAR_5, VAR_16->byte);
  if (VAR_18)
   return VAR_18;
 }

 VAR_18 = FUNC_5(VAR_17->regmap, VAR_4, VAR_14);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_17->regmap, VAR_1,
      (VAR_13 == VAR_9) ?
      VAR_3 : VAR_2);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_6(VAR_17->wait, VAR_17->done, FUNC_2(30));
 if (VAR_18 == 0) {




  FUNC_0(0, VAR_17);
  if (!VAR_17->done)
   return -VAR_7;
 }

 VAR_18 = 0;
 FUNC_3(&VAR_17->adap_lock);
 if (VAR_17->io_error)
  VAR_18 = -VAR_6;
 else if (VAR_13 == VAR_8)
  VAR_16->byte = VAR_17->read_data;
 FUNC_4(&VAR_17->adap_lock);

 return VAR_18;
}
