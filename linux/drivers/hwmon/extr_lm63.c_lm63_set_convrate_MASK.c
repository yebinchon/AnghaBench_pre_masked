
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int max_convrate_hz; int update_interval; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct lm63_data *VAR_2, unsigned int VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;
 unsigned int VAR_5;
 int VAR_6;


 VAR_3 <<= 6;


 VAR_5 = (1 << (VAR_0 + 6)) * 1000
   / VAR_2->max_convrate_hz;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_5 >>= 1)
  if (VAR_3 >= VAR_5 * 3 / 4)
   break;

 FUNC_1(VAR_4, VAR_1, VAR_6);
 VAR_2->update_interval = FUNC_0(VAR_2->max_convrate_hz, VAR_6);
}
