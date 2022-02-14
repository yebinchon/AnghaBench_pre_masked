
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t* VAR_0 ;
 int FUNC_0 (size_t*,scalar_t__*,size_t,scalar_t__*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,size_t*,size_t,scalar_t__*,int ) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 () ;
 int FUNC_5 (scalar_t__*,size_t) ;

int
FUNC_6(void)
{
    size_t VAR_7;
    size_t VAR_8;
    int VAR_9;

    for (VAR_7 = 0; VAR_7 < 1000 && VAR_7 + VAR_2 < sizeof VAR_4;
         ++VAR_7) {
        FUNC_1(VAR_3);
        FUNC_5(VAR_6, VAR_1);
        FUNC_5(VAR_4 + VAR_2, VAR_7);
        FUNC_0(VAR_0, VAR_4, VAR_7 + VAR_2, VAR_6, VAR_3);
        VAR_9 = 0;
        while (VAR_9 < 10) {
            VAR_0[FUNC_4() % (VAR_7 + VAR_2)] = FUNC_4();
            if (FUNC_2(VAR_5, VAR_0, VAR_7 + VAR_2,
                                      VAR_6, VAR_3) == 0) {
                for (VAR_8 = 0; VAR_8 < VAR_7 + VAR_2; ++VAR_8) {
                    if (VAR_5[VAR_8] != VAR_4[VAR_8]) {
                        FUNC_3("forgery\n");
                        return 100;
                    }
                }
            } else {
                ++VAR_9;
            }
        }
    }
    return 0;
}
