
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static inline int FUNC_4 (void) {
  if (FUNC_1 (0) < 0) {
    return -1;
  }
  int VAR_3 = 0;
  int VAR_4 = (-VAR_1) & 3;
  FUNC_0 (VAR_2 >= VAR_4);
  FUNC_2 (&VAR_3, VAR_4);
  if (VAR_3) {
    FUNC_3 ("Padding with non-zeroes", VAR_0);
    return -1;
  }
  return VAR_4;
}
