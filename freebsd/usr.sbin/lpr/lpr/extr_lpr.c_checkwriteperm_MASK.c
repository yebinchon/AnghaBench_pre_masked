
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*,struct stat*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3, const char *VAR_4)
{
 struct stat VAR_5;
 if (FUNC_0(VAR_4, VAR_1) == 0) {
  FUNC_1(VAR_4, &VAR_5);
  if (VAR_5.st_mode & VAR_0) {
   FUNC_1(VAR_3, &VAR_5);
   if(VAR_5.st_uid == VAR_2) {
    return(0);
   }
  } else return(0);
 }
 return(-1);
}
