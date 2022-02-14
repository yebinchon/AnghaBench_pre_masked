
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_mode; int st_atime; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,struct stat*,int ) ;
 int FUNC_1 (char*,int ,char*) ;

int
FUNC_2(int VAR_2, char *VAR_3, int *VAR_4, time_t *VAR_5, int VAR_6)
{
 struct stat VAR_7;

 if (FUNC_0(VAR_2, VAR_3, &VAR_7, 0) < 0) {
  if (VAR_6)
   FUNC_1("%s%s", VAR_1, VAR_3);
  return(1);
 }
 *VAR_4 = (VAR_7.st_mode & (VAR_0 >> 3)) != 0;
 *VAR_5 = VAR_7.st_atime;
 return(0);
}
