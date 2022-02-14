
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(uv_loop_t* VAR_2, int VAR_3, HANDLE* VAR_4) {
  HANDLE VAR_5;

  if (VAR_3 == -1) {
    *VAR_4 = VAR_1;
    return VAR_0;
  }

  VAR_5 = FUNC_1(VAR_3);
  return FUNC_0(VAR_2, VAR_5, VAR_4);
}
