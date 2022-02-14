
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;
 int VAR_1 ;
 void* FUNC_3 (int) ;

void *FUNC_4 (int VAR_2) {
  void *VAR_3;
  if (VAR_2 < VAR_0) {
    VAR_3 = FUNC_3 (VAR_2);
  } else {
    VAR_3 = FUNC_1 (VAR_2);
    FUNC_0 (VAR_3);
    FUNC_2 (VAR_3, 0, VAR_2);
  }
  if (VAR_3) {
    VAR_1 += VAR_2;
  }
  return VAR_3;
}
