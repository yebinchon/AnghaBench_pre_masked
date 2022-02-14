
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct passwd {char* pw_dir; } ;
typedef int buf ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;

int
FUNC_2(struct passwd *VAR_3)
{
 struct stat VAR_4;
 char VAR_5[VAR_0];

 if (VAR_2 || !VAR_3->pw_dir)
  return 0;

 FUNC_0(VAR_5, sizeof(VAR_5), "%s/%s", VAR_3->pw_dir, VAR_1);

 if (FUNC_1(VAR_5, &VAR_4) == 0)
  return 1;

 return 0;
}
