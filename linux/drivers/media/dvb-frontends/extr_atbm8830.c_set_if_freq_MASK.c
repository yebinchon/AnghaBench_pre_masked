
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct atbm_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ osc_clk_freq; scalar_t__ zif_swap_iq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct atbm_state*,scalar_t__,int*) ;
 int FUNC_1 (struct atbm_state*,scalar_t__,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct atbm_state *VAR_4, u32 VAR_5 )
{

 u32 VAR_6 = VAR_4->config->osc_clk_freq;
 u64 VAR_7;
 u32 VAR_8;
 u8 VAR_9;

 if (VAR_5 != 0) {

  VAR_7 = (u64) 2 * 31416 * (VAR_5 - VAR_6);
  VAR_7 <<= 22;
  FUNC_2(VAR_7, VAR_6);
  FUNC_2(VAR_7, 1000);
  VAR_8 = VAR_7;

  FUNC_1(VAR_4, VAR_3, 1);
  FUNC_1(VAR_4, VAR_1, VAR_8);
  FUNC_1(VAR_4, VAR_1+1, VAR_8 >> 8);
  FUNC_1(VAR_4, VAR_1+2, VAR_8 >> 16);

  FUNC_0(VAR_4, VAR_0, &VAR_9);
  VAR_9 &= 0xFC;
  FUNC_1(VAR_4, VAR_0, VAR_9);
 } else {

  FUNC_1(VAR_4, VAR_3, 0);

  FUNC_0(VAR_4, VAR_0, &VAR_9);
  VAR_9 &= 0xFC;
  VAR_9 |= 0x02;
  FUNC_1(VAR_4, VAR_0, VAR_9);

  if (VAR_4->config->zif_swap_iq)
   FUNC_1(VAR_4, VAR_2, 0x03);
  else
   FUNC_1(VAR_4, VAR_2, 0x01);
 }

 return 0;
}
