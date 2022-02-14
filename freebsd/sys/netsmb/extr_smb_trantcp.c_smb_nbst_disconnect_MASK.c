
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {scalar_t__ nbp_state; struct socket* nbp_tso; int nbp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*,int) ;

__attribute__((used)) static int
FUNC_2(struct smb_vc *VAR_4, struct thread *VAR_5)
{
 struct nbpcb *VAR_6 = VAR_4->vc_tdata;
 struct socket *VAR_7;

 if (VAR_6 == ((void*)0) || VAR_6->nbp_tso == ((void*)0))
  return VAR_0;
 if ((VAR_7 = VAR_6->nbp_tso) != ((void*)0)) {
  VAR_6->nbp_flags &= ~VAR_1;
  VAR_6->nbp_tso = (struct socket *)((void*)0);
  FUNC_1(VAR_7, 2);
  FUNC_0(VAR_7);
 }
 if (VAR_6->nbp_state != VAR_3) {
  VAR_6->nbp_state = VAR_2;
 }
 return 0;
}
