
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char const* buf; } ;
struct pathspec_item {char* match; int len; int magic; int nowildcard_len; scalar_t__ attr_match_nr; } ;
struct pathspec {int nr; int magic; int max_depth; scalar_t__ recursive; scalar_t__ recurse_submodules; struct pathspec_item* items; scalar_t__ has_wildcard; } ;
struct name_entry {char* path; int mode; } ;
struct index_state {int dummy; } ;
typedef enum interesting { ____Placeholder_interesting } interesting ;


 int FUNC_0 (struct pathspec const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct pathspec_item const*,char const*,char const*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct pathspec_item const*,char const*,char*,int) ;
 int FUNC_5 (struct pathspec_item const*,char const*,char const*,int) ;
 scalar_t__ FUNC_6 (struct pathspec_item const*,struct name_entry const*,int,char const*,int,int*) ;
 int FUNC_7 (struct index_state*,char*,int,struct pathspec_item const*) ;
 int FUNC_8 (struct pathspec_item const*,char const*,int,int*) ;
 int FUNC_9 (struct pathspec_item const*,char const*,char*,int) ;
 int FUNC_10 (struct strbuf*,char*,int) ;
 int FUNC_11 (struct strbuf*,int) ;
 int FUNC_12 (struct name_entry const*) ;
 scalar_t__ FUNC_13 (char const*,int,int,int) ;

__attribute__((used)) static enum interesting FUNC_14(struct index_state *VAR_11,
     const struct name_entry *VAR_12,
     struct strbuf *VAR_13, int VAR_14,
     const struct pathspec *VAR_15,
     int VAR_16)
{
 int VAR_17;
 int VAR_18, VAR_19 = VAR_13->len - VAR_14;
 enum interesting VAR_20 = VAR_15->has_wildcard ?
  VAR_10 : VAR_8;

 FUNC_0(VAR_15,
         VAR_2 |
         VAR_6 |
         VAR_5 |
         VAR_3 |
         VAR_4 |
         VAR_1 |
         VAR_0);

 if (!VAR_15->nr) {
  if (!VAR_15->recursive ||
      !(VAR_15->magic & VAR_6) ||
      VAR_15->max_depth == -1)
   return VAR_7;
  return FUNC_13(VAR_13->buf + VAR_14, VAR_19,
        !!FUNC_1(VAR_12->mode),
        VAR_15->max_depth) ?
   VAR_9 : VAR_10;
 }

 VAR_18 = FUNC_12(VAR_12);

 for (VAR_17 = VAR_15->nr - 1; VAR_17 >= 0; VAR_17--) {
  const struct pathspec_item *VAR_21 = VAR_15->items+VAR_17;
  const char *VAR_22 = VAR_21->match;
  const char *VAR_23 = VAR_13->buf + VAR_14;
  int VAR_24 = VAR_21->len, VAR_25 = 0;

  if ((!VAR_16 && VAR_21->magic & VAR_1) ||
      ( VAR_16 && !(VAR_21->magic & VAR_1)))
   continue;

  if (VAR_19 >= VAR_24) {

   if (!FUNC_5(VAR_21, VAR_23, VAR_22, VAR_24))
    goto match_wildcards;

   if (!VAR_15->recursive ||
       !(VAR_15->magic & VAR_6) ||
       VAR_15->max_depth == -1) {
    if (!VAR_21->attr_match_nr)
     return VAR_7;
    else
     goto interesting;
   }

   if (FUNC_13(VAR_23 + VAR_24 + 1,
      VAR_19 - VAR_24 - 1,
      !!FUNC_1(VAR_12->mode),
      VAR_15->max_depth))
    goto interesting;
   else
    return VAR_10;
  }


  if (VAR_19 == 0 || !FUNC_3(VAR_21, VAR_23, VAR_22, VAR_19)) {
   if (FUNC_6(VAR_21, VAR_12, VAR_18,
     VAR_22 + VAR_19, VAR_24 - VAR_19,
     &VAR_20))
    goto interesting;

   if (VAR_21->nowildcard_len < VAR_21->len) {
    if (!FUNC_4(VAR_21, VAR_22 + VAR_19, VAR_12->path,
       VAR_21->nowildcard_len - VAR_19))
     goto interesting;





    if (VAR_15->recursive && FUNC_1(VAR_12->mode))
     return VAR_9;
    if (VAR_15->recurse_submodules &&
        FUNC_2(VAR_12->mode) &&
        !FUNC_9(VAR_21, VAR_22 + VAR_19,
      VAR_12->path,
      VAR_21->nowildcard_len - VAR_19))
     goto interesting;
   }

   continue;
  }

match_wildcards:
  if (VAR_21->nowildcard_len == VAR_21->len)
   continue;

  if (VAR_21->nowildcard_len &&
      !FUNC_8(VAR_21, VAR_23, VAR_19, &VAR_25))
   continue;
  FUNC_10(VAR_13, VAR_12->path, VAR_18);

  if (!FUNC_4(VAR_21, VAR_22, VAR_13->buf + VAR_14,
     VAR_21->nowildcard_len)) {
   FUNC_11(VAR_13, VAR_14 + VAR_19);
   goto interesting;
  }
  if (VAR_15->recurse_submodules && FUNC_2(VAR_12->mode) &&
      !FUNC_9(VAR_21, VAR_22, VAR_13->buf + VAR_14,
    VAR_21->nowildcard_len)) {
   FUNC_11(VAR_13, VAR_14 + VAR_19);
   goto interesting;
  }

  FUNC_11(VAR_13, VAR_14 + VAR_19);
  if (VAR_15->recursive && FUNC_1(VAR_12->mode))
   return VAR_9;
  continue;
interesting:
  if (VAR_21->attr_match_nr) {
   int VAR_26;






   VAR_20 = VAR_10;
   if (FUNC_1(VAR_12->mode))
    return VAR_9;

   FUNC_10(VAR_13, VAR_12->path, VAR_18);
   VAR_26 = FUNC_7(VAR_11, VAR_13->buf + VAR_14,
         VAR_13->len - VAR_14, VAR_21);
   FUNC_11(VAR_13, VAR_14 + VAR_19);
   if (!VAR_26)
    continue;
  }
  return VAR_9;
 }
 return VAR_20;
}
