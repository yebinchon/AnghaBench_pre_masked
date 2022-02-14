
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int git_file ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,size_t) ;

ssize_t FUNC_3(git_file VAR_6, void *VAR_7, size_t VAR_8)
{
 char *VAR_9 = VAR_7;

 if (!FUNC_1(VAR_8)) {



  VAR_5 = VAR_2;
  return -1;
 }

 while (VAR_8) {
  ssize_t VAR_10;



  VAR_10 = FUNC_2(VAR_6, VAR_9, VAR_8);

  if (VAR_10 < 0) {
   if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
    continue;
   return -1;
  }
  if (!VAR_10)
   break;
  VAR_8 -= VAR_10;
  VAR_9 += VAR_10;
 }
 return (VAR_9 - (char *)VAR_7);
}
