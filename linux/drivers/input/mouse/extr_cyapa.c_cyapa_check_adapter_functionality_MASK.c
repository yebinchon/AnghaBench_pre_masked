
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static u8 FUNC_1(struct i2c_client *VAR_7)
{
 u8 VAR_8 = VAR_1;

 if (FUNC_0(VAR_7->adapter, VAR_3))
  VAR_8 |= VAR_0;
 if (FUNC_0(VAR_7->adapter, VAR_5 |
         VAR_4 |
         VAR_6))
  VAR_8 |= VAR_2;
 return VAR_8;
}
