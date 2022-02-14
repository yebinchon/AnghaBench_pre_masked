
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pca9541 {int select_timeout; scalar_t__ arb_timeout; struct i2c_client* client; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pca9541* FUNC_0 (struct i2c_mux_core*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct i2c_mux_core *VAR_5, u32 VAR_6)
{
 struct pca9541 *VAR_7 = FUNC_0(VAR_5);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 unsigned long VAR_10 = VAR_4 + VAR_0;


 VAR_7->arb_timeout = VAR_4 + VAR_1;


 do {
  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9)
   return VAR_9 < 0 ? VAR_9 : 0;

  if (VAR_7->select_timeout == VAR_3)
   FUNC_4(VAR_7->select_timeout);
  else
   FUNC_1(VAR_7->select_timeout / 1000);
 } while (FUNC_3(VAR_10));

 return -VAR_2;
}
