
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ref_freq_hz; } ;
struct si2165_state {int fvco_hz; unsigned int adc_clk; unsigned int sys_clk; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (struct si2165_state*,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_1(struct si2165_state *VAR_1)
{
 u32 VAR_2 = VAR_1->config.ref_freq_hz;
 u8 VAR_3 = 1;
 u8 VAR_4 = 1;
 u8 VAR_5 = 56;
 u8 VAR_6 = 8;
 u8 VAR_7 = 12;
 u8 VAR_8[4];





 switch (VAR_2) {
 case 16000000u:
  VAR_5 = 56;
  break;
 case 24000000u:
  VAR_3 = 2;
  VAR_4 = 4;
  VAR_5 = 19;
  break;
 default:

  if (VAR_2 > 16000000u)
   VAR_3 = 2;





  if (1624000000u * VAR_3 > VAR_2 * 2u * 63u)
   VAR_4 = 4;


  VAR_5 = 1624000000u * VAR_3 / (VAR_2 * 2u * VAR_4);
  break;
 }


 VAR_1->fvco_hz = VAR_2 / VAR_3
   * 2u * VAR_5 * VAR_4;
 VAR_1->adc_clk = VAR_1->fvco_hz / (VAR_6 * 4u);
 VAR_1->sys_clk = VAR_1->fvco_hz / (VAR_7 * 2u);


 VAR_8[0] = VAR_7;
 VAR_8[1] = VAR_6;
 VAR_8[2] = (VAR_5 & 0x3f) | ((VAR_4 == 1) ? 0x40 : 0x00) | 0x80;
 VAR_8[3] = VAR_3;
 return FUNC_0(VAR_1, VAR_0, VAR_8, 4);
}
