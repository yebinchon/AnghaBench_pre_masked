
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_idle_t ;
typedef int uv_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(uv_idle_t* VAR_5) {
  if (++VAR_4 < VAR_1)
    return;

  FUNC_0((uv_handle_t*) &VAR_3, ((void*)0));
  FUNC_0((uv_handle_t*) &VAR_0, ((void*)0));
  FUNC_0((uv_handle_t*) &VAR_2, ((void*)0));
  FUNC_0((uv_handle_t*) VAR_5, ((void*)0));
}
