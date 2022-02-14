
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {char* match; int nowildcard_len; } ;


 scalar_t__ FUNC_0 (struct pathspec_item const*,char const*,char const*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct pathspec_item *VAR_1,
          const char *VAR_2, int VAR_3,
          int *VAR_4)
{
 const char *VAR_5 = VAR_1->match;

 int VAR_6 = VAR_1->nowildcard_len;

 if (VAR_3) {
  int VAR_7;




  if (VAR_3 >= VAR_6) {
   *VAR_4 = VAR_6;
   return !FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6);
  }

  VAR_7 = VAR_6;
  while (VAR_7 && VAR_5[VAR_7 - 1] != '/')
   VAR_7--;







  if (FUNC_0(VAR_1, VAR_2, VAR_5, VAR_3))
   return 0;
  *VAR_4 = VAR_3;
 } else
  *VAR_4 = 0;






 return VAR_0;
}
