
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_i2c_dev {int msg_ptr; scalar_t__ err; scalar_t__ base; int lock; int msg_complete; struct i2c_msg* msg; } ;
struct i2c_msg {int len; unsigned int* buf; int flags; } ;
struct i2c_adapter {int dev; int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 unsigned int VAR_24 ;
 int FUNC_2 (int *,char*) ;
 unsigned int FUNC_3 (struct i2c_msg*) ;
 struct owl_i2c_dev* FUNC_4 (struct i2c_adapter*) ;
 int FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (struct owl_i2c_dev*) ;
 int FUNC_7 (struct owl_i2c_dev*) ;
 int FUNC_8 (struct owl_i2c_dev*) ;
 int FUNC_9 (scalar_t__,int,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 unsigned long FUNC_14 (int *,int ) ;
 int FUNC_15 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct i2c_adapter *VAR_25, struct i2c_msg *VAR_26,
          int VAR_27)
{
 struct owl_i2c_dev *VAR_28 = FUNC_4(VAR_25);
 struct i2c_msg *VAR_29;
 unsigned long VAR_30, VAR_31;
 unsigned int VAR_32, VAR_33;
 unsigned int VAR_34;
 int VAR_35, VAR_36;

 FUNC_12(&VAR_28->lock, VAR_31);


 FUNC_6(VAR_28);


 FUNC_8(VAR_28);





 FUNC_13(&VAR_28->lock, VAR_31);


 VAR_35 = FUNC_7(VAR_28);
 if (VAR_35)
  goto unlocked_err_exit;


 VAR_35 = FUNC_5(VAR_25);
 if (VAR_35)
  goto unlocked_err_exit;

 FUNC_12(&VAR_28->lock, VAR_31);


 VAR_33 = FUNC_10(VAR_28->base + VAR_22);
 if (VAR_33 & VAR_24) {
  VAR_33 &= ~VAR_24;
  FUNC_15(VAR_33, VAR_28->base + VAR_22);
  VAR_35 = -VAR_0;
  goto err_exit;
 }

 FUNC_11(&VAR_28->msg_complete);


 FUNC_9(VAR_28->base + VAR_18,
      VAR_13, 1);





 VAR_32 = VAR_10 | VAR_5 | VAR_9 |
    VAR_6 | VAR_4 | VAR_8;


 if (VAR_27 > 1) {

  VAR_32 |= FUNC_0(VAR_26[0].len + 1) |
      FUNC_1(1) | VAR_7;


  VAR_34 = FUNC_3(&VAR_26[0]);
  FUNC_15(VAR_34, VAR_28->base + VAR_23);


  for (VAR_36 = 0; VAR_36 < VAR_26[0].len; VAR_36++)
   FUNC_15(VAR_26[0].buf[VAR_36],
          VAR_28->base + VAR_23);

  VAR_29 = &VAR_26[1];
 } else {

  VAR_32 |= FUNC_0(1);
  VAR_29 = &VAR_26[0];
 }

 VAR_28->msg = VAR_29;
 VAR_28->msg_ptr = 0;


 FUNC_15(VAR_29->len, VAR_28->base + VAR_19);

 VAR_34 = FUNC_3(VAR_29);
 FUNC_15(VAR_34, VAR_28->base + VAR_23);

 if (!(VAR_29->flags & VAR_3)) {

  for (VAR_36 = 0; VAR_36 < VAR_29->len; VAR_36++) {

   if (FUNC_10(VAR_28->base + VAR_21) &
       VAR_16)
    break;

   FUNC_15(VAR_29->buf[VAR_36],
          VAR_28->base + VAR_23);
  }

  VAR_28->msg_ptr = VAR_36;
 }


 if (VAR_29->flags & VAR_2)
  FUNC_9(VAR_28->base + VAR_20,
       VAR_15, 1);
 else
  FUNC_9(VAR_28->base + VAR_20,
       VAR_15, 0);


 FUNC_15(VAR_32, VAR_28->base + VAR_17);

 FUNC_13(&VAR_28->lock, VAR_31);

 VAR_30 = FUNC_14(&VAR_28->msg_complete,
      VAR_25->timeout);

 FUNC_12(&VAR_28->lock, VAR_31);
 if (VAR_30 == 0) {
  FUNC_2(&VAR_25->dev, "Transaction timed out\n");

  FUNC_9(VAR_28->base + VAR_18,
       VAR_12 | VAR_14,
       1);
  VAR_35 = -VAR_1;
  goto err_exit;
 }

 VAR_35 = VAR_28->err < 0 ? VAR_28->err : VAR_27;

err_exit:
 FUNC_13(&VAR_28->lock, VAR_31);

unlocked_err_exit:

 FUNC_9(VAR_28->base + VAR_18,
      VAR_11, 0);

 return VAR_35;
}
