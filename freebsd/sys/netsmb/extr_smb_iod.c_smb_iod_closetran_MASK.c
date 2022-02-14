
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct smbiod {struct thread* iod_td; struct smb_vc* iod_vc; } ;
struct smb_vc {int * vc_tdata; } ;


 int FUNC_0 (struct smb_vc*,struct thread*) ;
 int FUNC_1 (struct smb_vc*,struct thread*) ;

__attribute__((used)) static void
FUNC_2(struct smbiod *VAR_0)
{
 struct smb_vc *VAR_1 = VAR_0->iod_vc;
 struct thread *VAR_2 = VAR_0->iod_td;

 if (VAR_1->vc_tdata == ((void*)0))
  return;
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2);
 VAR_1->vc_tdata = ((void*)0);
}
