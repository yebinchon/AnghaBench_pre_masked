
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf4371_state {int fpfd; int ref_div_factor; int clkin_freq; unsigned int* buf; int regmap; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int,unsigned int) ;
 unsigned int FUNC_8 (int,unsigned int) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int FUNC_10 (int ,int ,unsigned int*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int,int) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct adf4371_state *VAR_6)
{
 unsigned int VAR_7 = 2, VAR_8 = 1, VAR_9 = 1;
 unsigned int VAR_10, VAR_11;
 int VAR_12;


 VAR_12 = FUNC_13(VAR_6->regmap, FUNC_3(0x0), VAR_4);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_11(VAR_6->regmap, VAR_5,
         FUNC_6(VAR_5));
 if (VAR_12 < 0)
  return VAR_12;


 if (FUNC_9(&VAR_6->spi->dev, "adi,mute-till-lock-en")) {
  VAR_12 = FUNC_12(VAR_6->regmap, FUNC_3(0x25),
      VAR_3,
      FUNC_2(1));
  if (VAR_12 < 0)
   return VAR_12;
 }


 VAR_12 = FUNC_12(VAR_6->regmap, FUNC_3(0x0),
     VAR_0 | VAR_1,
     FUNC_0(1) | FUNC_1(1));
 if (VAR_12 < 0)
  return VAR_12;







 do {
  VAR_6->ref_div_factor++;
  VAR_6->fpfd = VAR_6->clkin_freq / VAR_6->ref_div_factor;
 } while (VAR_6->fpfd > VAR_2);


 VAR_10 = FUNC_8(VAR_6->fpfd, 2400000U);

 VAR_11 = FUNC_7(VAR_6->fpfd, 1000000U);
 do {
  VAR_8++;
  if (VAR_8 > 1023) {
   VAR_8 = 2;
   VAR_7++;
  }
 } while (VAR_7 * 1024 + VAR_8 <= 20 * VAR_11);

 do {
  VAR_9++;
 } while (VAR_9 * 1024 - VAR_8 <= 50 * VAR_11);

 VAR_6->buf[0] = VAR_10;
 VAR_6->buf[1] = VAR_8 & 0xFF;
 VAR_6->buf[2] = FUNC_4(VAR_8 >> 8) | 0x04;
 VAR_6->buf[3] = VAR_7;
 VAR_6->buf[4] = FUNC_5(VAR_9);

 return FUNC_10(VAR_6->regmap, FUNC_3(0x30), VAR_6->buf, 5);
}
