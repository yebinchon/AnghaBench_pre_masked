
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_dev; int st_ino; } ;
struct reqfile {char const* name; int consumers; int fsid; int fileid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, struct reqfile *VAR_1)
{
 struct stat VAR_2;

 FUNC_1(VAR_0);
 if (FUNC_2(VAR_0, &VAR_2) != 0) {
  FUNC_3("%s", VAR_0);
  return (1);
 }
 VAR_1->fileid = VAR_2.st_ino;
 VAR_1->fsid = VAR_2.st_dev;
 VAR_1->name = VAR_0;
 FUNC_0(&VAR_1->consumers);
 return (0);
}
