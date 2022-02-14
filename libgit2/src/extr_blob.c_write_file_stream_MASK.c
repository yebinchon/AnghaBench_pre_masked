
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int git_oid ;
typedef scalar_t__ git_off_t ;
typedef int git_odb_stream ;
typedef int git_odb ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int **,int *,scalar_t__,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,char*,int) ;

__attribute__((used)) static int FUNC_8(
 git_oid *VAR_3, git_odb *VAR_4, const char *VAR_5, git_off_t VAR_6)
{
 int VAR_7, VAR_8;
 char VAR_9[VAR_0];
 git_odb_stream *VAR_10 = ((void*)0);
 ssize_t VAR_11 = -1;
 git_off_t VAR_12 = 0;

 if ((VAR_8 = FUNC_2(
   &VAR_10, VAR_4, VAR_6, VAR_2)) < 0)
  return VAR_8;

 if ((VAR_7 = FUNC_1(VAR_5)) < 0) {
  FUNC_4(VAR_10);
  return -1;
 }

 while (!VAR_8 && (VAR_11 = FUNC_7(VAR_7, VAR_9, sizeof(VAR_9))) > 0) {
  VAR_8 = FUNC_5(VAR_10, VAR_9, VAR_11);
  VAR_12 += VAR_11;
 }

 FUNC_6(VAR_7);

 if (VAR_12 != VAR_6 || VAR_11 < 0) {
  FUNC_0(VAR_1, "failed to read file into stream");
  VAR_8 = -1;
 }

 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_3, VAR_10);

 FUNC_4(VAR_10);
 return VAR_8;
}
