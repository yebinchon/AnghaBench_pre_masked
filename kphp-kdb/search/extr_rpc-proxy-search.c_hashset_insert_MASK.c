
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0 (long long VAR_2) {

  if (!VAR_2) { return 1; }
  int VAR_3, VAR_4;
  long long VAR_5;
  VAR_3 = ((unsigned int) VAR_2) % VAR_1;
  VAR_4 = 1 + ((unsigned int) (VAR_2 >> 32)) % (VAR_1 - 1);
  while ((VAR_5 = VAR_0[VAR_3]) != 0) {
    if (VAR_5 == VAR_2) {
      return 0;
    }
    VAR_3 += VAR_4;
    if (VAR_3 >= VAR_1) { VAR_3 -= VAR_1; }
  }
  VAR_0[VAR_3] = VAR_2;
  return 1;
}
