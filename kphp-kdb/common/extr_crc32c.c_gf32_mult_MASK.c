
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long long,int) ;

__attribute__((used)) static unsigned FUNC_1 (unsigned VAR_0, unsigned VAR_1) {
  int VAR_2;
  const unsigned long long VAR_3 = VAR_1;
  unsigned long long VAR_4 = 0;
  for (VAR_2 = 0; VAR_2 < 32; VAR_2++) {
    if (VAR_0 & (1U << VAR_2)) {
      VAR_4 ^= VAR_3 << VAR_2;
    }
  }
  return FUNC_0 (VAR_4, 62);
}
