
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int private; size_t mode; int delay; int port; int device; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char*,...) ;

__attribute__((used)) static void FUNC_1( PIA *VAR_1, char * VAR_2, int VAR_3 )

{ char *VAR_4[6] = {"4-bit","8-bit","EPP",
       "EPP-8","EPP-16","EPP-32"};

        FUNC_0("%s: frpw %s, Freecom (%s) adapter at 0x%x, ", VAR_1->device,
  VAR_0,((VAR_1->private%2) == 0)?"Xilinx":"ASIC",VAR_1->port);
        FUNC_0("mode %d (%s), delay %d\n",VAR_1->mode,
  VAR_4[VAR_1->mode],VAR_1->delay);

}
