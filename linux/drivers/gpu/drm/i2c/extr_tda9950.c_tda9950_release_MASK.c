
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda9950_priv {struct i2c_client* client; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tda9950_priv*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct tda9950_priv *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5 = 50;
 u8 VAR_6;


 FUNC_4(VAR_4, VAR_1, 0);


 do {
  VAR_6 = FUNC_3(VAR_4, VAR_2);
  if (!(VAR_6 & VAR_0) || !--VAR_5)
   break;
  FUNC_1(10);
 } while (1);


 if (VAR_6 & VAR_0)
  FUNC_0(&VAR_4->dev, "command processor failed to stop, irq%d may die (csr=0x%02x)\n",
    VAR_4->irq, VAR_6);

 FUNC_2(VAR_3);
}
