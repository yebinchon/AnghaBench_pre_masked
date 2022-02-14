
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_sec; } ;
struct smbiod {int iod_sleeptimo; int iod_evlock; int iod_rqlock; scalar_t__ iod_id; int iod_p; int iod_evlist; int iod_rqlist; int iod_lastrqsent; TYPE_1__ iod_pingtimo; struct smb_vc* iod_vc; int iod_state; } ;
struct smb_vc {struct smbiod* vc_iod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smbiod*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,struct smbiod*,int *,int ,int ,char*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 struct smbiod* FUNC_8 (int,int ,int ) ;

int
FUNC_9(struct smb_vc *VAR_9)
{
 struct smbiod *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_0, VAR_1);
 VAR_10->iod_id = VAR_7++;
 VAR_10->iod_state = VAR_5;
 VAR_10->iod_vc = VAR_9;
 VAR_10->iod_sleeptimo = VAR_6 * VAR_4;
 VAR_10->iod_pingtimo.tv_sec = VAR_3;
 FUNC_4(&VAR_10->iod_lastrqsent);
 VAR_9->vc_iod = VAR_10;
 FUNC_7(&VAR_10->iod_rqlock, "90rql");
 FUNC_2(&VAR_10->iod_rqlist);
 FUNC_7(&VAR_10->iod_evlock, "90evl");
 FUNC_1(&VAR_10->iod_evlist);
 VAR_11 = FUNC_5(VAR_8, VAR_10, &VAR_10->iod_p,
     VAR_2, 0, "smbiod%d", VAR_10->iod_id);
 if (VAR_11) {
  FUNC_0("can't start smbiod: %d", VAR_11);
  VAR_9->vc_iod = ((void*)0);
  FUNC_6(&VAR_10->iod_rqlock);
  FUNC_6(&VAR_10->iod_evlock);
  FUNC_3(VAR_10, VAR_0);
  return VAR_11;
 }
 return 0;
}
