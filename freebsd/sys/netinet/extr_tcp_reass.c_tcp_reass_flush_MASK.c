
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tseg_qent {int tqe_m; } ;
struct tcpcb {scalar_t__ t_segqlen; scalar_t__ t_segqmbuflen; int t_segq; int t_inpcb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 struct tseg_qent* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct tseg_qent*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,struct tseg_qent*) ;

void
FUNC_6(struct tcpcb *VAR_2)
{
 struct tseg_qent *VAR_3;

 FUNC_0(VAR_2->t_inpcb);

 while ((VAR_3 = FUNC_2(&VAR_2->t_segq)) != ((void*)0)) {
  FUNC_3(&VAR_2->t_segq, VAR_3, VAR_1);
  FUNC_4(VAR_3->tqe_m);
  FUNC_5(VAR_0, VAR_3);
  VAR_2->t_segqlen--;
 }
 VAR_2->t_segqmbuflen = 0;
 FUNC_1((VAR_2->t_segqlen == 0),
     ("TCP reass queue %p segment count is %d instead of 0 after flush.",
     VAR_2, VAR_2->t_segqlen));
}
