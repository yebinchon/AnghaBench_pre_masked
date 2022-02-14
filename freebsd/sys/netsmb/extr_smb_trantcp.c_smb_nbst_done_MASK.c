
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {struct nbpcb* nbp_paddr; struct nbpcb* nbp_laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nbpcb*,int ) ;
 int FUNC_1 (struct smb_vc*,struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct smb_vc *VAR_3, struct thread *VAR_4)
{
 struct nbpcb *VAR_5 = VAR_3->vc_tdata;

 if (VAR_5 == ((void*)0))
  return VAR_0;
 FUNC_1(VAR_3, VAR_4);
 if (VAR_5->nbp_laddr)
  FUNC_0(VAR_5->nbp_laddr, VAR_2);
 if (VAR_5->nbp_paddr)
  FUNC_0(VAR_5->nbp_paddr, VAR_2);
 FUNC_0(VAR_5, VAR_1);
 return 0;
}
