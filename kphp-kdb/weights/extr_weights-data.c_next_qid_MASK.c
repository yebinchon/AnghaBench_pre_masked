
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long FUNC_0 () ;

__attribute__((used)) static long long FUNC_1 (void) {
  static long long VAR_0 = 0;
  while (!VAR_0) {
    VAR_0 = (((long long) FUNC_0 ()) << 31) | FUNC_0 ();
  }
  VAR_0++;
  if (VAR_0 < 0) {
    VAR_0 = 1;
  }
  return VAR_0;
}
