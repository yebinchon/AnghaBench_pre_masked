
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long long) ;
 long long FUNC_2 (int ) ;
 long long VAR_1 ;
 int FUNC_3 () ;

long long FUNC_4 (void) {
  long long VAR_2 = (1LL << 32) * FUNC_2 (VAR_0);
  if (VAR_2 <= VAR_1) {
    VAR_2 = VAR_1 + (FUNC_3() % 239) + 1;
  }
  FUNC_0 (!FUNC_1 (VAR_2));
  return (VAR_1 = VAR_2);
}
