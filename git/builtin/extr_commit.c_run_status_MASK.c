
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {char const* prefix; int amend; char* reference; char const* index_file; int nowarn; int is_initial; int committable; int ignore_submodule_arg; int status_format; int oid_commit; int * fp; int verbose; scalar_t__ relative_paths; } ;
struct object_id {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct object_id*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct object_id*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct wt_status*) ;
 int FUNC_3 (struct wt_status*) ;
 int FUNC_4 (struct wt_status*) ;

__attribute__((used)) static int FUNC_5(FILE *VAR_4, const char *VAR_5, const char *VAR_6, int VAR_7,
        struct wt_status *VAR_8)
{
 struct object_id VAR_9;

 if (VAR_8->relative_paths)
  VAR_8->prefix = VAR_6;

 if (VAR_0) {
  VAR_8->amend = 1;
  VAR_8->reference = "HEAD^1";
 }
 VAR_8->verbose = VAR_3;
 VAR_8->index_file = VAR_5;
 VAR_8->fp = VAR_4;
 VAR_8->nowarn = VAR_7;
 VAR_8->is_initial = FUNC_0(VAR_8->reference, &VAR_9) ? 1 : 0;
 if (!VAR_8->is_initial)
  FUNC_1(&VAR_8->oid_commit, &VAR_9);
 VAR_8->status_format = VAR_2;
 VAR_8->ignore_submodule_arg = VAR_1;

 FUNC_2(VAR_8);
 FUNC_4(VAR_8);
 FUNC_3(VAR_8);

 return VAR_8->committable;
}
