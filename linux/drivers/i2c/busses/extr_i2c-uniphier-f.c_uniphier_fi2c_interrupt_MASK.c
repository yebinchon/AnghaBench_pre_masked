
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_fi2c_priv {int enabled_irqs; int flags; int len; int lock; int comp; scalar_t__ membase; int error; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uniphier_fi2c_priv*,int) ;
 int FUNC_5 (struct uniphier_fi2c_priv*) ;
 int FUNC_6 (struct uniphier_fi2c_priv*,int) ;
 int FUNC_7 (struct uniphier_fi2c_priv*) ;
 int FUNC_8 (struct uniphier_fi2c_priv*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_20, void *VAR_21)
{
 struct uniphier_fi2c_priv *VAR_22 = VAR_21;
 u32 VAR_23;

 FUNC_2(&VAR_22->lock);

 VAR_23 = FUNC_1(VAR_22->membase + VAR_10);
 VAR_23 &= VAR_22->enabled_irqs;

 if (VAR_23 & VAR_15)
  goto complete;

 if (FUNC_9(VAR_23 & VAR_11)) {
  VAR_22->error = -VAR_0;
  goto complete;
 }

 if (FUNC_9(VAR_23 & VAR_12)) {
  VAR_22->error = -VAR_1;
  if (VAR_22->flags & VAR_18) {
   FUNC_8(VAR_22);
   VAR_22->flags |= VAR_8;
   goto complete;
  }
  goto stop;
 }

 if (VAR_23 & VAR_16) {
  if (!VAR_22->len)
   goto data_done;

  FUNC_6(VAR_22, 0);
  goto handled;
 }

 if (VAR_23 & (VAR_14 | VAR_13)) {
  FUNC_5(VAR_22);






  if (!VAR_22->len && (VAR_23 & VAR_13))
   goto data_done;

  if (FUNC_9(VAR_22->flags & VAR_17)) {
   if (VAR_22->len <= VAR_9 &&
       !(VAR_22->flags & VAR_4)) {
    VAR_22->enabled_irqs |= VAR_13;
    FUNC_7(VAR_22);
    VAR_22->flags |= VAR_4;
   }
   if (VAR_22->len <= 1)
    FUNC_10(VAR_6 |
           VAR_7,
           VAR_22->membase + VAR_5);
  }

  goto handled;
 }

 FUNC_3(&VAR_22->lock);

 return VAR_3;

data_done:
 if (VAR_22->flags & VAR_19) {
stop:
  FUNC_8(VAR_22);
 } else {
complete:
  VAR_22->enabled_irqs = 0;
  FUNC_7(VAR_22);
  FUNC_0(&VAR_22->comp);
 }

handled:





 FUNC_4(VAR_22, VAR_23);

 FUNC_3(&VAR_22->lock);

 return VAR_2;
}
