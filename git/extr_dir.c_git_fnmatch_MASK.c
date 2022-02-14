
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {int flags; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct pathspec_item const*,char const*,char const*) ;
 scalar_t__ FUNC_1 (struct pathspec_item const*,char const*,char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int) ;

int FUNC_4(const struct pathspec_item *VAR_6,
  const char *VAR_7, const char *VAR_8,
  int VAR_9)
{
 if (VAR_9 > 0) {
  if (FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9))
   return VAR_4;
  VAR_7 += VAR_9;
  VAR_8 += VAR_9;
 }
 if (VAR_6->flags & VAR_2) {
  int VAR_10 = FUNC_2(++VAR_7);
  int VAR_11 = FUNC_2(VAR_8);
  return VAR_11 < VAR_10 ||
   FUNC_0(VAR_6, VAR_7,
      VAR_8 + VAR_11 - VAR_10);
 }
 if (VAR_6->magic & VAR_0)
  return FUNC_3(VAR_7, VAR_8,
     VAR_5 |
     (VAR_6->magic & VAR_1 ? VAR_3 : 0));
 else

  return FUNC_3(VAR_7, VAR_8,
     VAR_6->magic & VAR_1 ? VAR_3 : 0);
}
