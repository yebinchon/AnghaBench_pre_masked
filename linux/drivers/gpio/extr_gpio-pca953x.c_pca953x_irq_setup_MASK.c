
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca953x_chip {int driver_data; struct i2c_client* client; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct pca953x_chip *VAR_1,
        int VAR_2)
{
 struct i2c_client *VAR_3 = VAR_1->client;

 if (VAR_3->irq && VAR_2 != -1 && (VAR_1->driver_data & VAR_0))
  FUNC_0(&VAR_3->dev, "interrupt support not compiled in\n");

 return 0;
}
