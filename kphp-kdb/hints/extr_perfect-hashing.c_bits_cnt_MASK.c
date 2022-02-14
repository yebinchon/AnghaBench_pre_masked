
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

inline int FUNC_0 (int VAR_1) {
  return VAR_0[VAR_1 & 0xffff] + VAR_0[(VAR_1 >> 16) & 0xffff];
}
