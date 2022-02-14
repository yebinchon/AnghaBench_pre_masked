
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
typedef int uint128_t ;
struct TYPE_5__ {int* b; } ;
typedef TYPE_1__ int128_t ;
typedef int duuid ;
 int FUNC_0 (int,int const*) ;
 int FUNC_1 (int,int const*) ;
 int FUNC_2 (int const,int const*) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*,int const*,int) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(uint8_t *VAR_1, uint8_t const * const VAR_2, const uint128_t *VAR_3)
{
        int128_t VAR_4;
        uint32_t VAR_5;
        uint8_t VAR_6;

        while (VAR_1 < VAR_2) {

                FUNC_2(VAR_6, VAR_1);

                switch (VAR_6) {
                case 129:
                        if (VAR_1 + 2 > VAR_2)
                                continue;
                        FUNC_0(VAR_5, VAR_1);

                        FUNC_5(&VAR_4, &VAR_0, sizeof(VAR_4));
                        VAR_4.b[2] = VAR_5 >> 8 & 0xff;
                        VAR_4.b[3] = VAR_5 & 0xff;

                        if (FUNC_4(&VAR_4, VAR_3, sizeof(VAR_4)) == 0)
                                return (0);
                        break;
                case 128:
                        if (VAR_1 + 4 > VAR_2)
                                continue;
                        FUNC_1(VAR_5, VAR_1);
                        FUNC_5(&VAR_4, &VAR_0, sizeof(VAR_4));
                        VAR_4.b[0] = VAR_5 >> 24 & 0xff;
                        VAR_4.b[1] = VAR_5 >> 16 & 0xff;
                        VAR_4.b[2] = VAR_5 >> 8 & 0xff;
                        VAR_4.b[3] = VAR_5 & 0xff;

                        if (FUNC_4(&VAR_4, VAR_3, sizeof(VAR_4)) == 0)
                                return (0);
                        break;
                case 130:
                        if (VAR_1 + 16 > VAR_2)
                                continue;
                        FUNC_3(&VAR_4, VAR_1);

                        if (FUNC_4(&VAR_4, VAR_3, sizeof(VAR_4)) == 0)
                                return (0);
                        break;
                case 131:
                case 142:
                case 139:
                        VAR_1++;
                        break;
                case 134:
                case 145:
                case 141:
                        VAR_1 += 2;
                        break;
                case 133:
                case 144:
                case 140:
                        VAR_1 += 4;
                        break;
                case 132:
                case 143:
                        VAR_1 += 8;
                        break;
                case 135:
                case 146:
                        VAR_1 += 16;
                        break;
                case 136:
                        if (VAR_1 + 1 > VAR_2)
                                continue;
                        FUNC_2(VAR_5, VAR_1);
                        VAR_1 += VAR_5;
                        break;
                case 138:
                        if (VAR_1 + 2 > VAR_2)
                                continue;
                        FUNC_0(VAR_5, VAR_1);
                        if (VAR_5 > (VAR_2 - VAR_1))
                                return (1);
                        VAR_1 += VAR_5;
                        break;
                case 137:
                        if (VAR_1 + 4 > VAR_2)
                                continue;
                        FUNC_1(VAR_5, VAR_1);
                        if (VAR_5 > (VAR_2 - VAR_1))
                                return (1);
                        VAR_1 += VAR_5;
                        break;
                case 147:
                        VAR_1 += 1;
                        break;
                default:
                        return (1);
                }
        }
        return (1);
}
