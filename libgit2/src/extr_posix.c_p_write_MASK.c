
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int git_file ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,char const*,size_t) ;

int FUNC_3(git_file VAR_3, const void *VAR_4, size_t VAR_5)
{
 const char *VAR_6 = VAR_4;

 while (VAR_5) {
  ssize_t VAR_7;




  VAR_7 = FUNC_2(VAR_3, VAR_6, VAR_5);

  if (VAR_7 < 0) {
   if (VAR_2 == VAR_0 || FUNC_0(VAR_2))
    continue;
   return -1;
  }
  if (!VAR_7) {
   VAR_2 = VAR_1;
   return -1;
  }
  VAR_5 -= VAR_7;
  VAR_6 += VAR_7;
 }
 return 0;
}
