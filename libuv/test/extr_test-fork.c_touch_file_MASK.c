
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_fs_t ;
typedef int uv_file ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *,int,int *) ;
 int FUNC_3 (int *,int *,char const*,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int *,int,int,int *) ;

__attribute__((used)) static void FUNC_6(const char* VAR_1) {
  int VAR_2;
  uv_file VAR_3;
  uv_fs_t VAR_4;
  uv_buf_t VAR_5;

  VAR_2 = FUNC_3(((void*)0), &VAR_4, VAR_1, VAR_0, 0, ((void*)0));
  FUNC_0(VAR_2 >= 0);
  VAR_3 = VAR_2;
  FUNC_4(&VAR_4);

  VAR_5 = FUNC_1("foo", 4);
  VAR_2 = FUNC_5(((void*)0), &VAR_4, VAR_3, &VAR_5, 1, -1, ((void*)0));
  FUNC_0(VAR_2 >= 0);
  FUNC_4(&VAR_4);

  VAR_2 = FUNC_2(((void*)0), &VAR_4, VAR_3, ((void*)0));
  FUNC_0(VAR_2 == 0);
  FUNC_4(&VAR_4);
}
