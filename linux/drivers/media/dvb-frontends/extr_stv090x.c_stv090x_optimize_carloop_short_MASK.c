
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stv090x_state {int modulation; int srate; TYPE_1__* internal; } ;
struct stv090x_short_frame_crloop {int crl_2; int crl_5; int crl_10; int crl_20; int crl_30; } ;
typedef size_t s32 ;
struct TYPE_2__ {int dev_ver; } ;






 struct stv090x_short_frame_crloop* VAR_0 ;
 struct stv090x_short_frame_crloop* VAR_1 ;

__attribute__((used)) static u8 FUNC_0(struct stv090x_state *VAR_2)
{
 struct stv090x_short_frame_crloop *VAR_3 = ((void*)0);
 s32 VAR_4 = 0;
 u8 VAR_5 = 0x0b;

 switch (VAR_2->modulation) {
 case 128:
 default:
  VAR_4 = 0;
  break;
 case 129:
  VAR_4 = 1;
  break;
 case 131:
  VAR_4 = 2;
  break;
 case 130:
  VAR_4 = 3;
  break;
 }

 if (VAR_2->internal->dev_ver >= 0x30) {

  VAR_3 = VAR_1;
 } else {

  VAR_3 = VAR_0;
 }

 if (VAR_2->srate <= 3000000)
  VAR_5 = VAR_3[VAR_4].crl_2;
 else if (VAR_2->srate <= 7000000)
  VAR_5 = VAR_3[VAR_4].crl_5;
 else if (VAR_2->srate <= 15000000)
  VAR_5 = VAR_3[VAR_4].crl_10;
 else if (VAR_2->srate <= 25000000)
  VAR_5 = VAR_3[VAR_4].crl_20;
 else
  VAR_5 = VAR_3[VAR_4].crl_30;

 return VAR_5;
}
