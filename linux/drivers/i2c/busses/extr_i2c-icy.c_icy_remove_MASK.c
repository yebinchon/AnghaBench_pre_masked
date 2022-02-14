
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_dev {int dev; } ;
struct icy_i2c {int adapter; int ltc2990_fwnode; int ltc2990_client; } ;


 struct icy_i2c* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct zorro_dev *VAR_0)
{
 struct icy_i2c *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_3(VAR_1->ltc2990_client);
 FUNC_1(VAR_1->ltc2990_fwnode);

 FUNC_2(&VAR_1->adapter);
}
