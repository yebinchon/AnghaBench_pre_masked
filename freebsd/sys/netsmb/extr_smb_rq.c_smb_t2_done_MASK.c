
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_t2rq {int t2_flags; int t2_rdata; int t2_rparam; int t2_tdata; int t2_tparam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smb_t2rq*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct smb_t2rq *VAR_2)
{
 FUNC_1(&VAR_2->t2_tparam);
 FUNC_1(&VAR_2->t2_tdata);
 FUNC_2(&VAR_2->t2_rparam);
 FUNC_2(&VAR_2->t2_rdata);
 if (VAR_2->t2_flags & VAR_1)
  FUNC_0(VAR_2, VAR_0);
}
