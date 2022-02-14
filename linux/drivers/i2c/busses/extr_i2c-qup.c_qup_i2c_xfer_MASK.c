
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_dev {int dev; struct i2c_msg* msg; scalar_t__ base; scalar_t__ qup_err; scalar_t__ bus_err; } ;
struct i2c_msg {int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct qup_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qup_i2c_dev*,int ) ;
 scalar_t__ FUNC_5 (struct i2c_msg*) ;
 int FUNC_6 (struct qup_i2c_dev*,int ) ;
 scalar_t__ FUNC_7 (struct qup_i2c_dev*) ;
 int FUNC_8 (struct qup_i2c_dev*) ;
 int FUNC_9 (struct qup_i2c_dev*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_8,
   struct i2c_msg VAR_9[],
   int VAR_10)
{
 struct qup_i2c_dev *VAR_11 = FUNC_0(VAR_8);
 int VAR_12, VAR_13;

 VAR_12 = FUNC_1(VAR_11->dev);
 if (VAR_12 < 0)
  goto out;

 VAR_11->bus_err = 0;
 VAR_11->qup_err = 0;

 FUNC_10(1, VAR_11->base + VAR_7);
 VAR_12 = FUNC_6(VAR_11, VAR_6);
 if (VAR_12)
  goto out;


 FUNC_10(VAR_2 | VAR_4, VAR_11->base + VAR_5);

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  if (FUNC_7(VAR_11)) {
   VAR_12 = -VAR_1;
   goto out;
  }

  if (FUNC_5(&VAR_9[VAR_13])) {
   VAR_12 = -VAR_0;
   goto out;
  }

  VAR_11->msg = &VAR_9[VAR_13];
  if (VAR_9[VAR_13].flags & VAR_3)
   VAR_12 = FUNC_8(VAR_11);
  else
   VAR_12 = FUNC_9(VAR_11);

  if (VAR_12)
   break;

  VAR_12 = FUNC_4(VAR_11, VAR_6);
  if (VAR_12)
   break;
 }

 if (VAR_12 == 0)
  VAR_12 = VAR_10;
out:

 FUNC_2(VAR_11->dev);
 FUNC_3(VAR_11->dev);

 return VAR_12;
}
