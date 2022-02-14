
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s8 ;
typedef long long s64 ;
typedef long long s32 ;
typedef int s16 ;


 long long FUNC_0 (long long,long long) ;
 long long FUNC_1 (long long,long long,long long,long long,long long,long long,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(s64 VAR_0, s64 VAR_1, s32 VAR_2, s32 VAR_3,
         s32 VAR_4, s32 VAR_5, s32 VAR_6, s16 VAR_7, s16 VAR_8,
         u16 VAR_9)
{
 s64 VAR_10, VAR_11, VAR_12;
 s64 VAR_13 = 25000;
 s8 VAR_14;

 VAR_10 = (VAR_2 * 1000LL) >> 16LL;
 VAR_11 = (VAR_3 * 1000LL) >> 8LL;
 VAR_12 = FUNC_0(((VAR_1 - VAR_11) * 1000000LL), VAR_10) + 25 * 1000000LL;


 for (VAR_14 = 0; VAR_14 < 5; ++VAR_14) {
  VAR_13 = FUNC_1(VAR_13, VAR_0, VAR_12,
          VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
          VAR_9);
 }
 return VAR_13;
}
