
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct untracked_cache_dir {int valid; int check_only; int stat_data; } ;
struct strbuf {char* buf; int len; } ;
struct stat {int dummy; } ;
struct index_state {int dummy; } ;
struct dir_struct {TYPE_1__* untracked; } ;
struct TYPE_2__ {scalar_t__ use_fsmonitor; } ;


 int FUNC_0 (int *,struct stat*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 scalar_t__ FUNC_2 (struct index_state*,int *,struct stat*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct dir_struct*,struct index_state*,char*,int ) ;
 int FUNC_5 (struct index_state*) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,int ) ;

__attribute__((used)) static int FUNC_8(struct dir_struct *VAR_0,
       struct untracked_cache_dir *VAR_1,
       struct index_state *VAR_2,
       struct strbuf *VAR_3,
       int VAR_4)
{
 struct stat VAR_5;

 if (!VAR_1)
  return 0;




 FUNC_5(VAR_2);
 if (!(VAR_0->untracked->use_fsmonitor && VAR_1->valid)) {
  if (FUNC_1(VAR_3->len ? VAR_3->buf : ".", &VAR_5)) {
   FUNC_3(&VAR_1->stat_data, 0, sizeof(VAR_1->stat_data));
   return 0;
  }
  if (!VAR_1->valid ||
   FUNC_2(VAR_2, &VAR_1->stat_data, &VAR_5)) {
   FUNC_0(&VAR_1->stat_data, &VAR_5);
   return 0;
  }
 }

 if (VAR_1->check_only != !!VAR_4)
  return 0;
 if (VAR_3->len && VAR_3->buf[VAR_3->len - 1] != '/') {
  FUNC_6(VAR_3, '/');
  FUNC_4(VAR_0, VAR_2, VAR_3->buf, VAR_3->len);
  FUNC_7(VAR_3, VAR_3->len - 1);
 } else
  FUNC_4(VAR_0, VAR_2, VAR_3->buf, VAR_3->len);


 return VAR_1->valid;
}
