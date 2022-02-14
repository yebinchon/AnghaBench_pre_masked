
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treespace_header {long long used_ints; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

long long FUNC_0 (void) {
  long long VAR_8 = (long) (VAR_3 - VAR_4 + VAR_5 - VAR_6);
  VAR_8 += (VAR_0 ? ((struct treespace_header *)VAR_0)->used_ints : 0) * 4LL;
  VAR_8 += ((struct treespace_header *)VAR_1)->used_ints * 4LL;
  VAR_8 += VAR_7;
  VAR_8 += VAR_2;
  return VAR_8;
}
