
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_sem_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(uv_sem_t* VAR_2) {
  int VAR_3;

  do
    VAR_3 = FUNC_1(VAR_2);
  while (VAR_3 == -1 && VAR_1 == VAR_0);

  if (VAR_3)
    FUNC_0();
}
