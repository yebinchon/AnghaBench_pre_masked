
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct untracked_cache_dir {int dummy; } ;
struct strbuf {int len; int buf; } ;
struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;
struct dir_struct {int dummy; } ;
struct cached_dir {TYPE_1__* ucd; int file; } ;
typedef enum path_treatment { ____Placeholder_path_treatment } path_treatment ;
struct TYPE_2__ {scalar_t__ check_only; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dir_struct*,struct index_state*,int ,int ,TYPE_1__*,int,int ,struct pathspec const*) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,int) ;

__attribute__((used)) static enum path_treatment FUNC_4(struct dir_struct *VAR_2,
        struct untracked_cache_dir *VAR_3,
        struct cached_dir *VAR_4,
        struct index_state *VAR_5,
        struct strbuf *VAR_6,
        int VAR_7,
        const struct pathspec *VAR_8)
{
 FUNC_3(VAR_6, VAR_7);
 if (!VAR_4->ucd) {
  FUNC_1(VAR_6, VAR_4->file);
  return VAR_1;
 }
 FUNC_1(VAR_6, VAR_4->ucd->name);

 FUNC_2(VAR_6, '/');
 if (VAR_4->ucd->check_only)





  return FUNC_0(VAR_2, VAR_5, VAR_6->buf, VAR_6->len,
      VAR_4->ucd, 1, 0, VAR_8);






 return VAR_0;
}
