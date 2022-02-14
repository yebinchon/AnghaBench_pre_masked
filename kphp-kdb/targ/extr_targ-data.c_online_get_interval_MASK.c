
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static inline int FUNC_0 (int VAR_2, int VAR_3) {
  VAR_2 += VAR_0;
  VAR_3 += VAR_0;

  int VAR_4 = 0;

  while (VAR_2 <= VAR_3) {
    if (VAR_2 & 1) {
      VAR_4 += VAR_1[VAR_2++];
    }
    if (!(VAR_3 & 1)) {
      VAR_4 += VAR_1[VAR_3--];
    }
    VAR_2 >>= 1;
    VAR_3 >>= 1;
  }

  return VAR_4;
}
