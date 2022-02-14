
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smbiod {scalar_t__ iod_p; int iod_state; scalar_t__ iod_muxcnt; int iod_rqlist; int iod_muxwant; int iod_flags; } ;
struct smb_vc {scalar_t__ vc_maxmux; struct smbiod* vc_iod; } ;
struct smb_rq {scalar_t__ sr_state; int sr_lerror; int sr_flags; TYPE_2__* sr_cred; struct smb_vc* sr_vc; } ;
struct TYPE_4__ {TYPE_1__* scr_td; } ;
struct TYPE_3__ {scalar_t__ td_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct smbiod*) ;
 int FUNC_3 (struct smbiod*) ;
 int FUNC_4 (struct smbiod*) ;
 int FUNC_5 (int *,struct smb_rq*,int ) ;
 int FUNC_6 (int *,struct smb_rq*,int ) ;
 int VAR_7 ;
 int FUNC_7 (int *,int ,int ,char*,int ) ;
 int FUNC_8 (struct smbiod*) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smbiod*,int,int *) ;
 scalar_t__ FUNC_11 (struct smbiod*,struct smb_rq*) ;
 int FUNC_12 (struct smbiod*) ;
 int VAR_8 ;
 int FUNC_13 (int *,int ,char*,int ) ;

int
FUNC_14(struct smb_rq *VAR_9)
{
 struct smb_vc *VAR_10 = VAR_9->sr_vc;
 struct smbiod *VAR_11 = VAR_10->vc_iod;
 int VAR_12;

 FUNC_1("\n");
 if (VAR_9->sr_cred->scr_td != ((void*)0) &&
     VAR_9->sr_cred->scr_td->td_proc == VAR_11->iod_p) {
  VAR_9->sr_flags |= VAR_6;
  FUNC_2(VAR_11);
  FUNC_5(&VAR_11->iod_rqlist, VAR_9, VAR_8);
  FUNC_4(VAR_11);
  for (;;) {
   if (FUNC_11(VAR_11, VAR_9) != 0) {
    FUNC_8(VAR_11);
    break;
   }



   if (VAR_9->sr_state != VAR_5)
    break;
   FUNC_13(&VAR_11->iod_flags, VAR_2, "90sndw", VAR_7);
  }
  if (VAR_9->sr_lerror)
   FUNC_9(VAR_9);
  return VAR_9->sr_lerror;
 }

 switch (VAR_11->iod_state) {
     case 128:
  return VAR_0;
     case 129:
  VAR_12 = FUNC_10(VAR_10->vc_iod, VAR_3 | VAR_4, ((void*)0));
  if (VAR_12)
   return VAR_12;
  return VAR_1;
     default:
  break;
 }

 FUNC_2(VAR_11);
 for (;;) {
  if (VAR_10->vc_maxmux == 0) {
   FUNC_0("maxmux == 0\n");
   break;
  }
  if (VAR_11->iod_muxcnt < VAR_10->vc_maxmux)
   break;
  VAR_11->iod_muxwant++;
  FUNC_7(&VAR_11->iod_muxwant, FUNC_3(VAR_11),
      VAR_2, "90mux", 0);
 }
 VAR_11->iod_muxcnt++;
 FUNC_6(&VAR_11->iod_rqlist, VAR_9, VAR_8);
 FUNC_4(VAR_11);
 FUNC_12(VAR_11);
 return 0;
}
