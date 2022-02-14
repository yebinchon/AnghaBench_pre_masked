
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_i2c_dev*,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_1(int VAR_4, void *VAR_5)
{
 struct omap_i2c_dev *VAR_6 = VAR_5;
 irqreturn_t VAR_7 = VAR_0;
 u16 VAR_8;
 u16 VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_3);
 VAR_8 = FUNC_0(VAR_6, VAR_2);

 if (VAR_9 & VAR_8)
  VAR_7 = VAR_1;

 return VAR_7;
}
