
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_fi2c_priv {int error; int flags; scalar_t__ membase; int lock; scalar_t__ enabled_irqs; int comp; int buf; int len; } ;
struct i2c_msg {int flags; int addr; int buf; int len; } ;
struct i2c_adapter {int dev; int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,char*) ;
 struct uniphier_fi2c_priv* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uniphier_fi2c_priv*,int ) ;
 int FUNC_7 (struct uniphier_fi2c_priv*) ;
 int FUNC_8 (struct uniphier_fi2c_priv*,int ) ;
 int FUNC_9 (struct uniphier_fi2c_priv*) ;
 int FUNC_10 (struct uniphier_fi2c_priv*,int ,int) ;
 scalar_t__ FUNC_11 (int) ;
 unsigned long FUNC_12 (int *,int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct i2c_adapter *VAR_15,
      struct i2c_msg *VAR_16, bool VAR_17,
      bool VAR_18)
{
 struct uniphier_fi2c_priv *VAR_19 = FUNC_1(VAR_15);
 bool VAR_20 = VAR_16->flags & VAR_1;
 unsigned long VAR_21, VAR_22;

 VAR_19->len = VAR_16->len;
 VAR_19->buf = VAR_16->buf;
 VAR_19->enabled_irqs = VAR_7;
 VAR_19->error = 0;
 VAR_19->flags = 0;

 if (VAR_18)
  VAR_19->flags |= VAR_14;

 FUNC_3(&VAR_19->comp);
 FUNC_6(VAR_19, VAR_2);
 FUNC_13(VAR_10 | VAR_9,
        VAR_19->membase + VAR_8);

 FUNC_4(&VAR_19->lock, VAR_22);

 if (VAR_20)
  FUNC_8(VAR_19, VAR_16->addr);
 else
  FUNC_10(VAR_19, VAR_16->addr, VAR_17);






 if (!VAR_17)
  FUNC_13(VAR_4 | VAR_5,
         VAR_19->membase + VAR_3);

 FUNC_5(&VAR_19->lock, VAR_22);

 VAR_21 = FUNC_12(&VAR_19->comp, VAR_15->timeout);

 FUNC_4(&VAR_19->lock, VAR_22);
 VAR_19->enabled_irqs = 0;
 FUNC_9(VAR_19);
 FUNC_5(&VAR_19->lock, VAR_22);

 if (!VAR_21) {
  FUNC_0(&VAR_15->dev, "transaction timeout.\n");
  FUNC_7(VAR_19);
  return -VAR_0;
 }

 if (FUNC_11(VAR_19->flags & VAR_6)) {
  u32 VAR_23;
  int VAR_24;

  VAR_24 = FUNC_2(VAR_19->membase + VAR_11,
      VAR_23,
      (VAR_23 & VAR_13) &&
      !(VAR_23 & VAR_12),
      1, 20);
  if (VAR_24) {
   FUNC_0(&VAR_15->dev,
    "stop condition was not completed.\n");
   FUNC_7(VAR_19);
   return VAR_24;
  }
 }

 return VAR_19->error;
}
