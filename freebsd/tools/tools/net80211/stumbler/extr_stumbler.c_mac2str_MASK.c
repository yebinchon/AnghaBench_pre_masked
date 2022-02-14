
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;

char* FUNC_1(unsigned char* VAR_0) {
        static char VAR_1[6*3];

        FUNC_0(VAR_1, "%.2X:%.2X:%.2X:%.2X:%.2X:%.2X",
                VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5]);

        return VAR_1;
}
