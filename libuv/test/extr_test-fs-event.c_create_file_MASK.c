
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_fs_t ;
typedef int uv_file ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int,int *) ;
 int FUNC_2 (int *,int *,char const*,int,int,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(const char* VAR_4) {
  int VAR_5;
  uv_file VAR_6;
  uv_fs_t VAR_7;

  VAR_5 = FUNC_2(((void*)0), &VAR_7, VAR_4, VAR_1 | VAR_0, VAR_3 | VAR_2, ((void*)0));
  FUNC_0(VAR_5 >= 0);
  VAR_6 = VAR_5;
  FUNC_3(&VAR_7);
  VAR_5 = FUNC_1(((void*)0), &VAR_7, VAR_6, ((void*)0));
  FUNC_0(VAR_5 == 0);
  FUNC_3(&VAR_7);
}
