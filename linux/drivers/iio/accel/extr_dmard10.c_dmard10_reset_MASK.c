
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (struct i2c_client*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_14)
{
 unsigned char VAR_15[7];
 int VAR_16;


 VAR_16 = FUNC_1(VAR_14, VAR_7,
      VAR_12);
 if (VAR_16 < 0)
  return VAR_16;





 VAR_15[0] = VAR_4;
 VAR_15[1] = VAR_3;
 VAR_15[2] = VAR_1;
 VAR_15[3] = VAR_3;
 VAR_15[4] = VAR_2;
 VAR_15[5] = VAR_3;
 VAR_16 = FUNC_0(VAR_14, VAR_15, 6);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_1(VAR_14, VAR_6,
      VAR_11);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_15[0] = VAR_5;
 VAR_15[1] = VAR_8;
 VAR_15[2] = VAR_9;
 VAR_15[3] = VAR_10;
 VAR_15[4] = VAR_13;
 VAR_15[5] = 0x00;
 VAR_15[6] = 0x07;
 VAR_16 = FUNC_0(VAR_14, VAR_15, 7);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_1(VAR_14, VAR_4,
      VAR_0);
 if (VAR_16 < 0)
  return VAR_16;

 return 0;
}
