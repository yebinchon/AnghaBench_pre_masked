
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {int allow_ff; int allow_empty; int verbose; int strategy; int gpg_sign; int reschedule_failed_exec; int allow_empty_message; scalar_t__ allow_rerere_auto; int signoff; int action; } ;
struct rebase_options {int flags; int strategy_opts; int strategy; int gpg_sign_opt; int reschedule_failed_exec; int allow_empty_message; scalar_t__ allow_rerere_autoupdate; int signoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct replay_opts VAR_3 ;
 int FUNC_0 (struct replay_opts*,int ) ;
 int FUNC_1 (struct replay_opts*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct replay_opts FUNC_3(const struct rebase_options *VAR_4)
{
 struct replay_opts VAR_5 = VAR_3;

 VAR_5.action = VAR_2;
 FUNC_1(&VAR_5);

 VAR_5.signoff = VAR_4->signoff;
 VAR_5.allow_ff = !(VAR_4->flags & VAR_0);
 if (VAR_4->allow_rerere_autoupdate)
  VAR_5.allow_rerere_auto = VAR_4->allow_rerere_autoupdate;
 VAR_5.allow_empty = 1;
 VAR_5.allow_empty_message = VAR_4->allow_empty_message;
 VAR_5.verbose = VAR_4->flags & VAR_1;
 VAR_5.reschedule_failed_exec = VAR_4->reschedule_failed_exec;
 VAR_5.gpg_sign = FUNC_2(VAR_4->gpg_sign_opt);
 VAR_5.strategy = VAR_4->strategy;
 if (VAR_4->strategy_opts)
  FUNC_0(&VAR_5, VAR_4->strategy_opts);

 return VAR_5;
}
