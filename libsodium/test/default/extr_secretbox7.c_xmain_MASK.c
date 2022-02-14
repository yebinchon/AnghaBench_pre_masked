
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,size_t,scalar_t__*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,size_t,scalar_t__*,int ) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__*,size_t) ;

int
FUNC_5(void)
{
    size_t VAR_7;
    size_t VAR_8;

    for (VAR_7 = 0; VAR_7 < 1000 && VAR_7 + VAR_2 < sizeof VAR_4;
         ++VAR_7) {
        FUNC_1(VAR_3);
        FUNC_4(VAR_6, VAR_1);
        FUNC_4(VAR_4 + VAR_2, VAR_7);
        FUNC_0(VAR_0, VAR_4, VAR_7 + VAR_2, VAR_6, VAR_3);
        if (FUNC_2(VAR_5, VAR_0, VAR_7 + VAR_2, VAR_6,
                                  VAR_3) == 0) {
            for (VAR_8 = 0; VAR_8 < VAR_7 + VAR_2; ++VAR_8) {
                if (VAR_5[VAR_8] != VAR_4[VAR_8]) {
                    FUNC_3("bad decryption\n");
                    break;
                }
            }
        } else {
            FUNC_3("ciphertext fails verification\n");
        }
    }
    return 0;
}
