
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_1)
{
 uint64_t VAR_2;
 uint64_t VAR_3;
 uint64_t VAR_4;

 if (VAR_1 <= 0)
  FUNC_0(1, "seconds %d < 0", VAR_1);
 VAR_3 = ((uint64_t)VAR_1) * 1000000000ULL;
 VAR_2 = FUNC_1(VAR_3);
 VAR_4 = 1ULL << VAR_2;
 if (VAR_4 <= VAR_3) {
  VAR_2++;
 }
 if (VAR_0) {
  FUNC_2("shifted %lld\n", (long long)VAR_4);
  FUNC_2("seconds_to_pow2ns: seconds: %d, ns %lld, power %d\n",
      VAR_1, (long long)VAR_3, (int)VAR_2);
 }
 return (VAR_2);
}
