
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct i2c_client *VAR_0, u8 VAR_1)
{
 return (FUNC_0(VAR_0, VAR_1) << 8)
  | FUNC_0(VAR_0, VAR_1 + 1);
}
