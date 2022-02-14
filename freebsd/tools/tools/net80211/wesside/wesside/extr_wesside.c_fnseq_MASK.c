
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned short) ;

unsigned short FUNC_2(unsigned short VAR_1, unsigned short VAR_2) {
        unsigned short VAR_3 = 0;

        if(VAR_1 > 15) {
                FUNC_1("too many fragments (%d)\n", VAR_1);
                FUNC_0(1);
        }

        VAR_3 = VAR_1;

        VAR_3 |= ( (VAR_2 % 4096) << VAR_0);

        return VAR_3;
}
