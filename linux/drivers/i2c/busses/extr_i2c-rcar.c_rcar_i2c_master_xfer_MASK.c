
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {scalar_t__ devtype; int flags; int msgs_left; scalar_t__ dma_direction; int wait; struct i2c_msg* msg; int rstc; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int timeout; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 struct rcar_i2c_priv* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct rcar_i2c_priv*) ;
 int FUNC_6 (struct rcar_i2c_priv*) ;
 int FUNC_7 (struct rcar_i2c_priv*) ;
 int FUNC_8 (struct rcar_i2c_priv*) ;
 int FUNC_9 (struct rcar_i2c_priv*) ;
 struct device* FUNC_10 (struct rcar_i2c_priv*) ;
 int FUNC_11 (struct rcar_i2c_priv*,struct i2c_msg*) ;
 long FUNC_12 (int ,int,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_adapter *VAR_11,
    struct i2c_msg *VAR_12,
    int VAR_13)
{
 struct rcar_i2c_priv *VAR_14 = FUNC_2(VAR_11);
 struct device *VAR_15 = FUNC_10(VAR_14);
 int VAR_16, VAR_17;
 long VAR_18;

 FUNC_3(VAR_15);


 VAR_17 = FUNC_5(VAR_14);
 if (VAR_17 < 0)
  goto out;


 if (VAR_14->devtype == VAR_4) {
  VAR_14->flags |= VAR_10;
  if (!FUNC_0(VAR_14->rstc)) {
   VAR_17 = FUNC_7(VAR_14);
   if (VAR_17 == 0)
    VAR_14->flags &= ~VAR_10;
  }
 }

 FUNC_8(VAR_14);

 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
  FUNC_11(VAR_14, VAR_12 + VAR_16);


 VAR_14->msg = VAR_12;
 VAR_14->msgs_left = VAR_13;
 VAR_14->flags = (VAR_14->flags & VAR_9) | VAR_7;
 FUNC_9(VAR_14);

 VAR_18 = FUNC_12(VAR_14->wait, VAR_14->flags & VAR_6,
         VAR_13 * VAR_11->timeout);


 if (VAR_14->dma_direction != VAR_0)
  FUNC_6(VAR_14);

 if (!VAR_18) {
  FUNC_8(VAR_14);
  VAR_17 = -VAR_3;
 } else if (VAR_14->flags & VAR_8) {
  VAR_17 = -VAR_2;
 } else if (VAR_14->flags & VAR_5) {
  VAR_17 = -VAR_1;
 } else {
  VAR_17 = VAR_13 - VAR_14->msgs_left;
 }
out:
 FUNC_4(VAR_15);

 if (VAR_17 < 0 && VAR_17 != -VAR_2)
  FUNC_1(VAR_15, "error %d : %x\n", VAR_17, VAR_14->flags);

 return VAR_17;
}
