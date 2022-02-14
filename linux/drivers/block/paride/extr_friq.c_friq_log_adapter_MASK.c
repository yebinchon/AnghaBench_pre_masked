
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t device; size_t mode; int private; int delay; int port; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,size_t,char*,int ) ;

__attribute__((used)) static void FUNC_4( PIA *VAR_1, char * VAR_2, int VAR_3 )

{ char *VAR_4[6] = {"4-bit","8-bit",
       "EPP-8","EPP-16","EPP-32"};

        FUNC_3("%s: friq %s, Freecom IQ ASIC-2 adapter at 0x%x, ", VAR_1->device,
  VAR_0,VAR_1->port);
        FUNC_3("mode %d (%s), delay %d\n",VAR_1->mode,
  VAR_4[VAR_1->mode],VAR_1->delay);

 VAR_1->private = 1;
 FUNC_1(VAR_1);
 FUNC_0(0x9e);
 FUNC_2(VAR_1);

}
