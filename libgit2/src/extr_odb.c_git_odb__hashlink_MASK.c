
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_size; } ;
typedef int git_oid ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *,int,int,int ) ;
 int FUNC_9 (int *,char*,int,int ) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char const*,char*,int) ;

int FUNC_13(git_oid *VAR_3, const char *VAR_4)
{
 struct stat VAR_5;
 int VAR_6;
 int VAR_7;

 if (FUNC_10(VAR_4, &VAR_5) < 0)
  return -1;

 if (!FUNC_4(VAR_5.st_size) || (int)VAR_5.st_size < 0) {
  FUNC_6(VAR_0, "file size overflow for 32-bit systems");
  return -1;
 }

 VAR_6 = (int)VAR_5.st_size;

 if (FUNC_2(VAR_5.st_mode)) {
  char *VAR_8;
  int VAR_9;
  size_t VAR_10;

  FUNC_1(&VAR_10, VAR_6, 1);
  VAR_8 = FUNC_5(VAR_10);
  FUNC_0(VAR_8);

  VAR_9 = FUNC_12(VAR_4, VAR_8, VAR_6);
  VAR_8[VAR_6] = '\0';
  if (VAR_9 != VAR_6) {
   FUNC_6(VAR_1, "failed to read symlink data for '%s'", VAR_4);
   FUNC_3(VAR_8);
   return -1;
  }

  VAR_7 = FUNC_9(VAR_3, VAR_8, VAR_6, VAR_2);
  FUNC_3(VAR_8);
 } else {
  int VAR_11 = FUNC_7(VAR_4);
  if (VAR_11 < 0)
   return -1;
  VAR_7 = FUNC_8(VAR_3, VAR_11, VAR_6, VAR_2);
  FUNC_11(VAR_11);
 }

 return VAR_7;
}
