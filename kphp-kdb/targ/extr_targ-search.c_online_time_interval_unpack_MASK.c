
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int,int) ;

__attribute__((used)) static inline int FUNC_2 (int VAR_3, int VAR_4) {
  VAR_1 = (VAR_3 > VAR_2) ? 0 : FUNC_1 (VAR_0, VAR_3, VAR_4);
  FUNC_0 (0, VAR_1 - 1);
  VAR_0[VAR_1] = ~(-1 << 31);
  return VAR_1;
}
