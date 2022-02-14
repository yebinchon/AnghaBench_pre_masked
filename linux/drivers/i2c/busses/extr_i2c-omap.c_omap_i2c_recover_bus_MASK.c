
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct omap_i2c_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct omap_i2c_dev *VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if ((VAR_5 & VAR_2) &&
     (VAR_5 & VAR_3))
  return 0;
 if (!(VAR_5 & VAR_2))
  return -VAR_0;
 return FUNC_0(&VAR_4->adapter);
}
