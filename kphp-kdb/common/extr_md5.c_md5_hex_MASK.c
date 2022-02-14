
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int,unsigned char*) ;

void FUNC_1 (char *VAR_0, int VAR_1, char VAR_2[32]) {
    static char VAR_3[16], VAR_4[16] = "0123456789abcdef";
    int VAR_5;

    FUNC_0 ((unsigned char *) VAR_0, VAR_1, (unsigned char *) VAR_3);
    for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
      VAR_2[2*VAR_5] = VAR_4[(VAR_3[VAR_5] >> 4) & 15];
      VAR_2[2*VAR_5+1] = VAR_4[VAR_3[VAR_5] & 15];
    }
}
