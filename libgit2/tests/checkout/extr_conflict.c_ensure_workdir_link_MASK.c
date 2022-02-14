
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char const*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char const*) ;
 int FUNC_7 (int*,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct stat*) ;
 int FUNC_10 (int ,char*,int) ;
 scalar_t__ FUNC_11 (char*,char const*) ;

__attribute__((used)) static void FUNC_12(
 git_repository *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 int VAR_6;

 FUNC_2(FUNC_7(&VAR_6, VAR_3, VAR_1));

 if (!VAR_6) {
  FUNC_3(VAR_4, VAR_5);
 } else {
  git_buf VAR_7 = VAR_0;
  char VAR_8[1024];
  struct stat VAR_9;
  int VAR_10;

  FUNC_2(
   FUNC_6(&VAR_7, FUNC_8(VAR_2), VAR_4));

  FUNC_2(FUNC_9(FUNC_4(&VAR_7), &VAR_9));
  FUNC_1(FUNC_0(VAR_9.st_mode));

  FUNC_1((VAR_10 = FUNC_10(FUNC_4(&VAR_7), VAR_8, 1024)) > 0);
  VAR_8[VAR_10] = '\0';
  FUNC_1(FUNC_11(VAR_8, VAR_5) == 0);

  FUNC_5(&VAR_7);
 }
}
