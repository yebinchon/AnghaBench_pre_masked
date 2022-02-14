
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int ,int,unsigned char*) ;
 int FUNC_1 (struct i2c_client*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_6, int VAR_7, unsigned char *VAR_8,
    int *VAR_9, unsigned char *VAR_10)
{
 int VAR_11;
 int VAR_12;

 VAR_11 = VAR_5;
 retry1:
 VAR_12 = FUNC_0(VAR_6, VAR_4, VAR_7, VAR_8);
 if (VAR_12) {
  VAR_11--;
  if (VAR_11 > 0)
   goto retry1;
  return -VAR_2;
 }

 VAR_12 = FUNC_1(VAR_6, VAR_10);
 if (VAR_12 > 0) {

  if (VAR_12 < 3 ||
      (VAR_10[0] != (VAR_8[0] | (1 << 2))) ||
      (VAR_10[1] != VAR_8[1]))
   VAR_12 = -VAR_1;
  else if (VAR_12 > VAR_3) {
   VAR_12 = -VAR_0;
  } else {
   *VAR_9 = VAR_12;
   VAR_12 = 0;
  }
 }

 return VAR_12;
}
