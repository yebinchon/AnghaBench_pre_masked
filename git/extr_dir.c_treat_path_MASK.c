
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int dummy; } ;
struct strbuf {int len; int buf; } ;
struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;
struct dirent {int d_name; } ;
struct dir_struct {int dummy; } ;
struct cached_dir {struct dirent* de; } ;
typedef enum path_treatment { ____Placeholder_path_treatment } path_treatment ;


 int FUNC_0 (struct dirent*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ,struct pathspec const*) ;
 int FUNC_4 (struct strbuf*,int ) ;
 int FUNC_5 (struct strbuf*,int) ;
 int FUNC_6 (struct dir_struct*,struct untracked_cache_dir*,struct index_state*,struct strbuf*,int,struct pathspec const*,int,struct dirent*) ;
 int FUNC_7 (struct dir_struct*,struct untracked_cache_dir*,struct cached_dir*,struct index_state*,struct strbuf*,int,struct pathspec const*) ;

__attribute__((used)) static enum path_treatment FUNC_8(struct dir_struct *VAR_1,
          struct untracked_cache_dir *VAR_2,
          struct cached_dir *VAR_3,
          struct index_state *VAR_4,
          struct strbuf *VAR_5,
          int VAR_6,
          const struct pathspec *VAR_7)
{
 int VAR_8;
 struct dirent *VAR_9 = VAR_3->de;

 if (!VAR_9)
  return FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7);
 if (FUNC_2(VAR_9->d_name) || !FUNC_1(VAR_9->d_name, ".git"))
  return VAR_0;
 FUNC_5(VAR_5, VAR_6);
 FUNC_4(VAR_5, VAR_9->d_name);
 if (FUNC_3(VAR_5->buf, VAR_5->len, VAR_7))
  return VAR_0;

 VAR_8 = FUNC_0(VAR_9);
 return FUNC_6(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
