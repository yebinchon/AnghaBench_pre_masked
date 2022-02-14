
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_i2c_priv {int flags; int wait; int msgs_left; } ;
typedef int irqreturn_t ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rcar_i2c_priv*,int) ;
 int FUNC_2 (struct rcar_i2c_priv*,int) ;
 scalar_t__ FUNC_3 (struct rcar_i2c_priv*) ;
 int FUNC_4 (struct rcar_i2c_priv*,int ) ;
 scalar_t__ FUNC_5 (struct rcar_i2c_priv*) ;
 int FUNC_6 (struct rcar_i2c_priv*,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_14, void *VAR_15)
{
 struct rcar_i2c_priv *VAR_16 = VAR_15;
 u32 VAR_17, VAR_18;


 if (FUNC_0(!(VAR_16->flags & VAR_6))) {
  VAR_18 = FUNC_4(VAR_16, VAR_0);
  FUNC_6(VAR_16, VAR_0, VAR_18 & VAR_12);
 }

 VAR_17 = FUNC_4(VAR_16, VAR_2);


 VAR_17 &= FUNC_4(VAR_16, VAR_1);
 if (!VAR_17) {
  if (FUNC_5(VAR_16))
   return VAR_7;

  return VAR_8;
 }


 if (VAR_17 & VAR_9) {
  VAR_16->flags |= VAR_4 | VAR_3;
  goto out;
 }


 if (VAR_17 & VAR_10) {

  FUNC_6(VAR_16, VAR_1, VAR_13);
  VAR_16->flags |= VAR_5;
  goto out;
 }


 if (VAR_17 & VAR_11) {
  VAR_16->msgs_left--;
  VAR_16->flags |= VAR_4;
  goto out;
 }

 if (FUNC_3(VAR_16))
  FUNC_1(VAR_16, VAR_17);
 else
  FUNC_2(VAR_16, VAR_17);

out:
 if (VAR_16->flags & VAR_4) {
  FUNC_6(VAR_16, VAR_1, 0);
  FUNC_6(VAR_16, VAR_2, 0);
  FUNC_7(&VAR_16->wait);
 }

 return VAR_7;
}
