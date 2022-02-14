
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__* fe25519 ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char const*) ;

void
FUNC_2(fe25519 VAR_0, const unsigned char *VAR_1)
{
    int64_t VAR_2 = FUNC_1(VAR_1);
    int64_t VAR_3 = FUNC_0(VAR_1 + 4) << 6;
    int64_t VAR_4 = FUNC_0(VAR_1 + 7) << 5;
    int64_t VAR_5 = FUNC_0(VAR_1 + 10) << 3;
    int64_t VAR_6 = FUNC_0(VAR_1 + 13) << 2;
    int64_t VAR_7 = FUNC_1(VAR_1 + 16);
    int64_t VAR_8 = FUNC_0(VAR_1 + 20) << 7;
    int64_t VAR_9 = FUNC_0(VAR_1 + 23) << 5;
    int64_t VAR_10 = FUNC_0(VAR_1 + 26) << 4;
    int64_t VAR_11 = (FUNC_0(VAR_1 + 29) & 8388607) << 2;

    int64_t VAR_12;
    int64_t VAR_13;
    int64_t VAR_14;
    int64_t VAR_15;
    int64_t VAR_16;
    int64_t VAR_17;
    int64_t VAR_18;
    int64_t VAR_19;
    int64_t VAR_20;
    int64_t VAR_21;

    VAR_21 = (VAR_11 + (int64_t)(1L << 24)) >> 25;
    VAR_2 += VAR_21 * 19;
    VAR_11 -= VAR_21 * ((uint64_t) 1L << 25);
    VAR_13 = (VAR_3 + (int64_t)(1L << 24)) >> 25;
    VAR_4 += VAR_13;
    VAR_3 -= VAR_13 * ((uint64_t) 1L << 25);
    VAR_15 = (VAR_5 + (int64_t)(1L << 24)) >> 25;
    VAR_6 += VAR_15;
    VAR_5 -= VAR_15 * ((uint64_t) 1L << 25);
    VAR_17 = (VAR_7 + (int64_t)(1L << 24)) >> 25;
    VAR_8 += VAR_17;
    VAR_7 -= VAR_17 * ((uint64_t) 1L << 25);
    VAR_19 = (VAR_9 + (int64_t)(1L << 24)) >> 25;
    VAR_10 += VAR_19;
    VAR_9 -= VAR_19 * ((uint64_t) 1L << 25);

    VAR_12 = (VAR_2 + (int64_t)(1L << 25)) >> 26;
    VAR_3 += VAR_12;
    VAR_2 -= VAR_12 * ((uint64_t) 1L << 26);
    VAR_14 = (VAR_4 + (int64_t)(1L << 25)) >> 26;
    VAR_5 += VAR_14;
    VAR_4 -= VAR_14 * ((uint64_t) 1L << 26);
    VAR_16 = (VAR_6 + (int64_t)(1L << 25)) >> 26;
    VAR_7 += VAR_16;
    VAR_6 -= VAR_16 * ((uint64_t) 1L << 26);
    VAR_18 = (VAR_8 + (int64_t)(1L << 25)) >> 26;
    VAR_9 += VAR_18;
    VAR_8 -= VAR_18 * ((uint64_t) 1L << 26);
    VAR_20 = (VAR_10 + (int64_t)(1L << 25)) >> 26;
    VAR_11 += VAR_20;
    VAR_10 -= VAR_20 * ((uint64_t) 1L << 26);

    VAR_0[0] = (int32_t) VAR_2;
    VAR_0[1] = (int32_t) VAR_3;
    VAR_0[2] = (int32_t) VAR_4;
    VAR_0[3] = (int32_t) VAR_5;
    VAR_0[4] = (int32_t) VAR_6;
    VAR_0[5] = (int32_t) VAR_7;
    VAR_0[6] = (int32_t) VAR_8;
    VAR_0[7] = (int32_t) VAR_9;
    VAR_0[8] = (int32_t) VAR_10;
    VAR_0[9] = (int32_t) VAR_11;
}
