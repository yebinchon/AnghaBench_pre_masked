
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int check_only; } ;
struct strbuf {char* buf; int len; } ;
struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;
struct dir_struct {int flags; int untracked; } ;
struct cached_dir {scalar_t__ fdir; int de; } ;
typedef enum path_treatment { ____Placeholder_path_treatment } path_treatment ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_0 (struct untracked_cache_dir*,char*) ;
 int FUNC_1 (struct cached_dir*) ;
 int FUNC_2 (struct dir_struct*,struct index_state*,char*,int) ;
 int FUNC_3 (struct dir_struct*,struct index_state*,char*,int) ;
 scalar_t__ FUNC_4 (struct index_state*,struct pathspec const*,char*,int,int,int *,int ) ;
 int FUNC_5 (char*,int,struct pathspec const*) ;
 scalar_t__ FUNC_6 (int ,struct index_state*,char*,int) ;
 struct untracked_cache_dir* FUNC_7 (int ,struct untracked_cache_dir*,char*,int) ;
 int FUNC_8 (struct index_state*,struct pathspec const*,char*,int,int ,int *,int ) ;
 scalar_t__ FUNC_9 (struct cached_dir*,struct dir_struct*,struct untracked_cache_dir*,struct index_state*,struct strbuf*,int) ;

 int VAR_7 ;
 int VAR_8 ;

 int FUNC_10 (struct cached_dir*) ;
 int FUNC_11 (struct strbuf*,char const*,int) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (struct dir_struct*,struct untracked_cache_dir*,struct cached_dir*,struct index_state*,struct strbuf*,int,struct pathspec const*) ;

__attribute__((used)) static enum path_treatment FUNC_14(struct dir_struct *VAR_9,
 struct index_state *VAR_10, const char *VAR_11, int VAR_12,
 struct untracked_cache_dir *VAR_13, int VAR_14,
 int VAR_15, const struct pathspec *VAR_16)
{
 struct cached_dir VAR_17;
 enum path_treatment VAR_18, VAR_19, VAR_20 = VAR_7;
 struct strbuf VAR_21 = VAR_6;

 FUNC_11(&VAR_21, VAR_11, VAR_12);

 if (FUNC_9(&VAR_17, VAR_9, VAR_13, VAR_10, &VAR_21, VAR_14))
  goto out;

 if (VAR_13)
  VAR_13->check_only = !!VAR_14;

 while (!FUNC_10(&VAR_17)) {

  VAR_18 = FUNC_13(VAR_9, VAR_13, &VAR_17, VAR_10, &VAR_21,
       VAR_12, VAR_16);

  if (VAR_18 > VAR_20)
   VAR_20 = VAR_18;


  if ((VAR_18 == VAR_8) ||
   ((VAR_18 == 128) &&
    (FUNC_6(VAR_17.de, VAR_10, VAR_21.buf, VAR_21.len) == VAR_4) &&
    ((VAR_9->flags & VAR_2) ||
     (VAR_16 &&
      FUNC_4(VAR_10, VAR_16, VAR_21.buf, VAR_21.len,
          VAR_12, ((void*)0), VAR_3) == VAR_5)))) {
   struct untracked_cache_dir *VAR_22;
   VAR_22 = FUNC_7(VAR_9->untracked, VAR_13,
           VAR_21.buf + VAR_12,
           VAR_21.len - VAR_12);
   VAR_19 =
    FUNC_14(VAR_9, VAR_10, VAR_21.buf,
        VAR_21.len, VAR_22,
        VAR_14, VAR_15, VAR_16);
   if (VAR_19 > VAR_20)
    VAR_20 = VAR_19;

   if (VAR_16 &&
       !FUNC_8(VAR_10, VAR_16, VAR_21.buf, VAR_21.len,
         0 , ((void*)0),
         0 ))
    VAR_18 = VAR_7;
  }

  if (VAR_14) {
   if (VAR_15) {
    if (VAR_20 >= 129) {
     VAR_20 = 129;
     break;
    }
   }


   if (VAR_20 == 128) {
    if (VAR_17.fdir)
     FUNC_0(VAR_13, VAR_21.buf + VAR_12);
    break;
   }

   continue;
  }


  switch (VAR_18) {
  case 129:
   if (VAR_9->flags & VAR_1)
    FUNC_3(VAR_9, VAR_10, VAR_21.buf, VAR_21.len);
   else if ((VAR_9->flags & VAR_2) ||
    ((VAR_9->flags & VAR_0) &&
    FUNC_5(VAR_21.buf, VAR_21.len,
        VAR_16)))
    FUNC_2(VAR_9, VAR_10, VAR_21.buf, VAR_21.len);
   break;

  case 128:
   if (VAR_9->flags & VAR_1)
    break;
   FUNC_3(VAR_9, VAR_10, VAR_21.buf, VAR_21.len);
   if (VAR_17.fdir)
    FUNC_0(VAR_13, VAR_21.buf + VAR_12);
   break;

  default:
   break;
  }
 }
 FUNC_1(&VAR_17);
 out:
 FUNC_12(&VAR_21);

 return VAR_20;
}
