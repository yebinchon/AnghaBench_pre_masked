
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct replay_opts {char* strategy; char* gpg_sign; int xopts_nr; scalar_t__ allow_rerere_auto; int default_msg_cleanup; scalar_t__ explicit_cleanup; int * xopts; scalar_t__ mainline; scalar_t__ allow_ff; scalar_t__ record_origin; scalar_t__ signoff; scalar_t__ keep_redundant_commits; scalar_t__ allow_empty_message; scalar_t__ allow_empty; scalar_t__ edit; scalar_t__ no_commit; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,char*) ;
 int FUNC_2 (char const*,char*,int ,char*,int ) ;
 char* FUNC_3 () ;
 int FUNC_4 (struct strbuf*,char*,scalar_t__) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static int FUNC_6(struct replay_opts *VAR_2)
{
 const char *VAR_3 = FUNC_3();
 int VAR_4 = 0;

 if (VAR_2->no_commit)
  VAR_4 |= FUNC_1(VAR_3,
     "options.no-commit", "true");
 if (VAR_2->edit)
  VAR_4 |= FUNC_1(VAR_3,
     "options.edit", "true");
 if (VAR_2->allow_empty)
  VAR_4 |= FUNC_1(VAR_3,
     "options.allow-empty", "true");
 if (VAR_2->allow_empty_message)
  VAR_4 |= FUNC_1(VAR_3,
    "options.allow-empty-message", "true");
 if (VAR_2->keep_redundant_commits)
  VAR_4 |= FUNC_1(VAR_3,
    "options.keep-redundant-commits", "true");
 if (VAR_2->signoff)
  VAR_4 |= FUNC_1(VAR_3,
     "options.signoff", "true");
 if (VAR_2->record_origin)
  VAR_4 |= FUNC_1(VAR_3,
     "options.record-origin", "true");
 if (VAR_2->allow_ff)
  VAR_4 |= FUNC_1(VAR_3,
     "options.allow-ff", "true");
 if (VAR_2->mainline) {
  struct strbuf VAR_5 = VAR_1;
  FUNC_4(&VAR_5, "%d", VAR_2->mainline);
  VAR_4 |= FUNC_1(VAR_3,
     "options.mainline", VAR_5.buf);
  FUNC_5(&VAR_5);
 }
 if (VAR_2->strategy)
  VAR_4 |= FUNC_1(VAR_3,
     "options.strategy", VAR_2->strategy);
 if (VAR_2->gpg_sign)
  VAR_4 |= FUNC_1(VAR_3,
     "options.gpg-sign", VAR_2->gpg_sign);
 if (VAR_2->xopts) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_2->xopts_nr; VAR_6++)
   VAR_4 |= FUNC_2(VAR_3,
     "options.strategy-option",
     VAR_2->xopts[VAR_6], "^$", 0);
 }
 if (VAR_2->allow_rerere_auto)
  VAR_4 |= FUNC_1(VAR_3,
    "options.allow-rerere-auto",
    VAR_2->allow_rerere_auto == VAR_0 ?
    "true" : "false");

 if (VAR_2->explicit_cleanup)
  VAR_4 |= FUNC_1(VAR_3,
    "options.default-msg-cleanup",
    FUNC_0(VAR_2->default_msg_cleanup));
 return VAR_4;
}
