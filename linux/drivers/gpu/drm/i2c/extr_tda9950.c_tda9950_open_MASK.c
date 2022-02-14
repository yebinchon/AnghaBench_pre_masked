
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9950_priv {int adap; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tda9950_priv*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tda9950_priv *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;


 FUNC_3(VAR_5, VAR_3, VAR_1);
 FUNC_0(250);

 FUNC_1(VAR_4->adap, VAR_2);


 FUNC_3(VAR_5, VAR_3, VAR_0);

 return 0;
}
