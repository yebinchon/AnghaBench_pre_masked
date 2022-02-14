
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CanonicalFromStringResult ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static CanonicalFromStringResult FUNC_1(unsigned char* VAR_2,
                                                     size_t VAR_3,
                                                     const char* VAR_4)
{
    size_t VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
        int VAR_6, VAR_7;

        VAR_6 = FUNC_0(VAR_4[VAR_5*2 + 0]);
        if (VAR_6 < 0) return VAR_0;

        VAR_7 = FUNC_0(VAR_4[VAR_5*2 + 1]);
        if (VAR_7 < 0) return VAR_0;

        VAR_2[VAR_5] = (unsigned char) ((VAR_6 << 4) | VAR_7);
    }
    return VAR_1;
}
