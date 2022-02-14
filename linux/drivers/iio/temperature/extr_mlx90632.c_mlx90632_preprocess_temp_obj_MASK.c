
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long s64 ;
typedef int s16 ;


 long long VAR_0 ;
 long long VAR_1 ;
 long long FUNC_0 (long long,long long) ;

__attribute__((used)) static s64 FUNC_1(s16 VAR_2, s16 VAR_3,
     s16 VAR_4,
     s16 VAR_5, s16 VAR_6)
{
 s64 VAR_7, VAR_8, VAR_9;

 VAR_8 = ((s64)VAR_6 * 1000LL) >> 10ULL;
 VAR_7 = (s64)VAR_5 * 1000000LL +
  VAR_8 * FUNC_0(((s64)VAR_4 * 1000LL),
   (VAR_1));
 VAR_9 = FUNC_0(
   FUNC_0(((s64)((VAR_2 + VAR_3) / 2)
       * 1000000000000LL), (VAR_0)),
   VAR_7);
 return FUNC_0((VAR_9 << 19ULL), 1000LL);
}
