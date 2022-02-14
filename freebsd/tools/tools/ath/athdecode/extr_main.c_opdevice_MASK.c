
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct athregrec {int val; } ;
struct TYPE_3__ {int ah_macVersion; int ah_macRev; } ;
struct TYPE_4__ {int chipnum; TYPE_1__ revs; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(const struct athregrec *VAR_1)
{
 switch (VAR_1->val) {
 case 165:
 case 166:
  VAR_0.chipnum = 5210;
  VAR_0.revs.ah_macVersion = 1;
  VAR_0.revs.ah_macRev = 0;
  break;
 case 163:
 case 137:
 case 164:
 case 162:
  VAR_0.chipnum = 5211;
  VAR_0.revs.ah_macVersion = 2;
  VAR_0.revs.ah_macRev = 0;
  break;

 case 150:
 case 149:
 case 140:
 case 141:
 case 154:
 case 153:
 case 161:
 case 160:
 case 159:
 case 158:
 case 157:


 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 156:
 case 152:
 case 151:
 case 155:
 case 142:
  VAR_0.chipnum = 5212;
  VAR_0.revs.ah_macVersion = 4;
  VAR_0.revs.ah_macRev = 5;
  break;


 case 139:
 case 138:
  VAR_0.chipnum = 5213;
  VAR_0.revs.ah_macVersion = 5;
  VAR_0.revs.ah_macRev = 9;
  break;


 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_0.chipnum = 5416;
  VAR_0.revs.ah_macVersion = 13;
  VAR_0.revs.ah_macRev = 8;
  break;
 default:
  FUNC_1("Unknown device id 0x%x\n", VAR_1->val);
  FUNC_0(-1);
 }
}
