
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_sem_t ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

int FUNC_2(uv_sem_t* VAR_3) {
  DWORD VAR_4 = FUNC_0(*VAR_3, 0);

  if (VAR_4 == VAR_1)
    return 0;

  if (VAR_4 == VAR_2)
    return VAR_0;

  FUNC_1();
  return -1;
}
