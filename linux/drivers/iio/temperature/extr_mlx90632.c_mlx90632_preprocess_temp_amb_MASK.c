
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long s64 ;
typedef scalar_t__ s16 ;


 long long VAR_0 ;
 long long FUNC_0 (long long,long long) ;

__attribute__((used)) static s64 FUNC_1(s16 VAR_1,
     s16 VAR_2, s16 VAR_3)
{
 s64 VAR_4, VAR_5, VAR_6;

 VAR_5 = ((s64)VAR_3 * 1000LL) >> 10ULL;
 VAR_4 = (s64)VAR_2 * 1000000LL +
  VAR_5 * FUNC_0(((s64)VAR_1 * 1000LL),
   (VAR_0));
 VAR_6 = FUNC_0(
    FUNC_0(((s64)VAR_1 * 1000000000000LL),
       (VAR_0)), VAR_4);
 return FUNC_0(VAR_6 << 19ULL, 1000LL);
}
