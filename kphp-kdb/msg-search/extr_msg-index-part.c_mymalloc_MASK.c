
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

void *FUNC_0 (size_t VAR_3) {
  void *VAR_4 = VAR_2;
  if (VAR_3 > (1L << 25) || VAR_2 + VAR_3 > VAR_1 + VAR_0) return 0;
  VAR_2 += (VAR_3 + 3) & -4;
  return VAR_4;
}
