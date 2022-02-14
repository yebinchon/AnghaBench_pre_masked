
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int private; int port; int mode; int device; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (char*,int ,...) ;

__attribute__((used)) static int FUNC_7( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5;
 int VAR_6[2] = {0,0};

 if ((VAR_0->private>>1) != VAR_0->port)
    VAR_0->private = FUNC_4(VAR_0) + 2*VAR_0->port;

 if (((VAR_0->private%2) == 0) && (VAR_0->mode > 2)) {
    if (VAR_2)
  FUNC_6("%s: frpw: Xilinx does not support mode %d\n",
   VAR_0->device, VAR_0->mode);
    return 1;
 }

 if (((VAR_0->private%2) == 1) && (VAR_0->mode == 2)) {
    if (VAR_2)
  FUNC_6("%s: frpw: ASIC does not support mode 2\n",
   VAR_0->device);
    return 1;
 }

 FUNC_0(VAR_0);
 for (VAR_3=0;VAR_3<2;VAR_3++) {
                FUNC_5(VAR_0,0,6,0xa0+VAR_3*0x10);
                for (VAR_4=0;VAR_4<256;VAR_4++) {
                        FUNC_5(VAR_0,0,2,VAR_4^0xaa);
                        FUNC_5(VAR_0,0,3,VAR_4^0x55);
                        if (FUNC_3(VAR_0,0,2) != (VAR_4^0xaa)) VAR_6[VAR_3]++;
                        }
                }
 FUNC_1(VAR_0);

 FUNC_0(VAR_0);
        FUNC_2(VAR_0,VAR_1,512,0x10);
        VAR_5 = 0;
        for (VAR_4=0;VAR_4<128;VAR_4++) if (VAR_1[VAR_4] != VAR_4) VAR_5++;
 FUNC_1(VAR_0);

        if (VAR_2) {
            FUNC_6("%s: frpw: port 0x%x, chip %ld, mode %d, test=(%d,%d,%d)\n",
                   VAR_0->device,VAR_0->port,(VAR_0->private%2),VAR_0->mode,VAR_6[0],VAR_6[1],VAR_5);
        }

        return (VAR_5 || (VAR_6[0] && VAR_6[1]));
}
