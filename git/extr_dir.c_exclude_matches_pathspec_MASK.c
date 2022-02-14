
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {int nowildcard_len; char* match; } ;
struct pathspec {int nr; struct pathspec_item* items; } ;


 int FUNC_0 (struct pathspec const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pathspec_item const*,char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_6, int VAR_7,
        const struct pathspec *VAR_8)
{
 int VAR_9;

 if (!VAR_8 || !VAR_8->nr)
  return 0;

 FUNC_0(VAR_8,
         VAR_1 |
         VAR_5 |
         VAR_4 |
         VAR_2 |
         VAR_3 |
         VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_8->nr; VAR_9++) {
  const struct pathspec_item *VAR_10 = &VAR_8->items[VAR_9];
  int VAR_11 = VAR_10->nowildcard_len;

  if (VAR_11 == VAR_7 &&
      !FUNC_1(VAR_10, VAR_10->match, VAR_6, VAR_7))
   return 1;
  if (VAR_11 > VAR_7 &&
      VAR_10->match[VAR_7] == '/' &&
      !FUNC_1(VAR_10, VAR_10->match, VAR_6, VAR_7))
   return 1;
 }
 return 0;
}
