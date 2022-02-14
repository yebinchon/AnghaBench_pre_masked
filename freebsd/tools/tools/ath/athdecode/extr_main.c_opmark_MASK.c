
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct athregrec {int reg; int val; } ;
struct TYPE_2__ {int chipnum; } ;
typedef int FILE ;
 int FUNC_0 (int *,char*,int,...) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static const char*
FUNC_1(FILE *VAR_1, int VAR_2, const struct athregrec *VAR_3)
{
 FUNC_0(VAR_1, "\n%05d: ", VAR_2);
 switch (VAR_3->reg) {
 case 143:
  FUNC_0(VAR_1, "ar%uReset %s", VAR_0.chipnum,
   VAR_3->val ? "change channel" : "no channel change");
  break;
 case 141:
  FUNC_0(VAR_1, "ar%u_reset.c; line %u", VAR_0.chipnum, VAR_3->val);
  break;
 case 142:
  if (VAR_3->val)
   FUNC_0(VAR_1, "ar%uReset (done), FAIL, error %u",
    VAR_0.chipnum, VAR_3->val);
  else
   FUNC_0(VAR_1, "ar%uReset (done), OK", VAR_0.chipnum);
  break;
 case 145:
  FUNC_0(VAR_1, "ar%uChipReset, channel %u MHz", VAR_0.chipnum, VAR_3->val);
  break;
 case 144:
  FUNC_0(VAR_1, "ar%uPerCalibration, channel %u MHz", VAR_0.chipnum, VAR_3->val);
  break;
 case 140:
  FUNC_0(VAR_1, "ar%uSetChannel, channel %u MHz", VAR_0.chipnum, VAR_3->val);
  break;
 case 146:
  switch (VAR_3->val) {
  case 128:
   FUNC_0(VAR_1, "ar%uAniReset, HAL_M_STA", VAR_0.chipnum);
   break;
  case 130:
   FUNC_0(VAR_1, "ar%uAniReset, HAL_M_IBSS", VAR_0.chipnum);
   break;
  case 131:
   FUNC_0(VAR_1, "ar%uAniReset, HAL_M_HOSTAP", VAR_0.chipnum);
   break;
  case 129:
   FUNC_0(VAR_1, "ar%uAniReset, HAL_M_MONITOR", VAR_0.chipnum);
   break;
  default:
   FUNC_0(VAR_1, "ar%uAniReset, opmode %u", VAR_0.chipnum, VAR_3->val);
   break;
  }
  break;
 case 147:
  FUNC_0(VAR_1, "ar%uAniPoll, listenTime %u", VAR_0.chipnum, VAR_3->val);
  break;
 case 148:
  switch (VAR_3->val) {
  case 133:
   FUNC_0(VAR_1, "ar%uAniControl, PRESENT", VAR_0.chipnum);
   break;
  case 136:
   FUNC_0(VAR_1, "ar%uAniControl, NOISE_IMMUNITY", VAR_0.chipnum);
   break;
  case 135:
   FUNC_0(VAR_1, "ar%uAniControl, OFDM_WEAK_SIGNAL", VAR_0.chipnum);
   break;
  case 139:
   FUNC_0(VAR_1, "ar%uAniControl, CCK_WEAK_SIGNAL", VAR_0.chipnum);
   break;
  case 138:
   FUNC_0(VAR_1, "ar%uAniControl, FIRSTEP_LEVEL", VAR_0.chipnum);
   break;
  case 132:
   FUNC_0(VAR_1, "ar%uAniControl, SPUR_IMMUNITY", VAR_0.chipnum);
   break;
  case 137:
   FUNC_0(VAR_1, "ar%uAniControl, MODE", VAR_0.chipnum);
   break;
  case 134:
   FUNC_0(VAR_1, "ar%uAniControl, PHYERR_RESET", VAR_0.chipnum);
   break;
  default:
   FUNC_0(VAR_1, "ar%uAniControl, cmd %u", VAR_0.chipnum, VAR_3->val);
   break;
  }
  break;
 default:
  FUNC_0(VAR_1, "mark #%u value %u/0x%x", VAR_3->reg, VAR_3->val, VAR_3->val);
  break;
 }
 return (((void*)0));
}
