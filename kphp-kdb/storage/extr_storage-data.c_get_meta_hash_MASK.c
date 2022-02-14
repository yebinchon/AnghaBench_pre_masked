
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;

__attribute__((used)) static inline int FUNC_0 (long long VAR_1, int VAR_2) {
  unsigned long long VAR_3 = VAR_1;
  VAR_3 %= VAR_0;
  VAR_3 <<= 32;
  VAR_3 |= VAR_2;
  return VAR_3 % VAR_0;
}
