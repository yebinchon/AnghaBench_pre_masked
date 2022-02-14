
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct thread {int dummy; } ;
struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {int nbp_flags; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nbpcb*,struct mbuf**,int*,int *,struct thread*) ;

__attribute__((used)) static int
FUNC_1(struct smb_vc *VAR_1, struct mbuf **VAR_2, struct thread *VAR_3)
{
 struct nbpcb *VAR_4 = VAR_1->vc_tdata;
 u_int8_t VAR_5;
 int VAR_6, VAR_7;

 VAR_4->nbp_flags |= VAR_0;
 VAR_6 = FUNC_0(VAR_4, VAR_2, &VAR_7, &VAR_5, VAR_3);
 VAR_4->nbp_flags &= ~VAR_0;
 return VAR_6;
}
