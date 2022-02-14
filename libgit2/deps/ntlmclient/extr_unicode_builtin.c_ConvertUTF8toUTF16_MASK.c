
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UTF8 ;
typedef int UTF32 ;
typedef void* UTF16 ;
typedef int ConversionResult ;
typedef scalar_t__ ConversionFlags ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (size_t const*,unsigned short) ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 unsigned short* VAR_15 ;

__attribute__((used)) static ConversionResult FUNC_1 (
        const UTF8** VAR_16, const UTF8* VAR_17,
        UTF16** VAR_18, UTF16* VAR_19, ConversionFlags VAR_20) {
    ConversionResult VAR_21 = VAR_6;
    const UTF8* VAR_22 = *VAR_16;
    UTF16* VAR_23 = *VAR_18;
    while (VAR_22 < VAR_17) {
        UTF32 VAR_24 = 0;
        unsigned short VAR_25 = VAR_15[*VAR_22];
        if (VAR_25 >= VAR_17 - VAR_22) {
            VAR_21 = VAR_11; break;
        }

        if (!FUNC_0(VAR_22, VAR_25+1)) {
            VAR_21 = VAR_12;
            break;
        }



        switch (VAR_25) {
            case 5: VAR_24 += *VAR_22++; VAR_24 <<= 6;
            case 4: VAR_24 += *VAR_22++; VAR_24 <<= 6;
            case 3: VAR_24 += *VAR_22++; VAR_24 <<= 6;
            case 2: VAR_24 += *VAR_22++; VAR_24 <<= 6;
            case 1: VAR_24 += *VAR_22++; VAR_24 <<= 6;
            case 0: VAR_24 += *VAR_22++;
        }
        VAR_24 -= VAR_10[VAR_25];

        if (VAR_23 >= VAR_19) {
            VAR_22 -= (VAR_25+1);
            VAR_21 = VAR_14; break;
        }
        if (VAR_24 <= VAR_0) {

            if (VAR_24 >= VAR_3 && VAR_24 <= VAR_4) {
                if (VAR_20 == VAR_13) {
                    VAR_22 -= (VAR_25+1);
                    VAR_21 = VAR_12;
                    break;
                } else {
                    *VAR_23++ = VAR_2;
                }
            } else {
                *VAR_23++ = (UTF16)VAR_24;
            }
        } else if (VAR_24 > VAR_1) {
            if (VAR_20 == VAR_13) {
                VAR_21 = VAR_12;
                VAR_22 -= (VAR_25+1);
                break;
            } else {
                *VAR_23++ = VAR_2;
            }
        } else {

            if (VAR_23 + 1 >= VAR_19) {
                VAR_22 -= (VAR_25+1);
                VAR_21 = VAR_14; break;
            }
            VAR_24 -= VAR_7;
            *VAR_23++ = (UTF16)((VAR_24 >> VAR_9) + VAR_3);
            *VAR_23++ = (UTF16)((VAR_24 & VAR_8) + VAR_5);
        }
    }
    *VAR_16 = VAR_22;
    *VAR_18 = VAR_23;
    return VAR_21;
}
