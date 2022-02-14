
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int dummy; } ;
struct strbuf {int len; int buf; } ;
struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;
struct dirent {int dummy; } ;
struct dir_struct {int flags; } ;
typedef enum path_treatment { ____Placeholder_path_treatment } path_treatment ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 scalar_t__ FUNC_0 (struct index_state*,int ,int ) ;
 int FUNC_1 (struct dirent*,struct index_state*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct index_state*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct dir_struct*,struct index_state*,int ,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct dir_struct*,struct index_state*,struct untracked_cache_dir*,int ,int ,int,int,struct pathspec const*) ;

__attribute__((used)) static enum path_treatment FUNC_6(struct dir_struct *VAR_11,
       struct untracked_cache_dir *VAR_12,
       struct index_state *VAR_13,
       struct strbuf *VAR_14,
       int VAR_15,
       const struct pathspec *VAR_16,
       int VAR_17, struct dirent *VAR_18)
{
 int VAR_19;
 int VAR_20 = !!FUNC_2(VAR_13, VAR_14->buf, VAR_14->len, VAR_5);
 enum path_treatment VAR_21;

 if (VAR_17 == VAR_4)
  VAR_17 = FUNC_1(VAR_18, VAR_13, VAR_14->buf, VAR_14->len);


 if (VAR_17 != 130 && VAR_20)
  return VAR_8;
 if ((VAR_11->flags & VAR_0) &&
     (VAR_17 == 130) &&
     !VAR_20 &&
     (FUNC_0(VAR_13, VAR_14->buf, VAR_14->len) == VAR_6))
  return VAR_8;

 VAR_19 = FUNC_3(VAR_11, VAR_13, VAR_14->buf, &VAR_17);





 if (VAR_19 && !(VAR_11->flags & (VAR_1|VAR_2)))
  return VAR_7;

 switch (VAR_17) {
 default:
  return VAR_8;
 case 130:
  FUNC_4(VAR_14, '/');
  VAR_21 = FUNC_5(VAR_11, VAR_13, VAR_12,
       VAR_14->buf, VAR_14->len,
       VAR_15, VAR_19, VAR_16);
  if (!VAR_19 &&
      VAR_21 == VAR_7 &&
      (VAR_11->flags & VAR_2) &&
      (VAR_11->flags & VAR_3))
   return VAR_9;
  return VAR_21;
 case 128:
 case 129:
  return VAR_19 ? VAR_7 : VAR_10;
 }
}
