
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cm32181_chip {unsigned long calibscale; struct i2c_client* client; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct cm32181_chip*,int*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct cm32181_chip *VAR_6)
{
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 VAR_8 = FUNC_0(VAR_6, &VAR_9);
 if (VAR_8 < 0)
  return -VAR_4;

 VAR_10 = VAR_1;
 VAR_10 *= VAR_2;
 VAR_10 /= VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_10 *= VAR_8;
 VAR_10 *= VAR_6->calibscale;
 VAR_10 /= VAR_0;
 VAR_10 /= VAR_5;

 if (VAR_10 > 0xFFFF)
  VAR_10 = 0xFFFF;

 return VAR_10;
}
