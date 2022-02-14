
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(const char **VAR_2, char **VAR_3) {
    unsigned int VAR_4, VAR_5, VAR_6;
    int VAR_7 = 0;
    char *VAR_8 = *VAR_3;
    const char *VAR_9 = *VAR_2;
    VAR_9++;
    VAR_7 = FUNC_0(VAR_9, &VAR_4);
    if (!VAR_7) {
        return VAR_0;
    }
    if (VAR_4 < 0x80) {
        VAR_8[0] = (char)VAR_4;
    } else if (VAR_4 < 0x800) {
        VAR_8[0] = ((VAR_4 >> 6) & 0x1F) | 0xC0;
        VAR_8[1] = ((VAR_4) & 0x3F) | 0x80;
        VAR_8 += 1;
    } else if (VAR_4 < 0xD800 || VAR_4 > 0xDFFF) {
        VAR_8[0] = ((VAR_4 >> 12) & 0x0F) | 0xE0;
        VAR_8[1] = ((VAR_4 >> 6) & 0x3F) | 0x80;
        VAR_8[2] = ((VAR_4) & 0x3F) | 0x80;
        VAR_8 += 2;
    } else if (VAR_4 >= 0xD800 && VAR_4 <= 0xDBFF) {
        VAR_5 = VAR_4;
        VAR_9 += 4;
        if (*VAR_9++ != '\\' || *VAR_9++ != 'u') {
            return VAR_0;
        }
        VAR_7 = FUNC_0(VAR_9, &VAR_6);
        if (!VAR_7 || VAR_6 < 0xDC00 || VAR_6 > 0xDFFF) {
            return VAR_0;
        }
        VAR_4 = ((((VAR_5 - 0xD800) & 0x3FF) << 10) | ((VAR_6 - 0xDC00) & 0x3FF)) + 0x010000;
        VAR_8[0] = (((VAR_4 >> 18) & 0x07) | 0xF0);
        VAR_8[1] = (((VAR_4 >> 12) & 0x3F) | 0x80);
        VAR_8[2] = (((VAR_4 >> 6) & 0x3F) | 0x80);
        VAR_8[3] = (((VAR_4) & 0x3F) | 0x80);
        VAR_8 += 3;
    } else {
        return VAR_0;
    }
    VAR_9 += 3;
    *VAR_3 = VAR_8;
    *VAR_2 = VAR_9;
    return VAR_1;
}
