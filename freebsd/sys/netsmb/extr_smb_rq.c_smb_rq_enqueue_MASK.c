
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb_share {int ss_flags; int ss_vcgenid; } ;
struct smb_rq {TYPE_2__* sr_vc; TYPE_1__* sr_cred; struct smb_share* sr_share; } ;
struct TYPE_4__ {int scr_td; } ;
struct TYPE_6__ {TYPE_1__ iod_scred; } ;
struct TYPE_5__ {TYPE_3__* vc_iod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct smb_share*) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int,char*,int ) ;
 int FUNC_4 (struct smb_rq*) ;
 int FUNC_5 (TYPE_3__*,int,struct smb_share*) ;
 scalar_t__ FUNC_6 (struct smb_share*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct smb_rq *VAR_9)
{
 struct smb_share *VAR_10 = VAR_9->sr_share;
 int VAR_11;

 if (VAR_10 == ((void*)0) || VAR_9->sr_cred == &VAR_9->sr_vc->vc_iod->iod_scred) {
  return FUNC_4(VAR_9);
 }
 for (;;) {
  FUNC_0(VAR_10);
  if (VAR_10->ss_flags & VAR_7) {
   FUNC_3(&VAR_10->ss_vcgenid, FUNC_1(VAR_10),
       VAR_3 | VAR_2, "90trcn", VAR_8);
   if (FUNC_7(VAR_9->sr_cred->scr_td))
    return VAR_0;
   continue;
  }
  if (FUNC_6(VAR_10) || (VAR_10->ss_flags & VAR_6) == 0) {
   FUNC_2(VAR_10);
  } else {
   FUNC_2(VAR_10);
   VAR_11 = FUNC_5(VAR_9->sr_vc->vc_iod,
       VAR_5 | VAR_4, VAR_10);
   if (VAR_11)
    return VAR_11;
  }
  VAR_11 = FUNC_4(VAR_9);
  if (VAR_11 != VAR_1)
   break;
 }
 return VAR_11;
}
