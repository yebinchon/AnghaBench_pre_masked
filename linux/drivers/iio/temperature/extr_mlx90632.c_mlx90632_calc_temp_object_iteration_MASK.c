
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef long long s64 ;
typedef int s32 ;
typedef scalar_t__ s16 ;


 int FUNC_0 (long long,long long) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(s32 VAR_0, s64 VAR_1,
            s64 VAR_2, s32 VAR_3, s32 VAR_4,
            s32 VAR_5, s16 VAR_6, s16 VAR_7,
            u16 VAR_8)
{
 s64 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 s64 VAR_14, VAR_15;

 VAR_14 = ((s64)VAR_6 * 1000000LL) >> 14ULL;
 VAR_15 = ((s64)VAR_7 * 100) >> 10ULL;

 VAR_9 = ((s64)((s64)VAR_5 * (VAR_0 - 25 * 1000LL)
        * 1000LL)) >> 36LL;
 VAR_10 = ((s64)(VAR_4 * (VAR_2 - 25 * 1000000LL))) >> 36LL;
 VAR_13 = FUNC_0((((s64)(VAR_3 * 10000000000LL) >> 46LL)
    * VAR_14), 1000LL);
 VAR_13 *= ((s64)(1 * 1000000LL + VAR_9 + VAR_10));
 VAR_13 = VAR_8 * FUNC_0(VAR_13, 100000LL);
 VAR_13 = FUNC_0(VAR_13, 1000LL);
 VAR_11 = FUNC_0((s64)VAR_1 * 10000000LL, VAR_13);
 VAR_12 = (FUNC_0(VAR_2, 10000LL) + 27315) *
  (FUNC_0(VAR_2, 10000LL) + 27315) *
  (FUNC_0(VAR_2, 10000LL) + 27315) *
  (FUNC_0(VAR_2, 10000LL) + 27315);

 return (FUNC_1(FUNC_1(VAR_11 * 1000000000000LL + VAR_12))
  - 27315 - VAR_15) * 10;
}
