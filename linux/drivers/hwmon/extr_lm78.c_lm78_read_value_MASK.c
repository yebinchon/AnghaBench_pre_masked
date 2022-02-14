
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm78_data {int lock; scalar_t__ isa_addr; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct lm78_data *VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;
  return FUNC_0(VAR_4, VAR_3);
}
