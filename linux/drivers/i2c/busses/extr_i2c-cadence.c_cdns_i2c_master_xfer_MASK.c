
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_msg {int flags; } ;
struct TYPE_2__ {int parent; } ;
struct i2c_adapter {TYPE_1__ dev; struct cdns_i2c* algo_data; } ;
struct cdns_i2c {int quirks; int bus_hold_flag; int err_status; int dev; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct cdns_i2c*,struct i2c_msg*,struct i2c_adapter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_11, struct i2c_msg *VAR_12,
    int VAR_13)
{
 int VAR_14, VAR_15;
 u32 VAR_16;
 struct cdns_i2c *VAR_17 = VAR_11->algo_data;
 bool VAR_18;

 VAR_14 = FUNC_5(VAR_17->dev);
 if (VAR_14 < 0)
  return VAR_14;

 if (FUNC_2(VAR_5) & VAR_4) {
  VAR_14 = -VAR_6;
  goto out;
 }

 VAR_18 = !!(VAR_17->quirks & VAR_0);




 if (VAR_13 > 1) {







  for (VAR_15 = 0; (VAR_15 < VAR_13 - 1 && VAR_18); VAR_15++) {
   if (VAR_12[VAR_15].flags & VAR_10) {
    FUNC_4(VAR_11->dev.parent,
      "Can't do repeated start after a receive message\n");
    VAR_14 = -VAR_9;
    goto out;
   }
  }
  VAR_17->bus_hold_flag = 1;
  VAR_16 = FUNC_2(VAR_2);
  VAR_16 |= VAR_1;
  FUNC_3(VAR_16, VAR_2);
 } else {
  VAR_17->bus_hold_flag = 0;
 }


 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++, VAR_12++) {
  if (VAR_15 == (VAR_13 - 1))
   VAR_17->bus_hold_flag = 0;

  VAR_14 = FUNC_1(VAR_17, VAR_12, VAR_11);
  if (VAR_14)
   goto out;


  if (VAR_17->err_status) {
   FUNC_0(VAR_11);

   if (VAR_17->err_status & VAR_3) {
    VAR_14 = -VAR_8;
    goto out;
   }
   VAR_14 = -VAR_7;
   goto out;
  }
 }

 VAR_14 = VAR_13;
out:
 FUNC_6(VAR_17->dev);
 FUNC_7(VAR_17->dev);
 return VAR_14;
}
