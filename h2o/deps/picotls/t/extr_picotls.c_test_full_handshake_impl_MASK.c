
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
    VAR_1 = 0;

    FUNC_2(FUNC_1(((void*)0), 0), VAR_0, 0, 0, VAR_2);
    if (VAR_2) {
        FUNC_0(VAR_1 == 2);
    } else {
        FUNC_0(VAR_1 == 1);
    }

    FUNC_2(FUNC_1(((void*)0), 0), VAR_0, 0, 0, VAR_2);
    if (VAR_2) {
        FUNC_0(VAR_1 == 4);
    } else {
        FUNC_0(VAR_1 == 2);
    }

    FUNC_2(FUNC_1(((void*)0), 0), VAR_0, 0, 1, VAR_2);
    if (VAR_2) {
        FUNC_0(VAR_1 == 6);
    } else {
        FUNC_0(VAR_1 == 3);
    }
}
