
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (void*,int) ;
 void* FUNC_2 (int) ;

void *FUNC_3 (void *VAR_0, int VAR_1, int VAR_2) {
  void *VAR_3 = FUNC_2 (VAR_2);
  if (!VAR_3) {
    return 0;
  }
  int VAR_4 = VAR_1;
  if (VAR_1 > VAR_2) {
    VAR_4 = VAR_1;
  }
  FUNC_0 (VAR_3, VAR_0, VAR_4);
  if (VAR_0) {
    FUNC_1 (VAR_0, VAR_1);
  }
  return VAR_3;
}
