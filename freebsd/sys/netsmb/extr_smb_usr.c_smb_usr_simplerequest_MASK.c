
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct smbioc_rq {int ioc_cmd; int ioc_twc; int ioc_tbc; int ioc_rwc; int ioc_rpbufsz; int ioc_rbc; int ioc_error; int ioc_serror; int ioc_errclass; scalar_t__ ioc_rpbuf; int ioc_tbytes; int ioc_twords; } ;
struct smb_share {int dummy; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;
struct smb_rq {int sr_error; int sr_serror; int sr_errclass; struct mdchain sr_rp; struct mbchain sr_rq; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct smb_rq*,int ) ;
 struct smb_rq* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct mbchain*,int ,int,int ) ;
 int FUNC_4 (struct mdchain*,scalar_t__,int,int ) ;
 int FUNC_5 (struct mdchain*,int*) ;
 int FUNC_6 (struct mdchain*,int*) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*,int ,int,struct smb_cred*) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smb_rq*) ;

int
FUNC_14(struct smb_share *VAR_5, struct smbioc_rq *VAR_6,
 struct smb_cred *VAR_7)
{
 struct smb_rq *VAR_8;
 struct mbchain *VAR_9;
 struct mdchain *VAR_10;
 u_int8_t VAR_11;
 u_int16_t VAR_12;
 int VAR_13;

 switch (VAR_6->ioc_cmd) {
     case 132:
     case 131:
     case 136:
     case 130:
     case 128:
     case 134:
     case 133:
     case 135:
     case 129:
  return VAR_1;
 }
 VAR_8 = FUNC_2(sizeof(struct smb_rq), VAR_3, VAR_4);
 VAR_13 = FUNC_10(VAR_8, FUNC_0(VAR_5), VAR_6->ioc_cmd, VAR_7);
 if (VAR_13) {
  FUNC_1(VAR_8, VAR_3);
  return VAR_13;
 }
 VAR_9 = &VAR_8->sr_rq;
 FUNC_13(VAR_8);
 VAR_13 = FUNC_3(VAR_9, VAR_6->ioc_twords, VAR_6->ioc_twc * 2, VAR_2);
 if (VAR_13)
  goto bad;
 FUNC_12(VAR_8);
 FUNC_8(VAR_8);
 VAR_13 = FUNC_3(VAR_9, VAR_6->ioc_tbytes, VAR_6->ioc_tbc, VAR_2);
 if (VAR_13)
  goto bad;
 FUNC_7(VAR_8);
 VAR_13 = FUNC_11(VAR_8);
 if (VAR_13)
  goto bad;
 VAR_10 = &VAR_8->sr_rp;
 FUNC_6(VAR_10, &VAR_11);
 VAR_6->ioc_rwc = VAR_11;
 VAR_11 *= 2;
 if (VAR_11 > VAR_6->ioc_rpbufsz) {
  VAR_13 = VAR_0;
  goto bad;
 }
 VAR_13 = FUNC_4(VAR_10, VAR_6->ioc_rpbuf, VAR_11, VAR_2);
 if (VAR_13)
  goto bad;
 FUNC_5(VAR_10, &VAR_12);
 if ((VAR_11 + VAR_12) > VAR_6->ioc_rpbufsz) {
  VAR_13 = VAR_0;
  goto bad;
 }
 VAR_6->ioc_rbc = VAR_12;
 VAR_13 = FUNC_4(VAR_10, VAR_6->ioc_rpbuf + VAR_11, VAR_12, VAR_2);
bad:
 VAR_6->ioc_errclass = VAR_8->sr_errclass;
 VAR_6->ioc_serror = VAR_8->sr_serror;
 VAR_6->ioc_error = VAR_8->sr_error;
 FUNC_9(VAR_8);
 FUNC_1(VAR_8, VAR_3);
 return VAR_13;

}
