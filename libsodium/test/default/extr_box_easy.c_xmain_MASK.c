
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*,int ,int,int ,int ,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,...) ;
 size_t FUNC_4 (int) ;

int
FUNC_5(void)
{
    size_t VAR_7;
    int VAR_8;

    VAR_8 = FUNC_1(VAR_2, VAR_5, 131, VAR_6, VAR_1, VAR_0);
    FUNC_0(VAR_8 == 0);
    for (VAR_7 = 0; VAR_7 < 131 + VAR_3; ++VAR_7) {
        FUNC_3(",0x%02x", (unsigned int) VAR_2[VAR_7]);
    }
    FUNC_3("\n");



    VAR_8 = FUNC_1(VAR_2, VAR_4, 0, VAR_6, VAR_1, VAR_0);
    FUNC_0(VAR_8 == 0);
    for (VAR_7 = 0; VAR_7 < 1 + VAR_3; ++VAR_7) {
        FUNC_3(",0x%02x", (unsigned int) VAR_2[VAR_7]);
    }
    FUNC_3("\n");

    VAR_8 =
        FUNC_2(VAR_2, VAR_2, VAR_3, VAR_6, VAR_1, VAR_0);
    FUNC_0(VAR_8 == 0);
    for (VAR_7 = 0; VAR_7 < 1 + VAR_3; ++VAR_7) {
        FUNC_3(",0x%02x", (unsigned int) VAR_2[VAR_7]);
    }
    FUNC_3("\n");
    VAR_2[FUNC_4(VAR_3)]++;
    VAR_8 = FUNC_2(VAR_2, VAR_2, VAR_3, VAR_6, VAR_1, VAR_0);
    FUNC_0(VAR_8 == -1);

    return 0;
}
