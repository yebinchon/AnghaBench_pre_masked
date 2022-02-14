
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {int st_ino; scalar_t__ st_atime; scalar_t__ st_ctime; scalar_t__ st_mtime; scalar_t__ st_birthtime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,struct stat*) ;
 long long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, struct stat *VAR_2)
{
 time_t VAR_3;
 char *VAR_4;
 long long VAR_5;

 if (FUNC_0(VAR_1, VAR_2) != -1)
  return 0;

 {
  VAR_0 = 0;
  VAR_5 = FUNC_1(VAR_1, &VAR_4, 0);
  if (VAR_1 == VAR_4 || *VAR_4 || VAR_0)
   return -1;
  VAR_3 = (time_t)VAR_5;
 }

 VAR_2->st_ino = 1;



 VAR_2->st_mtime = VAR_2->st_ctime = VAR_2->st_atime = VAR_3;
 return 0;
}
