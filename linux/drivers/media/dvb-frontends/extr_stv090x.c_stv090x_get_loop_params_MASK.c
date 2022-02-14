
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv090x_state {int srate; int search_range; int search_mode; TYPE_1__* internal; } ;
typedef int s32 ;
struct TYPE_2__ {int mclk; } ;







__attribute__((used)) static int FUNC_0(struct stv090x_state *VAR_0, s32 *VAR_1, s32 *VAR_2, s32 *VAR_3)
{
 s32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_7 = VAR_0->srate;
 VAR_8 = VAR_0->search_range / 1000;
 VAR_8 += VAR_8 / 10;
 VAR_8 = 65536 * (VAR_8 / 2);
 VAR_8 /= (VAR_0->internal->mclk / 1000);

 if (VAR_8 > 0x4000)
  VAR_8 = 0x4000 ;

 VAR_5 = VAR_7;
 VAR_5 /= VAR_0->internal->mclk / 1000;
 VAR_5 *= 256;
 VAR_5 *= 256;
 VAR_5 /= 1000;

 switch (VAR_0->search_mode) {
 case 129:
 case 130:
  VAR_5 *= 3;
  VAR_4 = 20;
  break;

 case 128:
  VAR_5 *= 4;
  VAR_4 = 25;
  break;

 case 131:
 default:
  VAR_5 *= 3;
  VAR_4 = 25;
  break;
 }
 VAR_5 /= 100;
 if ((VAR_5 > VAR_8) || (VAR_5 < 0))
  VAR_5 = VAR_8 / 2;

 VAR_4 *= 27500;
 if (VAR_7 > 0)
  VAR_4 /= (VAR_7 / 1000);

 if ((VAR_4 > 100) || (VAR_4 < 0))
  VAR_4 = 100;

 VAR_6 = (VAR_8 / VAR_5) + 1;
 if ((VAR_6 > 100) || (VAR_6 < 0)) {
  VAR_6 = 100;
  VAR_5 = VAR_8 / VAR_6;
 }
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_4;
 *VAR_3 = VAR_6;

 return 0;
}
