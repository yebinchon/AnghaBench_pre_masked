
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 char* VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (int,int) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static void FUNC_8(void) {
    char *VAR_4 = (char *)FUNC_0(VAR_1, VAR_2);


    int VAR_5;
    int VAR_6 = FUNC_6(VAR_0);
    int VAR_7 = 0;
    for (VAR_5 = 0; VAR_5 < (VAR_6 - 1); VAR_5++)
        if (VAR_0[VAR_5] == '%' && VAR_0[VAR_5 + 1] == 's')
            VAR_7++;
    FUNC_4("occurrences = %d\n", VAR_7);


    int VAR_8 = FUNC_6(VAR_4);
    char *VAR_9 = FUNC_5(FUNC_6(VAR_0) - (2 * VAR_7)
                             + (VAR_8 * VAR_7)
                             + 1,
                         1);
    char *VAR_10 = VAR_9;
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {


        if (VAR_0[VAR_5] != '%' || (VAR_5 == (VAR_6 - 1)) || VAR_0[VAR_5 + 1] != 's')
            *(VAR_10++) = VAR_0[VAR_5];
        else {
            FUNC_7(VAR_10, VAR_4, VAR_8);
            VAR_10 += VAR_8;

            VAR_5++;
        }
    }


    FUNC_4("command = %s\n", VAR_9);

    FUNC_3(VAR_3, FUNC_6(VAR_9), 0, (uint8_t *)VAR_9);

    FUNC_2(VAR_9);

    FUNC_1(0);
}
