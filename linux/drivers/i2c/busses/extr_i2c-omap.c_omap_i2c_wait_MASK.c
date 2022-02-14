
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_i2c_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct omap_i2c_dev *VAR_2)
{
 u16 VAR_3;
 u16 VAR_4 = FUNC_0(VAR_2, VAR_0);
 int VAR_5 = 0;

 do {
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  VAR_5++;
 } while (!(VAR_3 & VAR_4) && VAR_5 < 5);
}
