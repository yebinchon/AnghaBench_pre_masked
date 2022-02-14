
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* r; unsigned long* h; scalar_t__ final; } ;
typedef TYPE_1__ poly1305_state_internal_t ;


 int FUNC_0 (unsigned char const*) ;
 unsigned long long VAR_0 ;

__attribute__((used)) static void
FUNC_1(poly1305_state_internal_t *VAR_1, const unsigned char *VAR_2,
                unsigned long long VAR_3)
{
    const unsigned long VAR_4 = (VAR_1->final) ? 0UL : (1UL << 24);
    unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    unsigned long VAR_10, VAR_11, VAR_12, VAR_13;
    unsigned long VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    unsigned long long VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    unsigned long VAR_24;

    VAR_5 = VAR_1->r[0];
    VAR_6 = VAR_1->r[1];
    VAR_7 = VAR_1->r[2];
    VAR_8 = VAR_1->r[3];
    VAR_9 = VAR_1->r[4];

    VAR_10 = VAR_6 * 5;
    VAR_11 = VAR_7 * 5;
    VAR_12 = VAR_8 * 5;
    VAR_13 = VAR_9 * 5;

    VAR_14 = VAR_1->h[0];
    VAR_15 = VAR_1->h[1];
    VAR_16 = VAR_1->h[2];
    VAR_17 = VAR_1->h[3];
    VAR_18 = VAR_1->h[4];

    while (VAR_3 >= VAR_0) {

        VAR_14 += (FUNC_0(VAR_2 + 0)) & 0x3ffffff;
        VAR_15 += (FUNC_0(VAR_2 + 3) >> 2) & 0x3ffffff;
        VAR_16 += (FUNC_0(VAR_2 + 6) >> 4) & 0x3ffffff;
        VAR_17 += (FUNC_0(VAR_2 + 9) >> 6) & 0x3ffffff;
        VAR_18 += (FUNC_0(VAR_2 + 12) >> 8) | VAR_4;


        VAR_19 = ((unsigned long long) VAR_14 * VAR_5) + ((unsigned long long) VAR_15 * VAR_13) +
             ((unsigned long long) VAR_16 * VAR_12) + ((unsigned long long) VAR_17 * VAR_11) +
             ((unsigned long long) VAR_18 * VAR_10);
        VAR_20 = ((unsigned long long) VAR_14 * VAR_6) + ((unsigned long long) VAR_15 * VAR_5) +
             ((unsigned long long) VAR_16 * VAR_13) + ((unsigned long long) VAR_17 * VAR_12) +
             ((unsigned long long) VAR_18 * VAR_11);
        VAR_21 = ((unsigned long long) VAR_14 * VAR_7) + ((unsigned long long) VAR_15 * VAR_6) +
             ((unsigned long long) VAR_16 * VAR_5) + ((unsigned long long) VAR_17 * VAR_13) +
             ((unsigned long long) VAR_18 * VAR_12);
        VAR_22 = ((unsigned long long) VAR_14 * VAR_8) + ((unsigned long long) VAR_15 * VAR_7) +
             ((unsigned long long) VAR_16 * VAR_6) + ((unsigned long long) VAR_17 * VAR_5) +
             ((unsigned long long) VAR_18 * VAR_13);
        VAR_23 = ((unsigned long long) VAR_14 * VAR_9) + ((unsigned long long) VAR_15 * VAR_8) +
             ((unsigned long long) VAR_16 * VAR_7) + ((unsigned long long) VAR_17 * VAR_6) +
             ((unsigned long long) VAR_18 * VAR_5);


        VAR_24 = (unsigned long) (VAR_19 >> 26);
        VAR_14 = (unsigned long) VAR_19 & 0x3ffffff;
        VAR_20 += VAR_24;
        VAR_24 = (unsigned long) (VAR_20 >> 26);
        VAR_15 = (unsigned long) VAR_20 & 0x3ffffff;
        VAR_21 += VAR_24;
        VAR_24 = (unsigned long) (VAR_21 >> 26);
        VAR_16 = (unsigned long) VAR_21 & 0x3ffffff;
        VAR_22 += VAR_24;
        VAR_24 = (unsigned long) (VAR_22 >> 26);
        VAR_17 = (unsigned long) VAR_22 & 0x3ffffff;
        VAR_23 += VAR_24;
        VAR_24 = (unsigned long) (VAR_23 >> 26);
        VAR_18 = (unsigned long) VAR_23 & 0x3ffffff;
        VAR_14 += VAR_24 * 5;
        VAR_24 = (VAR_14 >> 26);
        VAR_14 = VAR_14 & 0x3ffffff;
        VAR_15 += VAR_24;

        VAR_2 += VAR_0;
        VAR_3 -= VAR_0;
    }

    VAR_1->h[0] = VAR_14;
    VAR_1->h[1] = VAR_15;
    VAR_1->h[2] = VAR_16;
    VAR_1->h[3] = VAR_17;
    VAR_1->h[4] = VAR_18;
}
