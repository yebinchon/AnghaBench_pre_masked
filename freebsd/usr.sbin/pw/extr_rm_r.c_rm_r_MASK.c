
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {scalar_t__ st_uid; int st_mode; } ;
struct dirent {char const* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,char const*,struct stat*,int ) ;
 int FUNC_5 (int,char const*,int ) ;
 struct dirent* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (int,char const*,int ) ;

void
FUNC_9(int VAR_3, const char *VAR_4, uid_t VAR_5)
{
 int VAR_6;
 DIR *VAR_7;
 struct dirent *VAR_8;
 struct stat VAR_9;

 if (*VAR_4 == '/')
  VAR_4++;

 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_2);
 if (VAR_6 == -1) {
  return;
 }

 VAR_7 = FUNC_3(VAR_6);
 while ((VAR_8 = FUNC_6(VAR_7)) != ((void*)0)) {
  if (FUNC_7(VAR_8->d_name, ".") == 0 || FUNC_7(VAR_8->d_name, "..") == 0)
   continue;

  if (FUNC_4(VAR_6, VAR_8->d_name, &VAR_9, VAR_1) != 0)
   continue;
  if (FUNC_0(VAR_9.st_mode))
   FUNC_9(VAR_6, VAR_8->d_name, VAR_5);
  else if (FUNC_1(VAR_9.st_mode) || VAR_9.st_uid == VAR_5)
   FUNC_8(VAR_6, VAR_8->d_name, 0);
 }
 FUNC_2(VAR_7);
 if (FUNC_4(VAR_3, VAR_4, &VAR_9, VAR_1) != 0)
  return;
 FUNC_8(VAR_3, VAR_4, FUNC_0(VAR_9.st_mode) ? VAR_0 : 0);
}
