
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct apply_state {char const* prefix; int apply; char line_termination; int p_value; int squelch_whitespace_errors; int linenr; int root; int symlink_changes; int limit_by_name; int fn_table; int ws_ignore_action; int ws_error_action; int p_context; struct repository* repo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct apply_state*,int ,int) ;
 scalar_t__ FUNC_2 (struct apply_state*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct apply_state*,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_4 ;

int FUNC_6(struct apply_state *VAR_5,
       struct repository *VAR_6,
       const char *VAR_7)
{
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->prefix = VAR_7;
 VAR_5->repo = VAR_6;
 VAR_5->apply = 1;
 VAR_5->line_termination = '\n';
 VAR_5->p_value = 1;
 VAR_5->p_context = VAR_0;
 VAR_5->squelch_whitespace_errors = 5;
 VAR_5->ws_error_action = VAR_4;
 VAR_5->ws_ignore_action = VAR_3;
 VAR_5->linenr = 1;
 FUNC_5(&VAR_5->fn_table, 0);
 FUNC_5(&VAR_5->limit_by_name, 0);
 FUNC_5(&VAR_5->symlink_changes, 0);
 FUNC_4(&VAR_5->root, 0);

 FUNC_0();
 if (VAR_2 && FUNC_3(VAR_5, VAR_2))
  return -1;
 if (VAR_1 && FUNC_2(VAR_5, VAR_1))
  return -1;
 return 0;
}
