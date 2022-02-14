
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct replay_opts {char* strategy; scalar_t__ xopts_nr; scalar_t__ allow_rerere_auto; char* gpg_sign; scalar_t__ reschedule_failed_exec; scalar_t__ signoff; scalar_t__ verbose; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct replay_opts*) ;

int FUNC_14(struct replay_opts *VAR_2, const char *VAR_3,
        struct commit *VAR_4, const char *VAR_5)
{
 const char *VAR_6 = FUNC_0("GIT_QUIET");

 if (VAR_3)
  FUNC_12(FUNC_4(), "%s\n", VAR_3);
 if (VAR_4)
  FUNC_12(FUNC_5(), "%s\n",
      FUNC_1(&VAR_4->object.oid));
 if (VAR_5)
  FUNC_12(FUNC_6(), "%s\n", VAR_5);

 if (VAR_6)
  FUNC_12(FUNC_7(), "%s\n", VAR_6);
 if (VAR_2->verbose)
  FUNC_12(FUNC_11(), "%s", "");
 if (VAR_2->strategy)
  FUNC_12(FUNC_10(), "%s\n", VAR_2->strategy);
 if (VAR_2->xopts_nr > 0)
  FUNC_13(VAR_2);

 if (VAR_2->allow_rerere_auto == VAR_0)
  FUNC_12(FUNC_2(), "--rerere-autoupdate\n");
 else if (VAR_2->allow_rerere_auto == VAR_1)
  FUNC_12(FUNC_2(), "--no-rerere-autoupdate\n");

 if (VAR_2->gpg_sign)
  FUNC_12(FUNC_3(), "-S%s\n", VAR_2->gpg_sign);
 if (VAR_2->signoff)
  FUNC_12(FUNC_9(), "--signoff\n");
 if (VAR_2->reschedule_failed_exec)
  FUNC_12(FUNC_8(), "%s", "");

 return 0;
}
