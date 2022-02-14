
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int dummy; } ;
struct strbuf {int dummy; } ;
struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;
struct dir_struct {int flags; int untracked; } ;
typedef enum path_treatment { ____Placeholder_path_treatment } path_treatment ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_0 (struct index_state*,char const*,int) ;



 int FUNC_1 (struct strbuf*) ;
 struct untracked_cache_dir* FUNC_2 (int ,struct untracked_cache_dir*,char const*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct dir_struct*,struct index_state*,char const*,int,struct untracked_cache_dir*,int,int,struct pathspec const*) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static enum path_treatment FUNC_6(struct dir_struct *VAR_11,
 struct index_state *VAR_12,
 struct untracked_cache_dir *VAR_13,
 const char *VAR_14, int VAR_15, int VAR_16, int VAR_17,
 const struct pathspec *VAR_18)
{

 switch (FUNC_0(VAR_12, VAR_14, VAR_15-1)) {
 case 130:
  return VAR_9;

 case 129:
  return VAR_8;

 case 128:
  if (VAR_11->flags & VAR_5) {
   int VAR_19;
   struct strbuf VAR_20 = VAR_6;
   FUNC_4(&VAR_20, VAR_14);
   VAR_19 = FUNC_1(&VAR_20);
   FUNC_5(&VAR_20);
   if (VAR_19)
    return VAR_8;
  }

  if (VAR_11->flags & VAR_4)
   break;
  if (VAR_17 &&
   (VAR_11->flags & VAR_2) &&
   (VAR_11->flags & VAR_3)) {
   if (!(VAR_11->flags & VAR_0))
    return VAR_7;

   if (FUNC_3(VAR_11, VAR_12, VAR_14, VAR_15,
           VAR_13, 1, 1, VAR_18) == VAR_7)
    return VAR_7;

   return VAR_8;
  }
  if (!(VAR_11->flags & VAR_1)) {
   struct strbuf VAR_21 = VAR_6;
   FUNC_4(&VAR_21, VAR_14);
   if (FUNC_1(&VAR_21))
    return VAR_17 ? VAR_7 : VAR_10;
   FUNC_5(&VAR_21);
  }
  return VAR_9;
 }



 if (!(VAR_11->flags & VAR_0))
  return VAR_17 ? VAR_7 : VAR_10;

 VAR_13 = FUNC_2(VAR_11->untracked, VAR_13,
         VAR_14 + VAR_16, VAR_15 - VAR_16);





 return FUNC_3(VAR_11, VAR_12, VAR_14, VAR_15,
     VAR_13, 1, VAR_17, VAR_18);
}
