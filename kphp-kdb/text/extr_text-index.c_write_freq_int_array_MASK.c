
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static inline void FUNC_1 (long long VAR_0[256]) {
  static int VAR_1[256];
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
    VAR_1[VAR_2] = (VAR_0[VAR_2] > 0x7fffffff ? 0x7fffffff : VAR_0[VAR_2]);
  }
  FUNC_0 (VAR_1, 1024);
}
