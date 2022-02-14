
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(void) {
  int VAR_3;
  char VAR_4 = 42;

  do {
    VAR_3 = FUNC_0(VAR_2[1], &VAR_4, sizeof VAR_4);
  } while (VAR_3 < 0 && VAR_1 == VAR_0);

  return (VAR_3 < 0) ? -1 : 0;
}
