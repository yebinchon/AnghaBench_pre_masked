
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbiod {int iod_rqlist; int iod_flags; } ;
struct smb_rq {int sr_flags; scalar_t__ sr_rpgen; scalar_t__ sr_rplast; int sr_lerror; int sr_state; TYPE_1__* sr_vc; } ;
struct TYPE_2__ {struct smbiod* vc_iod; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smb_rq*) ;
 int FUNC_2 (struct smb_rq*) ;
 int FUNC_3 (struct smb_rq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct smbiod*) ;
 int FUNC_5 (struct smbiod*) ;
 int FUNC_6 (int *,struct smb_rq*,int ) ;
 int FUNC_7 (int *,struct smb_rq*,int ) ;
 int VAR_3 ;
 int FUNC_8 (int *,int ,int ,char*,int ) ;
 int FUNC_9 (struct smbiod*) ;
 int FUNC_10 (struct smb_rq*) ;
 int FUNC_11 (struct smbiod*) ;
 int VAR_4 ;
 int FUNC_12 (int *,int ,char*,int ) ;

int
FUNC_13(struct smb_rq *VAR_5)
{
 struct smbiod *VAR_6 = VAR_5->sr_vc->vc_iod;
 int VAR_7;

 FUNC_0("\n");
 if (VAR_5->sr_flags & VAR_1) {
  for (;;) {
   FUNC_11(VAR_6);
   FUNC_9(VAR_6);
   if (VAR_5->sr_rpgen != VAR_5->sr_rplast)
    break;
   FUNC_12(&VAR_6->iod_flags, VAR_0, "90irq", VAR_3);
  }
  FUNC_10(VAR_5);
  return VAR_5->sr_lerror;

 }
 FUNC_1(VAR_5);
 if (VAR_5->sr_rpgen == VAR_5->sr_rplast)
  FUNC_8(&VAR_5->sr_state, FUNC_2(VAR_5), VAR_0, "90wrq", 0);
 VAR_5->sr_rplast++;
 FUNC_3(VAR_5);
 VAR_7 = VAR_5->sr_lerror;
 if (VAR_5->sr_flags & VAR_2) {




  FUNC_4(VAR_6);
  FUNC_7(&VAR_6->iod_rqlist, VAR_5, VAR_4);
  FUNC_6(&VAR_6->iod_rqlist, VAR_5, VAR_4);
  FUNC_5(VAR_6);
 } else
  FUNC_10(VAR_5);
 return VAR_7;
}
