
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid {int dummy; } ;
struct i2c_client {int irq; int name; int dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int ,int) ;
 struct i2c_hid* FUNC_2 (struct i2c_client*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,unsigned long,int ,struct i2c_hid*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3)
{
 struct i2c_hid *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5 = 0;
 int VAR_6;

 FUNC_0(&VAR_3->dev, "Requesting IRQ: %d\n", VAR_3->irq);

 if (!FUNC_3(VAR_3->irq))
  VAR_5 = VAR_1;

 VAR_6 = FUNC_4(VAR_3->irq, ((void*)0), VAR_2,
       VAR_5 | VAR_0, VAR_3->name, VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_3->dev,
   "Could not register for %s interrupt, irq = %d,"
   " ret = %d\n",
   VAR_3->name, VAR_3->irq, VAR_6);

  return VAR_6;
 }

 return 0;
}
