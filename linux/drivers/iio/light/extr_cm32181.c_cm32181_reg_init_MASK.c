
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cm32181_chip {int* conf_regs; int calibscale; struct i2c_client* client; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cm32181_chip *VAR_9)
{
 struct i2c_client *VAR_10 = VAR_9->client;
 int VAR_11;
 s32 VAR_12;

 VAR_12 = FUNC_0(VAR_10, VAR_6);
 if (VAR_12 < 0)
  return VAR_12;


 if ((VAR_12 & 0xFF) != 0x81)
  return -VAR_7;


 VAR_9->conf_regs[VAR_5] = VAR_1 |
   VAR_2 | VAR_3;
 VAR_9->calibscale = VAR_0;


 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_12 = FUNC_1(VAR_10, VAR_8[VAR_11],
   VAR_9->conf_regs[VAR_11]);
  if (VAR_12 < 0)
   return VAR_12;
 }

 return 0;
}
