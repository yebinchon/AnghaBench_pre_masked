
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct smbiod {int iod_state; scalar_t__ iod_muxcnt; int iod_lastrqsent; struct smb_vc* iod_vc; struct thread* iod_td; } ;
struct smb_vc {scalar_t__ vc_maxmux; int vc_hflags2; int vc_smbuid; } ;
struct smb_share {int ss_tid; } ;
struct TYPE_2__ {int mb_top; } ;
struct smb_rq {scalar_t__ sr_sendcnt; int sr_lerror; int sr_state; int sr_flags; int sr_timesent; TYPE_1__ sr_rq; int sr_mid; int sr_rquid; int sr_rqtid; struct smb_share* sr_share; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct smb_vc*,int) ;
 int FUNC_3 (struct smb_vc*,struct mbuf*,struct thread*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 struct mbuf* FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct smb_rq*,int) ;
 scalar_t__ FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smb_rq*) ;

__attribute__((used)) static int
FUNC_12(struct smbiod *VAR_9, struct smb_rq *VAR_10)
{
 struct thread *VAR_11 = VAR_9->iod_td;
 struct smb_vc *VAR_12 = VAR_9->iod_vc;
 struct smb_share *VAR_13 = VAR_10->sr_share;
 struct mbuf *VAR_14;
 int VAR_15;

 FUNC_0("iod_state = %d\n", VAR_9->iod_state);
 switch (VAR_9->iod_state) {
     case 129:
  FUNC_9(VAR_10, VAR_1);
  return 0;
     case 130:
  VAR_9->iod_state = 128;
  return 0;
     case 128:
  return 0;
     default:
  break;
 }
 if (VAR_10->sr_sendcnt == 0) {




  FUNC_5(VAR_10->sr_rqtid, VAR_13 ? VAR_13->ss_tid : VAR_8);
  FUNC_5(VAR_10->sr_rquid, VAR_12 ? VAR_12->vc_smbuid : 0);
  FUNC_8(&VAR_10->sr_rq);
  if (VAR_12->vc_hflags2 & VAR_7)
   FUNC_11(VAR_10);
 }
 if (VAR_10->sr_sendcnt++ > 5) {
  VAR_10->sr_flags |= VAR_5;
  FUNC_9(VAR_10, VAR_10->sr_lerror);




  return VAR_1;
 }
 FUNC_1("M:%04x, P:%04x, U:%04x, T:%04x\n", VAR_10->sr_mid, 0, 0, 0);
 FUNC_7(VAR_10->sr_rq.mb_top);
 VAR_14 = FUNC_6(VAR_10->sr_rq.mb_top, 0, VAR_2, VAR_3);
 VAR_15 = VAR_10->sr_lerror = FUNC_3(VAR_12, VAR_14, VAR_11);
 if (VAR_15 == 0) {
  FUNC_4(&VAR_10->sr_timesent);
  VAR_9->iod_lastrqsent = VAR_10->sr_timesent;
  VAR_10->sr_flags |= VAR_6;
  VAR_10->sr_state = VAR_4;
  return 0;
 }



 if (FUNC_2(VAR_12, VAR_15)) {



  return VAR_1;
 }
 if (FUNC_10(VAR_10))
  FUNC_9(VAR_10, VAR_0);
 return 0;
}
