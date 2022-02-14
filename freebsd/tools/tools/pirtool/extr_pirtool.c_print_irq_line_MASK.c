
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int slot; int bus; int devfunc; } ;
typedef TYPE_1__ pir_entry_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(int VAR_0, pir_entry_t *VAR_1, char VAR_2, uint8_t VAR_3,
    uint16_t VAR_4)
{

 if (VAR_3 == 0)
  return;

 FUNC_2("%3d    ", VAR_0);
 if (VAR_1->slot == 0)
  FUNC_2("embedded ");
 else
  FUNC_2("slot %-3d ", VAR_1->slot);

 FUNC_2(" %3d  %3d    %c   0x%02x  ", VAR_1->bus, FUNC_0(VAR_1->devfunc),
     VAR_2, VAR_3);
 FUNC_1(VAR_4);
 FUNC_2("\n");
}
