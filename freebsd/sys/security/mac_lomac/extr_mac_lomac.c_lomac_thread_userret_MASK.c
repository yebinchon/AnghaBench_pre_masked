
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int cr_label; } ;
struct thread {struct proc* td_proc; } ;
struct proc {struct ucred* p_ucred; int p_label; } ;
struct TYPE_2__ {int ml_flags; } ;
struct mac_lomac_proc {int mtx; TYPE_1__ mac_lomac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 struct mac_lomac_proc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ucred*,struct ucred*) ;
 int FUNC_5 (struct ucred*) ;
 struct ucred* FUNC_6 () ;
 int FUNC_7 (struct ucred*) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct proc*,struct ucred*) ;

__attribute__((used)) static void
FUNC_13(struct thread *VAR_3)
{
 struct proc *VAR_4 = VAR_3->td_proc;
 struct mac_lomac_proc *VAR_5 = FUNC_2(VAR_4->p_label);
 struct ucred *VAR_6, *VAR_7;
 int VAR_8;

 FUNC_10(&VAR_5->mtx);
 if (VAR_5->mac_lomac.ml_flags & VAR_1) {
  VAR_8 = 0;
  FUNC_11(&VAR_5->mtx);
  VAR_6 = FUNC_6();





  FUNC_10(&VAR_0);
  FUNC_0(VAR_4);
  FUNC_10(&VAR_5->mtx);



  if ((VAR_5->mac_lomac.ml_flags & VAR_1) == 0) {
   FUNC_5(VAR_6);
   goto out;
  }
  VAR_7 = VAR_4->p_ucred;
  FUNC_4(VAR_6, VAR_7);
  FUNC_7(VAR_6);
  FUNC_8(&VAR_5->mac_lomac, FUNC_3(VAR_6->cr_label));
  FUNC_12(VAR_4, VAR_6);
  FUNC_5(VAR_7);
  VAR_8 = 1;
 out:
  FUNC_11(&VAR_5->mtx);
  FUNC_1(VAR_4);
  if (VAR_8)
   FUNC_9(VAR_2);
  FUNC_11(&VAR_0);
 } else {
  FUNC_11(&VAR_5->mtx);
 }
}
