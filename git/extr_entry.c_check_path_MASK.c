
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,int) ;
 int FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, int VAR_3, struct stat *VAR_4, int VAR_5)
{
 const char *VAR_6 = VAR_2 + VAR_3;

 while (VAR_2 < VAR_6 && *VAR_6 != '/')
  VAR_6--;
 if (!FUNC_0(VAR_2, VAR_6 - VAR_2, VAR_5)) {
  VAR_1 = VAR_0;
  return -1;
 }
 return FUNC_1(VAR_2, VAR_4);
}
