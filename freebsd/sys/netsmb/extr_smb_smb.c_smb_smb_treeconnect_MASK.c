
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int co_flags; } ;
struct TYPE_3__ {int sv_sm; } ;
struct smb_vc {int vc_hflags2; char* vc_srvname; int vc_ucs_tolocal; int vc_tolocal; int vc_ucs_toserver; int vc_toserver; TYPE_2__ obj; int vc_genid; int vc_ch; TYPE_1__ vc_sopt; int vc_toupper; int vc_cp_tolocal; int vc_cp_toserver; } ;
struct smb_share {char* ss_name; int ss_flags; int ss_vcgenid; int ss_tid; int ss_type; } ;
struct mbchain {int dummy; } ;
struct smb_rq {int sr_rptid; struct mbchain sr_rq; struct smb_vc* sr_vc; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct smb_share*) ;
 struct smb_vc* FUNC_2 (struct smb_share*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 char* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct mbchain*,char*,int,int ) ;
 int FUNC_7 (struct mbchain*,int) ;
 int FUNC_8 (struct mbchain*,int) ;
 int FUNC_9 (char*,int ,char*) ;
 int FUNC_10 (struct mbchain*,struct smb_vc*,char*,int,int) ;
 int FUNC_11 (struct mbchain*,struct smb_vc*,char*,int) ;
 int FUNC_12 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_13 (struct smb_rq*) ;
 int FUNC_14 (struct smb_rq*) ;
 int FUNC_15 (struct smb_rq*) ;
 int FUNC_16 (struct smb_rq*) ;
 int FUNC_17 (struct smb_rq*) ;
 int FUNC_18 (struct smb_rq*) ;
 int FUNC_19 (struct smb_share*) ;
 char* FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,int ,int) ;

int
FUNC_23(struct smb_share *VAR_12, struct smb_cred *VAR_13)
{
 struct smb_vc *VAR_14;
 struct smb_rq VAR_15, *VAR_16 = &VAR_15;
 struct mbchain *VAR_17;
 char *VAR_18, *VAR_19, *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_24 = 0;

again:

 if (FUNC_2(VAR_12)->vc_hflags2 & VAR_7) {
  VAR_14 = FUNC_2(VAR_12);
  VAR_14->vc_toserver = VAR_14->vc_cp_toserver;
  VAR_14->vc_tolocal = VAR_14->vc_cp_tolocal;
  VAR_14->vc_hflags2 &= ~VAR_7;
 }

 VAR_12->ss_tid = VAR_11;
 VAR_21 = FUNC_12(FUNC_1(VAR_12), VAR_5, VAR_13, &VAR_16);
 if (VAR_21)
  return VAR_21;
 VAR_14 = VAR_16->sr_vc;
 VAR_23 = VAR_6;
 if (VAR_14->vc_sopt.sv_sm & VAR_10) {
  VAR_22 = 1;
  VAR_18 = "";
  VAR_19 = ((void*)0);
  VAR_20 = ((void*)0);
 } else {
  VAR_19 = FUNC_5(VAR_8 + 1, VAR_1, VAR_2);
  VAR_20 = FUNC_5(24, VAR_1, VAR_2);





  if (VAR_24++) {
   FUNC_4(VAR_14->vc_toupper, VAR_19,
          FUNC_19(VAR_12) );

  } else {
   FUNC_22(VAR_19, FUNC_19(VAR_12),
    VAR_8);
   VAR_19[VAR_8] = '\0';
  }
  if (VAR_14->vc_sopt.sv_sm & VAR_9) {
   VAR_22 = 24;
   FUNC_9(VAR_19, VAR_14->vc_ch, VAR_20);
   VAR_18 = VAR_20;
  } else {
   VAR_22 = FUNC_21(VAR_19) + 1;
   VAR_18 = VAR_19;
  }
 }
 VAR_17 = &VAR_16->sr_rq;
 FUNC_18(VAR_16);
 FUNC_8(VAR_17, 0xff);
 FUNC_8(VAR_17, 0);
 FUNC_7(VAR_17, 0);
 FUNC_7(VAR_17, 0);
 FUNC_7(VAR_17, VAR_22);
 FUNC_17(VAR_16);
 FUNC_14(VAR_16);
 FUNC_6(VAR_17, VAR_18, VAR_22, VAR_0);
 FUNC_10(VAR_17, VAR_14, "\\\\", 2, VAR_23);
 VAR_18 = VAR_14->vc_srvname;
 FUNC_10(VAR_17, VAR_14, VAR_18, FUNC_21(VAR_18), VAR_23);
 FUNC_10(VAR_17, VAR_14, "\\", 1, VAR_23);
 VAR_18 = VAR_12->ss_name;
 FUNC_11(VAR_17, VAR_14, VAR_18, VAR_23);
 VAR_18 = FUNC_20(VAR_12->ss_type);
 FUNC_11(VAR_17, VAR_14, VAR_18, VAR_23);
 FUNC_13(VAR_16);
 VAR_21 = FUNC_16(VAR_16);
 FUNC_0("%d\n", VAR_21);
 if (VAR_21)
  goto bad;
 VAR_12->ss_tid = VAR_16->sr_rptid;
 VAR_12->ss_vcgenid = VAR_14->vc_genid;
 VAR_12->ss_flags |= VAR_3;




 if (VAR_14->obj.co_flags & VAR_4) {
  VAR_14->vc_toserver = VAR_14->vc_ucs_toserver;
  VAR_14->vc_tolocal = VAR_14->vc_ucs_tolocal;
  VAR_14->vc_hflags2 |= VAR_7;
 }
bad:
 if (VAR_20)
  FUNC_3(VAR_20, VAR_1);
 if (VAR_19)
  FUNC_3(VAR_19, VAR_1);
 FUNC_15(VAR_16);
 if (VAR_21 && VAR_24 == 1)
  goto again;
 return VAR_21;
}
