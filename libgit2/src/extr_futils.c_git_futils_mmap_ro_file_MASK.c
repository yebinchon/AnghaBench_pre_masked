
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_off_t ;
typedef int git_map ;
typedef scalar_t__ git_file ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int ,size_t) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (scalar_t__) ;

int FUNC_6(git_map *VAR_1, const char *VAR_2)
{
 git_file VAR_3 = FUNC_4(VAR_2);
 git_off_t VAR_4;
 int VAR_5;

 if (VAR_3 < 0)
  return VAR_3;

 if ((VAR_4 = FUNC_2(VAR_3)) < 0) {
  VAR_5 = -1;
  goto out;
 }

 if (!FUNC_0(VAR_4)) {
  FUNC_1(VAR_0, "file `%s` too large to mmap", VAR_2);
  VAR_5 = -1;
  goto out;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_3, 0, (size_t)VAR_4);
out:
 FUNC_5(VAR_3);
 return VAR_5;
}
