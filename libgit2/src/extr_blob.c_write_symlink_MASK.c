
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int git_oid ;
typedef int git_odb ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int *,int *,void*,size_t,int ) ;
 scalar_t__ FUNC_5 (char const*,char*,size_t) ;

__attribute__((used)) static int FUNC_6(
 git_oid *VAR_2, git_odb *VAR_3, const char *VAR_4, size_t VAR_5)
{
 char *VAR_6;
 ssize_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_5);
 FUNC_0(VAR_6);

 VAR_7 = FUNC_5(VAR_4, VAR_6, VAR_5);
 if (VAR_7 != (ssize_t)VAR_5) {
  FUNC_3(VAR_0, "failed to create blob: cannot read symlink '%s'", VAR_4);
  FUNC_1(VAR_6);
  return -1;
 }

 VAR_8 = FUNC_4(VAR_2, VAR_3, (void *)VAR_6, VAR_5, VAR_1);
 FUNC_1(VAR_6);
 return VAR_8;
}
