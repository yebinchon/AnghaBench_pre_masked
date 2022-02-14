
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
typedef int uv_fs_t ;
typedef int * uv_fs_cb ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*,int *,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(uv_loop_t* VAR_2, uv_fs_t* VAR_3, const char* VAR_4,
    uv_fs_cb VAR_5) {
  int VAR_6;

  FUNC_0(VAR_1);
  VAR_6 = FUNC_1(VAR_3, VAR_4, ((void*)0), VAR_5 != ((void*)0));
  if (VAR_6) {
    return FUNC_2(VAR_6);
  }

  VAR_0;
}
