
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rebase_options {char* head_name; int flags; scalar_t__ allow_rerere_autoupdate; scalar_t__ signoff; int gpg_sign_opt; int strategy_opts; int strategy; int orig_head; TYPE_2__* onto; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,struct rebase_options*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct rebase_options *VAR_3)
{
 FUNC_2(FUNC_1("head-name", VAR_3), "%s",
     VAR_3->head_name ? VAR_3->head_name : "detached HEAD");
 FUNC_2(FUNC_1("onto", VAR_3), "%s",
     VAR_3->onto ? FUNC_0(&VAR_3->onto->object.oid) : "");
 FUNC_2(FUNC_1("orig-head", VAR_3), "%s",
     FUNC_0(&VAR_3->orig_head));
 FUNC_2(FUNC_1("quiet", VAR_3), "%s",
     VAR_3->flags & VAR_0 ? "" : "t");
 if (VAR_3->flags & VAR_1)
  FUNC_2(FUNC_1("verbose", VAR_3), "%s", "");
 if (VAR_3->strategy)
  FUNC_2(FUNC_1("strategy", VAR_3), "%s",
      VAR_3->strategy);
 if (VAR_3->strategy_opts)
  FUNC_2(FUNC_1("strategy_opts", VAR_3), "%s",
      VAR_3->strategy_opts);
 if (VAR_3->allow_rerere_autoupdate > 0)
  FUNC_2(FUNC_1("allow_rerere_autoupdate", VAR_3),
      "-%s-rerere-autoupdate",
      VAR_3->allow_rerere_autoupdate == VAR_2 ?
    "" : "-no");
 if (VAR_3->gpg_sign_opt)
  FUNC_2(FUNC_1("gpg_sign_opt", VAR_3), "%s",
      VAR_3->gpg_sign_opt);
 if (VAR_3->signoff)
  FUNC_2(FUNC_1("strategy", VAR_3), "--signoff");

 return 0;
}
