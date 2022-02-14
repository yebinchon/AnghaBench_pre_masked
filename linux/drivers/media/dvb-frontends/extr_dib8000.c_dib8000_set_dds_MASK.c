
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* pll; } ;
struct dib8000_state {int revision; TYPE_2__ cfg; } ;
typedef scalar_t__ s32 ;
typedef int s16 ;
struct TYPE_3__ {int ifreq; int internal; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (struct dib8000_state*,int,int) ;
 int FUNC_3 (char*,char,int) ;

__attribute__((used)) static void FUNC_4(struct dib8000_state *VAR_0, s32 VAR_1)
{
 s16 VAR_2;
 u32 VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = VAR_0->cfg.pll->ifreq & 0x1ffffff;
 u8 VAR_5 = !!(VAR_0->cfg.pll->ifreq & (1 << 25));
 u8 VAR_6;

 if (VAR_0->revision == 0x8090) {
  VAR_6 = 4;
  VAR_2 = (1<<26) / (FUNC_1(VAR_0, 23) / 1000);
  if (VAR_1 < 0)
   VAR_4 = (1 << 26) - (VAR_3 * VAR_2);
  else
   VAR_4 = (VAR_3 * VAR_2);

  if (VAR_5)
   VAR_4 = (1<<26) - VAR_4;
 } else {
  VAR_6 = 2;
  VAR_2 = (u16) (67108864 / VAR_0->cfg.pll->internal);

  if (VAR_1 < 0)
   VAR_2 *= -1;


  if (VAR_5)
   VAR_4 -= VAR_3 * VAR_2;
  else
   VAR_4 += VAR_3 * VAR_2;
 }

 FUNC_3("setting a DDS frequency offset of %c%dkHz\n", VAR_5 ? '-' : ' ', VAR_4 / VAR_2);

 if (VAR_3 <= (VAR_0->cfg.pll->internal / VAR_6)) {

  FUNC_2(VAR_0, 26, VAR_5);
  FUNC_2(VAR_0, 27, (u16)(VAR_4 >> 16) & 0x1ff);
  FUNC_2(VAR_0, 28, (u16)(VAR_4 & 0xffff));
 }
}
