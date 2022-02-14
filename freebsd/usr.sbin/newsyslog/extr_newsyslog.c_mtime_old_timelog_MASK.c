
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct stat {int st_mtime; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int ,struct stat*,int ) ;
 int * FUNC_6 (char*) ;
 struct dirent* FUNC_7 (int *) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int,struct dirent*,char*,struct tm*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static time_t
FUNC_12(const char *VAR_1)
{
 struct stat VAR_2;
 struct tm VAR_3;
 int VAR_4;
 time_t VAR_5;
 struct dirent *VAR_6;
 DIR *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;

 VAR_5 = -1;

 if ((VAR_11 = FUNC_8(VAR_1)) == ((void*)0)) {
  FUNC_10("strdup() of '%s'", VAR_1);
  return (VAR_5);
 }
 VAR_10 = FUNC_3(VAR_11);
 if ((VAR_9 = FUNC_8(VAR_1)) == ((void*)0)) {
  FUNC_10("strdup() of '%s'", VAR_1);
  FUNC_4(VAR_11);
  return (VAR_5);
 }
 VAR_8 = FUNC_0(VAR_9);
 if (VAR_8[0] == '/') {
  FUNC_11("Invalid log filename '%s'", VAR_8);
  goto out;
 }

 if ((VAR_7 = FUNC_6(VAR_10)) == ((void*)0)) {
  FUNC_10("Cannot open log directory '%s'", VAR_10);
  goto out;
 }
 VAR_4 = FUNC_2(VAR_7);

 while ((VAR_6 = FUNC_7(VAR_7)) != ((void*)0)) {
  if (FUNC_9(VAR_4, VAR_6, VAR_8, &VAR_3) == 0)
   continue;

  if (FUNC_5(VAR_4, VAR_6->d_name, &VAR_2, VAR_0) == -1) {
   FUNC_10("Cannot stat '%s'", VAR_1);
   continue;
  }
  if (VAR_5 < VAR_2.st_mtime)
   VAR_5 = VAR_2.st_mtime;
 }
 FUNC_1(VAR_7);

out:
 FUNC_4(VAR_11);
 FUNC_4(VAR_9);
 return (VAR_5);
}
