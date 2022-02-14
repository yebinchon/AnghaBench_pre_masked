
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
 int VAR_2 ;
 int FUNC_1 (int *,char const*,int *,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(uv_loop_t* VAR_3, uv_fs_t* VAR_4, const char* VAR_5,
    uv_fs_cb VAR_6) {
  int VAR_7;

  FUNC_0(VAR_2);

  if (!VAR_5) {
    return VAR_1;
  }

  VAR_7 = FUNC_1(VAR_4, VAR_5, ((void*)0), VAR_6 != ((void*)0));
  if (VAR_7) {
    return FUNC_2(VAR_7);
  }

  VAR_0;
}
