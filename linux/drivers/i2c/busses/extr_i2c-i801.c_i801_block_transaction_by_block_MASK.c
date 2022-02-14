
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int* block; } ;
struct i801_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i801_priv*) ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_7 ;
 int FUNC_2 (struct i801_priv*) ;
 int FUNC_3 (struct i801_priv*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct i801_priv *VAR_8,
        union i2c_smbus_data *VAR_9,
        char VAR_10, int VAR_11,
        int VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15;
 int VAR_16 = VAR_12 ? VAR_7 : 0;

 switch (VAR_11) {
 case 128:
  VAR_16 |= VAR_6;
  break;
 case 129:
  VAR_16 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(FUNC_1(VAR_8));


 if (VAR_10 == VAR_4) {
  VAR_14 = VAR_9->block[0];
  FUNC_5(VAR_14, FUNC_2(VAR_8));
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   FUNC_5(VAR_9->block[VAR_13+1], FUNC_0(VAR_8));
 }

 VAR_15 = FUNC_3(VAR_8, VAR_16);
 if (VAR_15)
  return VAR_15;

 if (VAR_10 == VAR_3 ||
     VAR_11 == 128) {
  VAR_14 = FUNC_4(FUNC_2(VAR_8));
  if (VAR_14 < 1 || VAR_14 > VAR_2)
   return -VAR_1;

  VAR_9->block[0] = VAR_14;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   VAR_9->block[VAR_13 + 1] = FUNC_4(FUNC_0(VAR_8));
 }
 return 0;
}
