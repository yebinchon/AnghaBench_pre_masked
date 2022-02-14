
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t const) ;

char *FUNC_3(const uint8_t *VAR_1, size_t VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5, VAR_6, VAR_7 = VAR_3 == VAR_0 ? VAR_2 * 2 + 1 : (VAR_3 + 5 + 3 * 16 + 2 + 16 + 1) * ((VAR_2 + 15) / 16) + 1;
    char *VAR_8, *VAR_9;

    if ((VAR_8 = FUNC_1(VAR_7)) == ((void*)0))
        return ((void*)0);
    VAR_9 = VAR_8;
    if (VAR_3 == VAR_0) {
        for (VAR_4 = 0; VAR_4 != VAR_2; ++VAR_4) {
            FUNC_2(VAR_9, VAR_1[VAR_4]);
            VAR_9 += 2;
        }
    } else {
        for (VAR_5 = 0; VAR_5 * 16 < VAR_2; ++VAR_5) {
            for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
                *VAR_9++ = ' ';
            FUNC_2(VAR_9, (VAR_5 >> 4) & 0xff);
            VAR_9 += 2;
            FUNC_2(VAR_9, (VAR_5 << 4) & 0xff);
            VAR_9 += 2;
            *VAR_9++ = ' ';
            for (VAR_6 = 0; VAR_6 < 16; ++VAR_6) {
                *VAR_9++ = VAR_6 == 8 ? '-' : ' ';
                if (VAR_5 * 16 + VAR_6 < VAR_2) {
                    FUNC_2(VAR_9, VAR_1[VAR_5 * 16 + VAR_6]);
                    VAR_9 += 2;
                } else {
                    *VAR_9++ = ' ';
                    *VAR_9++ = ' ';
                }
            }
            *VAR_9++ = ' ';
            *VAR_9++ = ' ';
            for (VAR_6 = 0; VAR_6 < 16; ++VAR_6) {
                if (VAR_5 * 16 + VAR_6 < VAR_2) {
                    int VAR_10 = VAR_1[VAR_5 * 16 + VAR_6];
                    *VAR_9++ = 0x20 <= VAR_10 && VAR_10 < 0x7f ? VAR_10 : '.';
                } else {
                    *VAR_9++ = ' ';
                }
            }
            *VAR_9++ = '\n';
        }
    }
    *VAR_9++ = '\0';

    FUNC_0(VAR_9 - VAR_8 <= VAR_7);

    return VAR_8;
}
