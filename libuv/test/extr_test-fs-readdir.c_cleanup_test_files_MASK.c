
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_fs_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*,int *) ;
 int FUNC_2 (int *,int *,char*,int *) ;

__attribute__((used)) static void FUNC_3(void) {
  uv_fs_t VAR_0;

  FUNC_2(((void*)0), &VAR_0, "test_dir/file1", ((void*)0));
  FUNC_0(&VAR_0);
  FUNC_2(((void*)0), &VAR_0, "test_dir/file2", ((void*)0));
  FUNC_0(&VAR_0);
  FUNC_1(((void*)0), &VAR_0, "test_dir/test_subdir", ((void*)0));
  FUNC_0(&VAR_0);
  FUNC_1(((void*)0), &VAR_0, "test_dir", ((void*)0));
  FUNC_0(&VAR_0);
}
