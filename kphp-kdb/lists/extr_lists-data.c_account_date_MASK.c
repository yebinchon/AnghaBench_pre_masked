
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_0 (int VAR_5) {
  if (VAR_5 < VAR_4) {
    VAR_0[0]++;
  } else if (VAR_5 < VAR_3) {
    VAR_0[(VAR_5 - VAR_4) / VAR_2 + 1]++;
  } else {
    VAR_0[VAR_1 + 1]++;
  }
  return 1;
}
