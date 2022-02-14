
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_state {scalar_t__ detached_from; scalar_t__ onto; scalar_t__ branch; scalar_t__ detached_at; scalar_t__ bisect_in_progress; scalar_t__ rebase_interactive_in_progress; scalar_t__ rebase_in_progress; } ;
struct strbuf {int dummy; } ;
typedef int state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct strbuf VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wt_status_state*,int ,int) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct strbuf*,scalar_t__) ;
 char* FUNC_6 (struct strbuf*,int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,struct wt_status_state*,int) ;

char *FUNC_8(void)
{
 struct strbuf VAR_4 = VAR_2;
 struct wt_status_state VAR_5;
 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_7(VAR_3, &VAR_5, 1);






 FUNC_3(&VAR_4, '(');
 if (VAR_5.rebase_in_progress ||
     VAR_5.rebase_interactive_in_progress) {
  if (VAR_5.branch)
   FUNC_4(&VAR_4, FUNC_0("no branch, rebasing %s"),
        VAR_5.branch);
  else
   FUNC_4(&VAR_4, FUNC_0("no branch, rebasing detached HEAD %s"),
        VAR_5.detached_from);
 } else if (VAR_5.bisect_in_progress)
  FUNC_4(&VAR_4, FUNC_0("no branch, bisect started on %s"),
       VAR_5.branch);
 else if (VAR_5.detached_from) {
  if (VAR_5.detached_at)
   FUNC_5(&VAR_4, VAR_0);
  else
   FUNC_5(&VAR_4, VAR_1);
  FUNC_5(&VAR_4, VAR_5.detached_from);
 }
 else
  FUNC_5(&VAR_4, FUNC_0("no branch"));
 FUNC_3(&VAR_4, ')');

 FUNC_1(VAR_5.branch);
 FUNC_1(VAR_5.onto);
 FUNC_1(VAR_5.detached_from);
 return FUNC_6(&VAR_4, ((void*)0));
}
