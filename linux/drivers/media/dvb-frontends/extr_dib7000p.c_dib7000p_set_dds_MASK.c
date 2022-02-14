
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* bw; } ;
struct dib7000p_state {TYPE_2__ cfg; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {int ifreq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dib7000p_state*) ;
 int FUNC_2 (struct dib7000p_state*,int,int ) ;
 int FUNC_3 (char*,scalar_t__,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct dib7000p_state *VAR_0, s32 VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_0);
 s32 VAR_3;
 u32 VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5 = VAR_0->cfg.bw->ifreq & 0x1ffffff;
 u8 VAR_6 = !!(VAR_0->cfg.bw->ifreq & (1 << 25));
 if (VAR_2 == 0) {
  FUNC_4("DIB7000P: dib7000p_get_internal_freq returned 0\n");
  return -1;
 }

 VAR_3 = 67108864 / (VAR_2);

 FUNC_3("setting a frequency offset of %dkHz internal freq = %d invert = %d\n", VAR_1, VAR_2, VAR_6);

 if (VAR_1 < 0)
  VAR_3 *= -1;


 if (VAR_6)
  VAR_5 -= (VAR_4 * VAR_3);
 else
  VAR_5 += (VAR_4 * VAR_3);

 if (VAR_4 <= (VAR_2 / 2)) {
  FUNC_2(VAR_0, 21, (u16) (((VAR_5 >> 16) & 0x1ff) | (0 << 10) | (VAR_6 << 9)));
  FUNC_2(VAR_0, 22, (u16) (VAR_5 & 0xffff));
 }
 return 0;
}
