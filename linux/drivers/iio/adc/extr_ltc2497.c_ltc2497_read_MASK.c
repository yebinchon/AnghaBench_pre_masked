
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ltc2497_st {scalar_t__ addr_prev; int buf; int time_prev; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;
 int FUNC_3 (struct i2c_client*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ltc2497_st*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ltc2497_st *VAR_3, u8 VAR_4, int *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_3->client;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_7 || VAR_3->addr_prev != VAR_4) {
  VAR_7 = FUNC_3(VAR_3->client,
        VAR_2 | VAR_4);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_3->addr_prev = VAR_4;
  if (FUNC_6(VAR_1))
   return -VAR_0;
 }
 VAR_7 = FUNC_2(VAR_6, (char *)&VAR_3->buf, 3);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_6->dev, "i2c_master_recv failed\n");
  return VAR_7;
 }
 VAR_3->time_prev = FUNC_4();




 *VAR_5 = (FUNC_0(VAR_3->buf) >> 14) - (1 << 17);

 return VAR_7;
}
