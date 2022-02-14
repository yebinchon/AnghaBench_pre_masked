
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int*) ;

__attribute__((used)) static void FUNC_2(uv_handle_t* VAR_0) {
  int VAR_1;

  VAR_1 = 0;
  FUNC_0(0 == FUNC_1(VAR_0, &VAR_1));
  FUNC_0(VAR_1 > 0);

  VAR_1 = 10000;
  FUNC_0(0 == FUNC_1(VAR_0, &VAR_1));

  VAR_1 = 0;
  FUNC_0(0 == FUNC_1(VAR_0, &VAR_1));

  FUNC_0(VAR_1 == 10000 || VAR_1 == 20000);
}
