
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long s64 ;
typedef long long s32 ;
typedef int s16 ;


 long long FUNC_0 (long long,long long) ;
 long long FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(s16 VAR_0, s16 VAR_1,
          s32 VAR_2, s32 VAR_3, s32 VAR_4, s32 VAR_5,
          s16 VAR_6)
{
 s64 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_12 = FUNC_1(VAR_0, VAR_1,
        VAR_6);
 VAR_7 = ((s64)VAR_2 * 10000000000LL) >> 44ULL;
 VAR_8 = VAR_12 - (((s64)VAR_3 * 1000LL) >> 8ULL);
 VAR_9 = VAR_7 * (VAR_8 * VAR_8);
 VAR_10 = (FUNC_0(VAR_8 * 10000000LL, VAR_4)) << 20ULL;
 VAR_11 = ((s64)VAR_5 * 10000000000LL) >> 8ULL;

 VAR_13 = FUNC_0(VAR_9, 1000000LL) + VAR_10 + VAR_11;

 return FUNC_0(VAR_13, 10000000LL);
}
