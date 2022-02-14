
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; scalar_t__ st_mode; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (int,struct stat*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void)
{
 static const char VAR_1[] = "GIT_MERGE_AUTOEDIT";
 const char *VAR_2 = FUNC_3(VAR_1);
 struct stat VAR_3, VAR_4;

 if (VAR_0)

  return 0;

 if (VAR_2) {
  int VAR_5 = FUNC_4(VAR_2);
  if (VAR_5 < 0)
   FUNC_1(FUNC_0("Bad value '%s' in environment '%s'"), VAR_2, VAR_1);
  return VAR_5;
 }


 return (!FUNC_2(0, &VAR_3) &&
  !FUNC_2(1, &VAR_4) &&
  FUNC_5(0) && FUNC_5(1) &&
  VAR_3.st_dev == VAR_4.st_dev &&
  VAR_3.st_ino == VAR_4.st_ino &&
  VAR_3.st_mode == VAR_4.st_mode);
}
