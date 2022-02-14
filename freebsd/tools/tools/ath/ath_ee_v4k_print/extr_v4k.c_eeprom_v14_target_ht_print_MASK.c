
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bChannel; scalar_t__* tPow2x; } ;
typedef TYPE_1__ CAL_TARGET_POWER_HT ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(CAL_TARGET_POWER_HT *VAR_0)
{
 int VAR_1;
 if (VAR_0->bChannel == 0xff)
  return;
 FUNC_0("  bChannel: %d;", VAR_0->bChannel);
 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  FUNC_0(" %.2f", (float) VAR_0->tPow2x[VAR_1] / 2.0);
 }
 FUNC_0(" (dBm)\n");
}
