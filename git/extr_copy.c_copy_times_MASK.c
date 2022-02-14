
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utimbuf {int modtime; int actime; } ;
struct stat {int st_mtime; int st_atime; } ;


 scalar_t__ FUNC_0 (char const*,struct stat*) ;
 scalar_t__ FUNC_1 (char const*,struct utimbuf*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1)
{
 struct stat VAR_2;
 struct utimbuf VAR_3;
 if (FUNC_0(VAR_1, &VAR_2) < 0)
  return -1;
 VAR_3.actime = VAR_2.st_atime;
 VAR_3.modtime = VAR_2.st_mtime;
 if (FUNC_1(VAR_0, &VAR_3) < 0)
  return -1;
 return 0;
}
