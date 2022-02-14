
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(FILE *VAR_0, const char *VAR_1, size_t VAR_2)
{
    size_t VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 16) {
        FUNC_0(VAR_0, "%08zx", VAR_3);
        for (VAR_4 = 0; VAR_4 != 16; ++VAR_4) {
            if (VAR_3 + VAR_4 < VAR_2)
                FUNC_0(VAR_0, " %02x", (int)(unsigned char)VAR_1[VAR_3 + VAR_4]);
            else
                FUNC_0(VAR_0, "   ");
        }
        FUNC_0(VAR_0, " ");
        for (VAR_4 = 0; VAR_4 != 16 && VAR_3 + VAR_4 < VAR_2; ++VAR_4) {
            int VAR_5 = VAR_1[VAR_3 + VAR_4];
            FUNC_1(' ' <= VAR_5 && VAR_5 < 0x7f ? VAR_5 : '.', VAR_0);
        }
        FUNC_0(VAR_0, "\n");
    }
}
