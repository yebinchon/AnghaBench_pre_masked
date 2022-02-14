
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) inline static int FUNC_1 (double VAR_1) {
  if (VAR_1 == 0) {
    return 0;
  }
  if (VAR_1 < 0 || VAR_1 >= 1e100) {
    return -1;
  }
  FUNC_0 ();
  VAR_1 -= VAR_0;
  if (VAR_1 < 0) {
    return 0;
  } else {
    return (int)(VAR_1 * 1000);
  }
}
