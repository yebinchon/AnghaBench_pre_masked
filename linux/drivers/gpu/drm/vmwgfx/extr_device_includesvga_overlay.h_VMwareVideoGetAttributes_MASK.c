
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int SVGAOverlayFormat ;






__attribute__((used)) static inline bool
FUNC_0(const SVGAOverlayFormat VAR_0,
                         uint32 *VAR_1,
                         uint32 *VAR_2,
                         uint32 *VAR_3,
                         uint32 *VAR_4,
                         uint32 *VAR_5)
{
    int VAR_6;

    *VAR_1 = (*VAR_1 + 1) & ~1;

    if (VAR_5) {
        VAR_5[0] = 0;
    }

    switch (VAR_0) {
    case 128:
       *VAR_2 = (*VAR_2 + 1) & ~1;
       *VAR_3 = (*VAR_1) * (*VAR_2);

       if (VAR_4) {
          VAR_4[0] = *VAR_1;
       }

       if (VAR_5) {
          VAR_5[1] = *VAR_3;
       }

       VAR_6 = *VAR_1 >> 1;

       if (VAR_4) {
          VAR_4[1] = VAR_4[2] = VAR_6;
       }

       VAR_6 *= (*VAR_2 >> 1);
       *VAR_3 += VAR_6;

       if (VAR_5) {
          VAR_5[2] = *VAR_3;
       }

       *VAR_3 += VAR_6;
       break;

    case 129:
    case 130:
       *VAR_3 = *VAR_1 * 2;

       if (VAR_4) {
          VAR_4[0] = *VAR_3;
       }

       *VAR_3 *= *VAR_2;
       break;

    default:
       return 0;
    }

    return 1;
}
