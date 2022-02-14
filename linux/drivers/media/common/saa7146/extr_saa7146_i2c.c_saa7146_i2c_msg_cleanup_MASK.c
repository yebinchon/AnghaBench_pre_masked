
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; int* buf; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct i2c_msg *VAR_0, int VAR_1, __le32 *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = 0;


 for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

  VAR_5++;


  for(VAR_4 = 0; VAR_4 < VAR_0[VAR_3].len; VAR_4++) {

   VAR_0[VAR_3].buf[VAR_4] = (FUNC_0(VAR_2[VAR_5/3]) >> ((3-(VAR_5%3))*8));
   VAR_5++;
  }
 }

 return 0;
}
