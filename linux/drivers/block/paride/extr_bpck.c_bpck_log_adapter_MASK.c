
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t mode; int delay; int port; int unit; int device; } ;
typedef TYPE_1__ PIA ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static void FUNC_2( PIA *VAR_1, char * VAR_2, int VAR_3 )

{ char *VAR_4[5] = { "4-bit","8-bit","EPP-8",
        "EPP-16","EPP-32" };





 FUNC_0(VAR_1,VAR_2);
 FUNC_1("%s: bpck %s, backpack %8.8s unit %d",
  VAR_1->device,VAR_0,&VAR_2[110],VAR_1->unit);
 FUNC_1(" at 0x%x, mode %d (%s), delay %d\n",VAR_1->port,
  VAR_1->mode,VAR_4[VAR_1->mode],VAR_1->delay);
}
