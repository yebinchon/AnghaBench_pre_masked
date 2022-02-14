
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
typedef int u_char ;
struct smb_vc {int vc_hflags2; int vc_hflags; } ;
struct mbchain {int dummy; } ;
struct smb_rq {int sr_mid; void* sr_rquid; void* sr_rqtid; int * sr_rqsig; int sr_rp; scalar_t__ sr_sendcnt; struct mbchain sr_rq; struct smb_vc* sr_vc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mbchain*) ;
 int FUNC_1 (struct mbchain*) ;
 int FUNC_2 (struct mbchain*,int ,int,int ) ;
 int FUNC_3 (struct mbchain*,int) ;
 int FUNC_4 (struct mbchain*,int ) ;
 int FUNC_5 (struct mbchain*,int ) ;
 void* FUNC_6 (struct mbchain*,int) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_8(struct smb_rq *VAR_9, u_char VAR_10)
{
 struct smb_vc *VAR_11 = VAR_9->sr_vc;
 struct mbchain *VAR_12 = &VAR_9->sr_rq;
 int VAR_13;
 u_int16_t VAR_14;

 VAR_9->sr_sendcnt = 0;
 FUNC_0(VAR_12);
 FUNC_7(&VAR_9->sr_rp);
 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13)
  return VAR_13;
 FUNC_2(VAR_12, VAR_7, VAR_6, VAR_0);
 FUNC_5(VAR_12, VAR_10);
 FUNC_4(VAR_12, 0);
 FUNC_5(VAR_12, VAR_11->vc_hflags);
 VAR_14 = VAR_11->vc_hflags2;
 if (VAR_10 == VAR_2 || VAR_10 == VAR_3)
  VAR_14 &= ~VAR_5;
 if (VAR_10 == VAR_1)
  VAR_14 &= ~VAR_4;
 FUNC_3(VAR_12, VAR_14);
 if ((VAR_14 & VAR_4) == 0) {
  FUNC_2(VAR_12, VAR_8, 12, VAR_0);
  VAR_9->sr_rqsig = ((void*)0);
 } else {
  FUNC_3(VAR_12, 0 );
  VAR_9->sr_rqsig = (u_int8_t *)FUNC_6(VAR_12, 8);
  FUNC_3(VAR_12, 0);
 }
 VAR_9->sr_rqtid = FUNC_6(VAR_12, sizeof(u_int16_t));
 FUNC_3(VAR_12, 1 );
 VAR_9->sr_rquid = FUNC_6(VAR_12, sizeof(u_int16_t));
 FUNC_3(VAR_12, VAR_9->sr_mid);
 return 0;
}
