
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rq {int sr_flags; int sr_slock; int sr_rp; int sr_rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smb_rq*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct smb_rq *VAR_2)
{
 FUNC_1(&VAR_2->sr_rq);
 FUNC_2(&VAR_2->sr_rp);
 FUNC_3(&VAR_2->sr_slock);
 if (VAR_2->sr_flags & VAR_1)
  FUNC_0(VAR_2, VAR_0);
}
