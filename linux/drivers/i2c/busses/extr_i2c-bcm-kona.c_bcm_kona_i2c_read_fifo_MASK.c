
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_msg {unsigned int len; int * buf; } ;
struct bcm_kona_i2c_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct bcm_kona_i2c_dev*,int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct bcm_kona_i2c_dev *VAR_2,
      struct i2c_msg *VAR_3)
{
 unsigned int VAR_4 = VAR_1;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;
 int VAR_7;

 uint8_t *VAR_8 = VAR_3->buf;

 while (VAR_6 < VAR_3->len) {
  if (VAR_3->len - VAR_6 <= VAR_1) {
   VAR_5 = 1;
   VAR_4 = VAR_3->len - VAR_6;
  }

  VAR_7 = FUNC_0(VAR_2, VAR_8, VAR_4,
         VAR_5);
  if (VAR_7 < 0)
   return -VAR_0;

  VAR_6 += VAR_4;
  VAR_8 += VAR_4;
 }

 return 0;
}
