
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long long FUNC_0 (char*,char**) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, unsigned long long *VAR_2, unsigned long long *VAR_3)
{
 char *VAR_4;

 if (!VAR_1)
  return -VAR_0;


 if (!FUNC_1(VAR_1, "exactmap", 8))
  return -VAR_0;

 VAR_4 = VAR_1;
 *VAR_3 = FUNC_0(VAR_1, &VAR_1);
 if (VAR_1 == VAR_4)
  return -VAR_0;

 switch (*VAR_1) {
 case '#':
 case '$':
 case '!':
  *VAR_2 = FUNC_0(VAR_1 + 1, &VAR_1);
  return 0;
 case '@':

  *VAR_3 = 0;

 default:





  *VAR_2 = 0;
  return 0;
 }

 return -VAR_0;
}
