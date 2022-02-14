
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb {int dummy; } ;
struct cpu_state {int cl; int eip; } ;
typedef int byte_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;

int FUNC_2(struct cpu_state *VAR_6, struct tlb *VAR_7) {
    addr_t VAR_8 = VAR_6->eip;
    byte_t VAR_9;

skip:
    FUNC_0(VAR_7, VAR_8++, &VAR_9, sizeof(VAR_9));;
    switch (VAR_9) {

        case 0x0f:
            FUNC_0(VAR_7, VAR_8++, &VAR_9, sizeof(VAR_9));;
            switch(VAR_9) {

                case 0xa4:
                case 0xa5:
                case 0xac:
                case 0xad: {
                    VAR_8++;
                    byte_t VAR_10;
                    if (VAR_9 == 0xad)
                        VAR_10 = VAR_6->cl;
                    else
                        FUNC_0(VAR_7, VAR_8++, &VAR_10, sizeof(VAR_10));;
                    if (VAR_10 == 1)
                        return VAR_2|VAR_0;
                    else if (VAR_10 > 1)
                        return VAR_2|VAR_0;
                    break;
                }
                case 0xaf: return VAR_4|VAR_5|VAR_0|VAR_3;
                case 0xbd: case 0xbc: return VAR_2|VAR_4|VAR_0|VAR_3|VAR_1;
            }
            break;

        case 0x69:
        case 0x6b: return VAR_4|VAR_5|VAR_0|VAR_3;

        case 0xc0:
        case 0xc1:
        case 0xd0:
        case 0xd1:
        case 0xd2:
        case 0xd3: {
            VAR_8++;
            byte_t VAR_11;
            if (VAR_9 == 0xd0 || VAR_9 == 0xd1)
                VAR_11 = 1;
            else if (VAR_9 == 0xd2 || VAR_9 == 0xd3)
                VAR_11 = VAR_6->cl;
            else
                FUNC_0(VAR_7, VAR_8++, &VAR_11, sizeof(VAR_11));;
            if (VAR_11 > 1)
                return VAR_2;
            break;
        }

        case 0xf6: case 0xf7: {

            byte_t VAR_12;
            FUNC_0(VAR_7, VAR_8++, &VAR_12, sizeof(VAR_12));;
            switch (FUNC_0(VAR_12)) {
                case 4: return VAR_4|VAR_5|VAR_0|VAR_3;
                case 5: return VAR_4|VAR_5|VAR_0|VAR_3;
            }
            break;
        }
        case 0x66: goto skip;
    }
    return 0;
}
