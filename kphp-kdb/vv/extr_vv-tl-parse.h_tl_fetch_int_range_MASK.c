
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,int,int) ;

__attribute__((used)) static inline int FUNC_2 (int VAR_1, int VAR_2) {
  int VAR_3 = FUNC_0 ();
  if (VAR_3 < VAR_1 || VAR_3 > VAR_2) {
    FUNC_1 (VAR_0, "Expected int32 in range [%d,%d], %d presented", VAR_1, VAR_2, VAR_3);
  }
  return VAR_3;
}
