
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_olinuxino {int panel; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct lcd_olinuxino* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct lcd_olinuxino *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->panel);

 FUNC_2(&VAR_1->panel);
 FUNC_3(&VAR_1->panel);

 return 0;
}
