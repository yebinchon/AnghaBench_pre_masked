
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static uint8_t *FUNC_5(char **VAR_0, int VAR_1) {
    uint8_t *VAR_2 = FUNC_2(VAR_1 + 1, 4);
    uint8_t *VAR_3 = VAR_2;
    for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        FUNC_1("at %c\n", VAR_0[VAR_4][0]);

        if (VAR_0[VAR_4][0] == '\0') {
            FUNC_0(VAR_3, VAR_0[VAR_4], 2);
            VAR_3 += 2;
        } else {
            FUNC_3((char *)VAR_3, VAR_0[VAR_4]);
            VAR_3 += FUNC_4(VAR_0[VAR_4]);
        }
    }
    FUNC_1("output = %s\n", VAR_2);
    return VAR_2;
}
