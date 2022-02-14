
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_dev {int use_dma; int is_last; int dev; struct i2c_msg* msg; int xfer; scalar_t__ base; scalar_t__ qup_err; scalar_t__ bus_err; } ;
struct i2c_msg {int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct qup_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_5 (struct qup_i2c_dev*,int ) ;
 int FUNC_6 (struct qup_i2c_dev*,int ) ;
 int FUNC_7 (struct qup_i2c_dev*) ;
 int FUNC_8 (struct qup_i2c_dev*,struct i2c_msg*,int) ;
 int FUNC_9 (struct qup_i2c_dev*,int ) ;
 scalar_t__ FUNC_10 (struct qup_i2c_dev*) ;
 int FUNC_11 (struct qup_i2c_dev*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct i2c_adapter *VAR_10,
      struct i2c_msg VAR_11[],
      int VAR_12)
{
 struct qup_i2c_dev *VAR_13 = FUNC_0(VAR_10);
 int VAR_14, VAR_15 = 0;

 VAR_13->bus_err = 0;
 VAR_13->qup_err = 0;

 VAR_14 = FUNC_1(VAR_13->dev);
 if (VAR_14 < 0)
  goto out;

 VAR_14 = FUNC_8(VAR_13, VAR_11, VAR_12);
 if (VAR_14)
  goto out;

 FUNC_13(1, VAR_13->base + VAR_8);
 VAR_14 = FUNC_9(VAR_13, VAR_7);
 if (VAR_14)
  goto out;


 FUNC_13(VAR_1 | VAR_3, VAR_13->base + VAR_5);
 FUNC_13(VAR_9, VAR_13->base + VAR_6);

 if (FUNC_10(VAR_13)) {
  VAR_14 = -VAR_0;
  goto out;
 }

 if (VAR_13->use_dma) {
  FUNC_12(&VAR_13->xfer);
  VAR_14 = FUNC_4(VAR_10, &VAR_11[0], VAR_12);
  VAR_13->use_dma = 0;
 } else {
  FUNC_7(VAR_13);

  for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
   VAR_13->msg = &VAR_11[VAR_15];
   VAR_13->is_last = VAR_15 == (VAR_12 - 1);

   VAR_14 = FUNC_11(VAR_13, VAR_15,
     !!(VAR_11[VAR_15].flags & VAR_2));
   if (VAR_14)
    break;
  }
  VAR_13->msg = ((void*)0);
 }

 if (!VAR_14)
  VAR_14 = FUNC_5(VAR_13, VAR_4);

 if (!VAR_14)
  FUNC_6(VAR_13, VAR_7);

 if (VAR_14 == 0)
  VAR_14 = VAR_12;
out:
 FUNC_2(VAR_13->dev);
 FUNC_3(VAR_13->dev);

 return VAR_14;
}
