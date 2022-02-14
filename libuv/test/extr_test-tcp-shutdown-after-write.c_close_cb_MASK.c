
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(uv_handle_t* VAR_4) {
  if (VAR_4 == (uv_handle_t*)&VAR_0)
    VAR_1++;
  else if (VAR_4 == (uv_handle_t*)&VAR_2)
    VAR_3++;
  else
    FUNC_0(0 && "bad handle in close_cb");
}
