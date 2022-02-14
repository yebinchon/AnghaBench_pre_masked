
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
typedef int * HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int **,int ,int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(uv_loop_t* VAR_4, HANDLE VAR_5, HANDLE* VAR_6) {
  HANDLE VAR_7;







  if (VAR_5 == VAR_2 ||
      VAR_5 == ((void*)0) ||
      VAR_5 == (HANDLE) -2) {
    *VAR_6 = VAR_2;
    return VAR_1;
  }

  VAR_7 = FUNC_1();

  if (!FUNC_0(VAR_7,
                       VAR_5,
                       VAR_7,
                       VAR_6,
                       0,
                       VAR_3,
                       VAR_0)) {
    *VAR_6 = VAR_2;
    return FUNC_2();
  }

  return 0;
}
