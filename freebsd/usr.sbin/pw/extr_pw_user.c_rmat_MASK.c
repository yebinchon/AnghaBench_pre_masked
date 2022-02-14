
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int tmp ;
struct stat {scalar_t__ st_uid; int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(uid_t VAR_1)
{
 DIR *VAR_2 = FUNC_2("/var/at/jobs");

 if (VAR_2 != ((void*)0)) {
  struct dirent *VAR_3;

  while ((VAR_3 = FUNC_3(VAR_2)) != ((void*)0)) {
   struct stat VAR_4;

   if (FUNC_6(VAR_3->d_name, ".lock", 5) != 0 &&
       FUNC_5(VAR_3->d_name, &VAR_4) == 0 &&
       !FUNC_0(VAR_4.st_mode) &&
       VAR_4.st_uid == VAR_1) {
    char VAR_5[VAR_0];

    FUNC_4(VAR_5, sizeof(VAR_5), "/usr/bin/atrm %s",
        VAR_3->d_name);
    FUNC_7(VAR_5);
   }
  }
  FUNC_1(VAR_2);
 }
}
