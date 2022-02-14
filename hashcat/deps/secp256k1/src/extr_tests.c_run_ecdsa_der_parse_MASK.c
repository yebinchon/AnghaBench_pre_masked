
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,size_t*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (unsigned char*,size_t*,int*,int*) ;
 int VAR_1 ;
 int FUNC_4 (unsigned char*,size_t,int,int) ;

void FUNC_5(void) {
    int VAR_2,VAR_3;
    for (VAR_2 = 0; VAR_2 < 200 * VAR_0; VAR_2++) {
        unsigned char VAR_4[2048];
        size_t VAR_5 = 0;
        int VAR_6 = 0;
        int VAR_7 = 0;
        FUNC_3(VAR_4, &VAR_5, &VAR_6, &VAR_7);
        FUNC_0(VAR_5 <= 2048);
        for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
            int VAR_8 = 0;
            if (VAR_3 > 0) {
                FUNC_1(VAR_4, &VAR_5);

                VAR_6 = 0;
                VAR_7 = 0;
            }
            VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
            if (VAR_8 != 0) {
                size_t VAR_9;
                FUNC_2(VAR_1, "Failure %x on ", VAR_8);
                for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
                    FUNC_2(VAR_1, "%02x ", VAR_4[VAR_9]);
                }
                FUNC_2(VAR_1, "\n");
            }
            FUNC_0(VAR_8 == 0);
        }
    }
}
