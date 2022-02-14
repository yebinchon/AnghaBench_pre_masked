
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(int *VAR_2) {
  if (FUNC_2(VAR_2) == -1)
    return -1;
  if (FUNC_1(VAR_2[0], VAR_1, VAR_0) == -1 ||
      FUNC_1(VAR_2[1], VAR_1, VAR_0) == -1) {
    FUNC_0(VAR_2[0]);
    FUNC_0(VAR_2[1]);
    return -1;
  }
  return 0;
}
