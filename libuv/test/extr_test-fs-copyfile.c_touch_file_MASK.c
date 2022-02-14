
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_fs_t ;
typedef int uv_file ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *,int,int *) ;
 int FUNC_3 (int *,int *,char const*,int,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int *,int,unsigned int,int *) ;

__attribute__((used)) static void FUNC_6(const char* VAR_5, unsigned int VAR_6) {
  uv_file VAR_7;
  uv_fs_t VAR_8;
  uv_buf_t VAR_9;
  int VAR_10;
  unsigned int VAR_11;

  VAR_10 = FUNC_3(((void*)0), &VAR_8, VAR_5, VAR_2 | VAR_0 | VAR_1,
                 VAR_4 | VAR_3, ((void*)0));
  FUNC_4(&VAR_8);
  FUNC_0(VAR_10 >= 0);
  VAR_7 = VAR_10;

  VAR_9 = FUNC_1("a", 1);


  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
    VAR_10 = FUNC_5(((void*)0), &VAR_8, VAR_7, &VAR_9, 1, VAR_11, ((void*)0));
    FUNC_4(&VAR_8);
    FUNC_0(VAR_10 >= 0);
  }

  VAR_10 = FUNC_2(((void*)0), &VAR_8, VAR_7, ((void*)0));
  FUNC_4(&VAR_8);
  FUNC_0(VAR_10 == 0);
}
