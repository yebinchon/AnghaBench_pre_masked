
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_off_t ;
typedef int git_buf ;
typedef int git_blob ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(git_buf *VAR_1, git_blob *VAR_2)
{
 git_off_t VAR_3 = FUNC_2(VAR_2);

 if (!FUNC_0(VAR_3)) {
  FUNC_4(VAR_0, "blob is too large to filter");
  return -1;
 }

 FUNC_3(VAR_1, FUNC_1(VAR_2), (size_t)VAR_3);
 return 0;
}
