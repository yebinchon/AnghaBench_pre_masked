
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {int vc_timo; } ;
struct smb_rq {int sr_flags; int sr_state; int sr_timo; struct smb_vc* sr_vc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smb_rq*) ;
 int FUNC_1 (struct smb_rq*) ;

int
FUNC_2(struct smb_rq *VAR_5)
{
 struct smb_vc *VAR_6 = VAR_5->sr_vc;
 int VAR_7 = VAR_0, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_5->sr_flags &= ~VAR_3;
  VAR_5->sr_timo = VAR_6->vc_timo;
  VAR_5->sr_state = VAR_1;
  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 == 0)
   break;
  if ((VAR_5->sr_flags & (VAR_3 | VAR_2)) != VAR_3)
   break;
 }
 return VAR_7;
}
