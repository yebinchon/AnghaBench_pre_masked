
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {scalar_t__ nbp_state; int nbp_tso; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,int ,scalar_t__) ;
 int FUNC_4 (int ,struct mbuf*,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_5(struct smb_vc *VAR_4, struct mbuf *VAR_5, struct thread *VAR_6)
{
 struct nbpcb *VAR_7 = VAR_4->vc_tdata;
 int VAR_8;

 if (VAR_7->nbp_state != VAR_2) {
  VAR_8 = VAR_0;
  goto abort;
 }
 FUNC_0(VAR_5, 4, VAR_1);
 FUNC_3(VAR_5, VAR_3, FUNC_1(VAR_5) - 4);
 VAR_8 = FUNC_4(VAR_7->nbp_tso, VAR_5, 0, VAR_6);
 return VAR_8;
abort:
 if (VAR_5)
  FUNC_2(VAR_5);
 return VAR_8;
}
