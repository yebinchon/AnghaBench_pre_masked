
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct proc {struct ucred* p_ucred; } ;
struct nlm_file_svid {scalar_t__ ns_svid; struct ucred* ns_ucred; } ;
struct flock {scalar_t__ l_pid; } ;


 struct nlm_file_svid* FUNC_0 (int *) ;
 struct nlm_file_svid* FUNC_1 (struct nlm_file_svid*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct proc*) ;
 struct ucred* FUNC_3 (struct ucred*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct proc* FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct thread *VAR_5, struct flock *VAR_6)
{
 int VAR_7;
 struct nlm_file_svid *VAR_8;
 struct proc *VAR_9;
 struct ucred *VAR_10;

 VAR_10 = ((void*)0);
 if (VAR_6->l_pid > VAR_1) {





  FUNC_4(&VAR_3);
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   for (VAR_8 = FUNC_0(&VAR_2[VAR_7]); VAR_8;
        VAR_8 = FUNC_1(VAR_8, VAR_4)) {
    if (VAR_8->ns_svid == VAR_6->l_pid) {
     VAR_10 = FUNC_3(VAR_8->ns_ucred);
     break;
    }
   }
  }
  FUNC_5(&VAR_3);
 } else {




  VAR_9 = FUNC_6(VAR_6->l_pid);
  if (VAR_9) {
   VAR_10 = FUNC_3(VAR_9->p_ucred);
   FUNC_2(VAR_9);
  }
 }





 if (!VAR_10) {
  VAR_10 = FUNC_3(VAR_5->td_ucred);
 }

 VAR_5->td_ucred = VAR_10;
}
