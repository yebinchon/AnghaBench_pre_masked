
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {char* match; int len; int magic; int nowildcard_len; scalar_t__ attr_match_nr; scalar_t__ prefix; } ;
struct index_state {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pathspec_item const*,char const*,char const*,int) ;
 int FUNC_1 (struct index_state const*,char const*,int,struct pathspec_item const*) ;
 scalar_t__ FUNC_2 (struct pathspec_item const*,char const*,char const*,int) ;
 scalar_t__ FUNC_3 (char*,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(const struct index_state *VAR_7,
          const struct pathspec_item *VAR_8, int VAR_9,
          const char *VAR_10, int VAR_11, unsigned VAR_12)
{

 const char *VAR_13 = VAR_8->match + VAR_9;
 int VAR_14 = VAR_8->len - VAR_9;
 if (VAR_8->prefix && (VAR_8->magic & VAR_6) &&
     FUNC_3(VAR_8->match, VAR_10 - VAR_9, VAR_8->prefix))
  return 0;

 if (VAR_8->attr_match_nr &&
     !FUNC_1(VAR_7, VAR_10, VAR_11, VAR_8))
  return 0;


 if (!*VAR_13)
  return VAR_4;

 if (VAR_14 <= VAR_11 && !FUNC_2(VAR_8, VAR_13, VAR_10, VAR_14)) {
  if (VAR_14 == VAR_11)
   return VAR_2;

  if (VAR_13[VAR_14-1] == '/' || VAR_10[VAR_14] == '/')
   return VAR_4;
 } else if ((VAR_12 & VAR_0) &&
     VAR_13[VAR_14 - 1] == '/' &&
     VAR_11 == VAR_14 - 1 &&
     !FUNC_2(VAR_8, VAR_13, VAR_10, VAR_11))
  return VAR_2;

 if (VAR_8->nowildcard_len < VAR_8->len &&
     !FUNC_0(VAR_8, VAR_13, VAR_10,
    VAR_8->nowildcard_len - VAR_9))
  return VAR_3;


 if (VAR_12 & VAR_1) {

  int VAR_15 = VAR_10[VAR_11-1] == '/' ? 1 : 0;
  if ((VAR_11 < VAR_14) &&
      (VAR_13[VAR_11-VAR_15] == '/') &&
      !FUNC_2(VAR_8, VAR_13, VAR_10, VAR_11))
   return VAR_5;


  if (VAR_8->nowildcard_len < VAR_8->len &&
      FUNC_2(VAR_8, VAR_13, VAR_10,
          VAR_8->nowildcard_len - VAR_9))
   return 0;
  return VAR_5;
 }

 return 0;
}
