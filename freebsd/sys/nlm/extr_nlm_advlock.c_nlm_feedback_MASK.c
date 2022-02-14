
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nlm_feedback_arg {int dummy; } ;





 struct thread* VAR_0 ;
 int FUNC_0 (struct nlm_feedback_arg*,struct thread*,char*,int ) ;
 int FUNC_1 (struct nlm_feedback_arg*,struct thread*,char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, int VAR_2, void *VAR_3)
{
 struct thread *VAR_4 = VAR_0;
 struct nlm_feedback_arg *VAR_5 = (struct nlm_feedback_arg *) VAR_3;

 switch (VAR_1) {
 case 128:
 case 129:
  FUNC_0(VAR_5, VAR_4, "lockd not responding", 0);
  break;

 case 130:
  FUNC_1(VAR_5, VAR_4, "lockd is alive again");
  break;
 }
}
