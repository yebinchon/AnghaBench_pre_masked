
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adf4371_state {int integer; int fract1; int fract2; int mod2; int* buf; int ref_div_factor; int regmap; int rf_div_sel; int fpfd; } ;


 int FUNC_0 (unsigned long long,int ) ;




 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned long long VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (unsigned long long,int ,int*,int*,int*,int*) ;
 int FUNC_9 (int,unsigned int,unsigned int) ;
 int FUNC_10 (int ,int ,int*,int) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct adf4371_state *VAR_6, unsigned long long VAR_7,
       unsigned int VAR_8)
{
 u32 VAR_9;
 u8 VAR_10 = 0;
 int VAR_11;

 switch (VAR_8) {
 case 129:
 case 128:
  if (FUNC_0(VAR_7, VAR_5))
   return -VAR_2;

  VAR_6->rf_div_sel = 0;

  while (VAR_7 < VAR_0) {
   VAR_7 <<= 1;
   VAR_6->rf_div_sel++;
  }
  break;
 case 131:

  if (FUNC_0(VAR_7, VAR_3))
   return -VAR_2;

  VAR_7 >>= 1;
  break;
 case 130:

  if (FUNC_0(VAR_7, VAR_4))
   return -VAR_2;

  VAR_7 >>= 2;
  break;
 default:
  return -VAR_2;
 }

 FUNC_8(VAR_7, VAR_6->fpfd, &VAR_6->integer, &VAR_6->fract1,
        &VAR_6->fract2, &VAR_6->mod2);
 VAR_6->buf[0] = VAR_6->integer >> 8;
 VAR_6->buf[1] = 0x40;
 VAR_6->buf[2] = 0x00;
 VAR_6->buf[3] = VAR_6->fract1 & 0xFF;
 VAR_6->buf[4] = VAR_6->fract1 >> 8;
 VAR_6->buf[5] = VAR_6->fract1 >> 16;
 VAR_6->buf[6] = FUNC_3(VAR_6->fract2 & 0x7F) |
       FUNC_1(VAR_6->fract1 >> 24);
 VAR_6->buf[7] = FUNC_2(VAR_6->fract2 >> 7);
 VAR_6->buf[8] = VAR_6->mod2 & 0xFF;
 VAR_6->buf[9] = FUNC_4(VAR_6->mod2 >> 8);

 VAR_11 = FUNC_10(VAR_6->regmap, FUNC_5(0x11), VAR_6->buf, 10);
 if (VAR_11 < 0)
  return VAR_11;




 VAR_11 = FUNC_12(VAR_6->regmap, FUNC_5(0x1F), VAR_6->ref_div_factor);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_11(VAR_6->regmap, FUNC_5(0x24),
     VAR_1,
     FUNC_6(VAR_6->rf_div_sel));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9 = FUNC_7(400 * 1750, VAR_6->integer * 375);
 VAR_9 = FUNC_9(VAR_9, 1U, 255U);
 VAR_11 = FUNC_12(VAR_6->regmap, FUNC_5(0x26), VAR_9);
 if (VAR_11 < 0)
  return VAR_11;




 if (VAR_6->fract1 == 0 && VAR_6->fract2 == 0)
  VAR_10 = 0x01;

 VAR_11 = FUNC_12(VAR_6->regmap, FUNC_5(0x2B), VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_12(VAR_6->regmap, FUNC_5(0x10), VAR_6->integer & 0xFF);
}
