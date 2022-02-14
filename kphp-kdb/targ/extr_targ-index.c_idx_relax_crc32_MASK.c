
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline unsigned FUNC_1 (void) {
  if (VAR_1 < VAR_2) {
    VAR_0 += VAR_2 - VAR_1;
    VAR_3 = FUNC_0 (VAR_1, VAR_2 - VAR_1, VAR_3);
    VAR_1 = VAR_2;
  }
  return ~VAR_3;
}
