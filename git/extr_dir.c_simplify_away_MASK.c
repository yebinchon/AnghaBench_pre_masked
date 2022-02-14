
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {int nowildcard_len; int match; } ;
struct pathspec {int nr; struct pathspec_item* items; } ;


 int FUNC_0 (struct pathspec const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pathspec_item const*,int ,char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_7, int VAR_8,
    const struct pathspec *VAR_9)
{
 int VAR_10;

 if (!VAR_9 || !VAR_9->nr)
  return 0;

 FUNC_0(VAR_9,
         VAR_2 |
         VAR_6 |
         VAR_5 |
         VAR_3 |
         VAR_4 |
         VAR_1 |
         VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_9->nr; VAR_10++) {
  const struct pathspec_item *VAR_11 = &VAR_9->items[VAR_10];
  int VAR_12 = VAR_11->nowildcard_len;

  if (VAR_12 > VAR_8)
   VAR_12 = VAR_8;
  if (!FUNC_1(VAR_11, VAR_11->match, VAR_7, VAR_12))
   return 0;
 }

 return 1;
}
