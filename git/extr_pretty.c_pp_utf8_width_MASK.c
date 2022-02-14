
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,size_t*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;
 size_t VAR_3 = VAR_1 - VAR_0;

 while (VAR_3) {
  int VAR_4 = FUNC_0(&VAR_0, &VAR_3);
  if (VAR_4 < 0 || !VAR_0)
   return -1;
  VAR_2 += VAR_4;
 }
 return VAR_2;
}
