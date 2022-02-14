
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct untracked_cache_dir {int dummy; } ;
struct strbuf {char* buf; scalar_t__ len; } ;
struct index_state {int dummy; } ;
struct dir_struct {TYPE_1__* untracked; } ;
struct cached_dir {int fdir; struct untracked_cache_dir* untracked; } ;
struct TYPE_2__ {int dir_opened; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,struct untracked_cache_dir*) ;
 int FUNC_2 (struct cached_dir*,int ,int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (struct dir_struct*,struct untracked_cache_dir*,struct index_state*,struct strbuf*,int) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static int FUNC_6(struct cached_dir *VAR_0,
      struct dir_struct *VAR_1,
      struct untracked_cache_dir *VAR_2,
      struct index_state *VAR_3,
      struct strbuf *VAR_4,
      int VAR_5)
{
 const char *VAR_6;

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->untracked = VAR_2;
 if (FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))
  return 0;
 VAR_6 = VAR_4->len ? VAR_4->buf : ".";
 VAR_0->fdir = FUNC_3(VAR_6);
 if (!VAR_0->fdir)
  FUNC_5(FUNC_0("could not open directory '%s'"), VAR_6);
 if (VAR_1->untracked) {
  FUNC_1(VAR_1->untracked, VAR_2);
  VAR_1->untracked->dir_opened++;
 }
 if (!VAR_0->fdir)
  return -1;
 return 0;
}
