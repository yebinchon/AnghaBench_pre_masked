
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct i2c_client const*,int ) ;
 int* VAR_7 ;
 int FUNC_2 (struct i2c_client const*,int ,int) ;

__attribute__((used)) static inline s32 FUNC_3(const struct i2c_client *VAR_8,
          int VAR_9)
{
 int VAR_10;
 s32 VAR_11;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); ++VAR_10) {
  if (VAR_9 == VAR_7[VAR_10])
   break;
 }

 if (VAR_10 == FUNC_0(VAR_7))
  return -VAR_0;






 VAR_11 = FUNC_1(VAR_8, VAR_1);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 &= ~VAR_2;
 VAR_11 |= VAR_6 << VAR_3;
 VAR_11 &= ~VAR_4;
 VAR_11 |= VAR_10 << VAR_5;


 VAR_11 = FUNC_2(VAR_8, VAR_1, VAR_11);
 return VAR_11;
}
