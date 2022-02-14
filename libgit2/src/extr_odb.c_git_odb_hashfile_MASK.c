
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef scalar_t__ git_off_t ;
typedef int git_object_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int,size_t,int ) ;
 int FUNC_5 (int) ;

int FUNC_6(git_oid *VAR_1, const char *VAR_2, git_object_t VAR_3)
{
 git_off_t VAR_4;
 int VAR_5, VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 if ((VAR_4 = FUNC_2(VAR_6)) < 0 || !FUNC_0(VAR_4)) {
  FUNC_1(VAR_0, "file size overflow for 32-bit systems");
  FUNC_5(VAR_6);
  return -1;
 }

 VAR_5 = FUNC_4(VAR_1, VAR_6, (size_t)VAR_4, VAR_3);
 FUNC_5(VAR_6);
 return VAR_5;
}
