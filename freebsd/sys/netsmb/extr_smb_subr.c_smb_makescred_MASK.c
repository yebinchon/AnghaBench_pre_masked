
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct smb_cred {struct ucred* scr_cred; struct thread* scr_td; } ;



void
FUNC_0(struct smb_cred *VAR_0, struct thread *VAR_1, struct ucred *VAR_2)
{
 if (VAR_1) {
  VAR_0->scr_td = VAR_1;
  VAR_0->scr_cred = VAR_2 ? VAR_2 : VAR_1->td_ucred;
 } else {
  VAR_0->scr_td = ((void*)0);
  VAR_0->scr_cred = VAR_2 ? VAR_2 : ((void*)0);
 }
}
