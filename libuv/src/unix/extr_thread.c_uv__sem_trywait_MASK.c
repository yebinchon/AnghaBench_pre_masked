
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_sem_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(uv_sem_t* VAR_4) {
  int VAR_5;

  do
    VAR_5 = FUNC_1(VAR_4);
  while (VAR_5 == -1 && VAR_3 == VAR_1);

  if (VAR_5) {
    if (VAR_3 == VAR_0)
      return VAR_2;
    FUNC_0();
  }

  return 0;
}
