
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ocores_i2c*,int ) ;
 int FUNC_1 (struct ocores_i2c*,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct ocores_i2c *VAR_8 = VAR_7;
 u8 VAR_9 = FUNC_0(VAR_8, VAR_2);

 if (VAR_8->flags & VAR_5) {
  if ((VAR_9 & VAR_4) && !(VAR_9 & VAR_3))
   return VAR_1;
 } else if (!(VAR_9 & VAR_4)) {
  return VAR_1;
 }
 FUNC_1(VAR_8, VAR_9);

 return VAR_0;
}
