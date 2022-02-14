
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static void FUNC_2(void)
{
    int8_t VAR_0 = -1;
    int VAR_1;
    for (VAR_1 = 0; VAR_1 != 110; ++VAR_1) {
        int VAR_2 = FUNC_1(5, &VAR_0);
        switch (VAR_0) {
        case 0:
        case 20:
        case 40:
        case 60:
        case 80:
            FUNC_0(VAR_2 == 1);
            break;
        default:
            FUNC_0(VAR_2 == 0);
            break;
        }
    }

    VAR_0 = 0;
    for (VAR_1 = 0; VAR_1 != 110; ++VAR_1) {
        int VAR_3 = FUNC_1(7, &VAR_0);
        switch (VAR_0) {
        case 0:
        case 15:
        case 29:
        case 43:
        case 58:
        case 72:
        case 86:
            FUNC_0(VAR_3 == 1);
            break;
        default:
            FUNC_0(VAR_3 == 0);
            break;
        }
    }

    VAR_0 = 0;
    for (VAR_1 = 0; VAR_1 != 110; ++VAR_1) {
        int VAR_4 = FUNC_1(93, &VAR_0);
        switch (VAR_0) {
        case 1:
        case 15:
        case 29:
        case 43:
        case 58:
        case 72:
        case 86:
            FUNC_0(VAR_4 == 0);
            break;
        default:
            FUNC_0(VAR_4 == 1);
            break;
        }
    }

    VAR_0 = 0;
    for (VAR_1 = 0; VAR_1 != 110; ++VAR_1) {
        int VAR_5 = FUNC_1(0, &VAR_0);
        FUNC_0(VAR_5 == 0);
    }

    VAR_0 = 0;
    for (VAR_1 = 0; VAR_1 != 110; ++VAR_1) {
        int VAR_6 = FUNC_1(100, &VAR_0);
        FUNC_0(VAR_6 == 1);
    }
}
