
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {int explicit_cleanup; int default_msg_cleanup; int allow_rerere_auto; scalar_t__ xopts_nr; int * xopts; int xopts_alloc; int gpg_sign; int strategy; int mainline; void* allow_ff; void* record_origin; void* signoff; void* keep_redundant_commits; void* allow_empty_message; void* allow_empty; void* edit; void* no_commit; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*,...) ;
 int FUNC_3 (char const*,int) ;
 void* FUNC_4 (char const*,char const*,int*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 struct replay_opts *VAR_5 = VAR_4;
 int VAR_6 = 1;

 if (!VAR_3)
  VAR_6 = 0;
 else if (!FUNC_7(VAR_2, "options.no-commit"))
  VAR_5->no_commit = FUNC_4(VAR_2, VAR_3, &VAR_6);
 else if (!FUNC_7(VAR_2, "options.edit"))
  VAR_5->edit = FUNC_4(VAR_2, VAR_3, &VAR_6);
 else if (!FUNC_7(VAR_2, "options.allow-empty"))
  VAR_5->allow_empty =
   FUNC_4(VAR_2, VAR_3, &VAR_6);
 else if (!FUNC_7(VAR_2, "options.allow-empty-message"))
  VAR_5->allow_empty_message =
   FUNC_4(VAR_2, VAR_3, &VAR_6);
 else if (!FUNC_7(VAR_2, "options.keep-redundant-commits"))
  VAR_5->keep_redundant_commits =
   FUNC_4(VAR_2, VAR_3, &VAR_6);
 else if (!FUNC_7(VAR_2, "options.signoff"))
  VAR_5->signoff = FUNC_4(VAR_2, VAR_3, &VAR_6);
 else if (!FUNC_7(VAR_2, "options.record-origin"))
  VAR_5->record_origin = FUNC_4(VAR_2, VAR_3, &VAR_6);
 else if (!FUNC_7(VAR_2, "options.allow-ff"))
  VAR_5->allow_ff = FUNC_4(VAR_2, VAR_3, &VAR_6);
 else if (!FUNC_7(VAR_2, "options.mainline"))
  VAR_5->mainline = FUNC_5(VAR_2, VAR_3);
 else if (!FUNC_7(VAR_2, "options.strategy"))
  FUNC_6(&VAR_5->strategy, VAR_2, VAR_3);
 else if (!FUNC_7(VAR_2, "options.gpg-sign"))
  FUNC_6(&VAR_5->gpg_sign, VAR_2, VAR_3);
 else if (!FUNC_7(VAR_2, "options.strategy-option")) {
  FUNC_0(VAR_5->xopts, VAR_5->xopts_nr + 1, VAR_5->xopts_alloc);
  VAR_5->xopts[VAR_5->xopts_nr++] = FUNC_8(VAR_3);
 } else if (!FUNC_7(VAR_2, "options.allow-rerere-auto"))
  VAR_5->allow_rerere_auto =
   FUNC_4(VAR_2, VAR_3, &VAR_6) ?
    VAR_0 : VAR_1;
 else if (!FUNC_7(VAR_2, "options.default-msg-cleanup")) {
  VAR_5->explicit_cleanup = 1;
  VAR_5->default_msg_cleanup = FUNC_3(VAR_3, 1);
 } else
  return FUNC_2(FUNC_1("invalid key: %s"), VAR_2);

 if (!VAR_6)
  return FUNC_2(FUNC_1("invalid value for %s: %s"), VAR_2, VAR_3);

 return 0;
}
