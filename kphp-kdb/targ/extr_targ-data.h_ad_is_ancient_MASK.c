
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline int FUNC_0 (int VAR_2) {
  return (unsigned) VAR_2 < VAR_1 ? (VAR_0[VAR_2 >> 3] >> (VAR_2 & 7)) & 1 : 0;
}
