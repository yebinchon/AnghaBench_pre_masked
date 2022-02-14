
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static char *FUNC_1 (long long VAR_0) {
  int VAR_1;
  static char VAR_2[6 * 3];
  for (VAR_1 = 5; VAR_1 >= 0; VAR_1--) {
    FUNC_0 (VAR_2 + VAR_1 * 3, "%02x", (unsigned) (VAR_0 & 0xff));
    VAR_2[VAR_1 * 3 + 2] = (VAR_1 < 5) ? ':' : 0;
  }
  return VAR_2;
}
