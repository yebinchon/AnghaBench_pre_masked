
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rk3066_hdmi {TYPE_1__* i2c; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int stat; int cmpltn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rk3066_hdmi*,int ) ;
 int FUNC_2 (struct rk3066_hdmi*,int ,int) ;
 scalar_t__ FUNC_3 (struct rk3066_hdmi*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_9, void *VAR_10)
{
 struct rk3066_hdmi *VAR_11 = VAR_10;
 irqreturn_t VAR_12 = VAR_7;
 u8 VAR_13;

 if (FUNC_3(VAR_11) == VAR_5)
  FUNC_2(VAR_11, VAR_4, VAR_6);

 VAR_13 = FUNC_1(VAR_11, VAR_3);
 if (VAR_13)
  FUNC_2(VAR_11, VAR_3, VAR_13);

 if (VAR_13 & VAR_0) {
  VAR_11->i2c->stat = VAR_13;
  FUNC_0(&VAR_11->i2c->cmpltn);
 }

 if (VAR_13 & (VAR_1 | VAR_2))
  VAR_12 = VAR_8;

 return VAR_12;
}
