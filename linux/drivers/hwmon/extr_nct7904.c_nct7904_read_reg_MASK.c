
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct7904_data {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,unsigned int) ;
 int FUNC_1 (struct nct7904_data*,unsigned int) ;
 int FUNC_2 (struct nct7904_data*) ;

__attribute__((used)) static int FUNC_3(struct nct7904_data *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->client;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(VAR_3, VAR_2);

 FUNC_2(VAR_0);
 return VAR_4;
}
