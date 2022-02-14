
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; unsigned int* timings; } ;
typedef TYPE_1__ pmac_ide_hwif_t ;
__attribute__((used)) static void
FUNC_0(pmac_ide_hwif_t *VAR_0)
{
 unsigned int VAR_1, VAR_2 = 0;

 switch(VAR_0->kind) {
  case 129:
   VAR_1 = 0x0a820c97;
   VAR_2 = 0x00033031;
   break;
  case 128:
  case 133:
   VAR_1 = 0x08618a92;
   VAR_2 = 0x00002921;
   break;
  case 131:
   VAR_1 = 0x0008438c;
   break;
  case 132:
   VAR_1 = 0x00084526;
   break;
  case 134:
  case 130:
  default:
   VAR_1 = 0x00074526;
   break;
 }
 VAR_0->timings[0] = VAR_0->timings[1] = VAR_1;
 VAR_0->timings[2] = VAR_0->timings[3] = VAR_2;
}
