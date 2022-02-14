
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbiod {scalar_t__ iod_muxwant; int iod_muxcnt; int iod_rqlist; } ;
struct smb_vc {struct smbiod* vc_iod; } ;
struct smb_rq {int sr_flags; struct smb_vc* sr_vc; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct smbiod*) ;
 int FUNC_2 (struct smbiod*) ;
 int FUNC_3 (struct smbiod*) ;
 int FUNC_4 (int *,struct smb_rq*,int ) ;
 int FUNC_5 (struct smb_rq*,int ,int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__*) ;

int
FUNC_7(struct smb_rq *VAR_5)
{
 struct smb_vc *VAR_6 = VAR_5->sr_vc;
 struct smbiod *VAR_7 = VAR_6->vc_iod;

 FUNC_0("\n");
 if (VAR_5->sr_flags & VAR_1) {
  FUNC_1(VAR_7);
  FUNC_4(&VAR_7->iod_rqlist, VAR_5, VAR_4);
  FUNC_3(VAR_7);
  return 0;
 }
 FUNC_1(VAR_7);
 while (VAR_5->sr_flags & VAR_2) {
  VAR_5->sr_flags |= VAR_3;
  FUNC_5(VAR_5, FUNC_2(VAR_7), VAR_0, "90xrm", 0);
 }
 FUNC_4(&VAR_7->iod_rqlist, VAR_5, VAR_4);
 VAR_7->iod_muxcnt--;
 if (VAR_7->iod_muxwant) {
  VAR_7->iod_muxwant--;
  FUNC_6(&VAR_7->iod_muxwant);
 }
 FUNC_3(VAR_7);
 return 0;
}
