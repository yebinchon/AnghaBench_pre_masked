
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {int * nbp_tso; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct smb_vc *VAR_0)
{
 struct nbpcb *VAR_1 = VAR_0->vc_tdata;

 if (VAR_1 == ((void*)0) || VAR_1->nbp_tso == ((void*)0))
  return;
 FUNC_0(VAR_1->nbp_tso);
 FUNC_1(VAR_1->nbp_tso);
}
