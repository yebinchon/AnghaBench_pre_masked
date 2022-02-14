
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_vc {int vc_txmax; int vc_iod; } ;
struct mdchain {struct mbuf* md_top; } ;
struct TYPE_4__ {struct mbuf* mb_top; } ;
struct TYPE_3__ {struct mbuf* mb_top; } ;
struct smb_t2rq {int t2_maxpcount; int t2_maxdcount; int t2_maxscount; int t2_setupcount; int* t2_setupdata; int t2_fid; struct mdchain t2_rdata; struct mdchain t2_rparam; int t2_flags; int * t_name; struct smb_rq* t2_rq; int t2_source; TYPE_2__ t2_tdata; TYPE_1__ t2_tparam; struct smb_cred* t2_cred; struct smb_vc* t2_vc; } ;
struct mbchain {int dummy; } ;
struct smb_rq {int sr_flags; int sr_state; struct mbchain sr_rq; struct smb_t2rq* sr_t2; } ;
struct smb_cred {int dummy; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbchain*) ;
 int FUNC_4 (struct mbchain*,struct mbuf*) ;
 int FUNC_5 (struct mbchain*,int *,int,int ) ;
 int FUNC_6 (struct mbchain*,int) ;
 int FUNC_7 (struct mbchain*,int ) ;
 int FUNC_8 (struct mbchain*,int) ;
 int FUNC_9 (struct mdchain*) ;
 int FUNC_10 (struct mdchain*,int,struct mbuf**) ;
 int FUNC_11 (struct mdchain*,struct mbuf*) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (struct smb_rq*) ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_16 (struct smb_rq*) ;
 int FUNC_17 (struct smb_rq*) ;
 int FUNC_18 (struct smb_rq*) ;
 int FUNC_19 (struct smb_rq*) ;
 int FUNC_20 (struct smb_rq*,int ) ;
 int FUNC_21 (struct smb_rq*) ;
 int FUNC_22 (struct smb_rq*) ;
 int FUNC_23 (struct smb_t2rq*) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int
FUNC_25(struct smb_t2rq *VAR_14)
{
 struct smb_vc *VAR_15 = VAR_14->t2_vc;
 struct smb_cred *VAR_16 = VAR_14->t2_cred;
 struct mbchain *VAR_17;
 struct mdchain *VAR_18, VAR_19, VAR_20;
 struct mbuf *VAR_21;
 struct smb_rq *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;

 VAR_21 = VAR_14->t2_tparam.mb_top;
 if (VAR_21) {
  FUNC_11(&VAR_19, VAR_21);
  VAR_23 = FUNC_2(VAR_21);
  if (VAR_23 > 0xffff)
   return VAR_0;
 } else
  VAR_23 = 0;
 VAR_21 = VAR_14->t2_tdata.mb_top;
 if (VAR_21) {
  FUNC_11(&VAR_20, VAR_21);
  VAR_25 = FUNC_2(VAR_21);
  if (VAR_25 > 0xffff)
   return VAR_0;
 } else
  VAR_25 = 0;
 VAR_26 = VAR_25;
 VAR_24 = VAR_23;
 VAR_28 = VAR_15->vc_txmax;
 VAR_30 = FUNC_15(VAR_14->t2_source, VAR_14->t_name ?
     VAR_10 : VAR_11, VAR_16, &VAR_22);
 if (VAR_30)
  return VAR_30;
 VAR_22->sr_flags |= VAR_5;
 VAR_14->t2_rq = VAR_22;
 VAR_22->sr_t2 = VAR_14;
 VAR_17 = &VAR_22->sr_rq;
 FUNC_22(VAR_22);
 FUNC_6(VAR_17, VAR_23);
 FUNC_6(VAR_17, VAR_25);
 FUNC_6(VAR_17, VAR_14->t2_maxpcount);
 FUNC_6(VAR_17, VAR_14->t2_maxdcount);
 FUNC_8(VAR_17, VAR_14->t2_maxscount);
 FUNC_8(VAR_17, 0);
 FUNC_6(VAR_17, 0);
 FUNC_7(VAR_17, 0);
 FUNC_6(VAR_17, 0);
 VAR_27 = FUNC_3(VAR_17);





 VAR_35 = VAR_14->t_name ? FUNC_24(VAR_14->t_name) : 0;
 VAR_27 = FUNC_0(VAR_27 + 5 * 2 + VAR_14->t2_setupcount * 2 + 2 + VAR_35 + 1);
 if (VAR_27 + VAR_24 > VAR_28) {
  VAR_34 = FUNC_12(VAR_24, VAR_28 - VAR_27);
  VAR_32 = VAR_27;
  VAR_33 = 0;
  VAR_31 = 0;
 } else {
  VAR_34 = VAR_24;
  VAR_32 = VAR_34 ? VAR_27 : 0;
  VAR_27 = FUNC_0(VAR_27 + VAR_34);
  VAR_33 = FUNC_12(VAR_26, VAR_28 - VAR_27);
  VAR_31 = VAR_33 ? VAR_27 : 0;
 }
 VAR_24 -= VAR_34;
 VAR_26 -= VAR_33;
 FUNC_6(VAR_17, VAR_34);
 FUNC_6(VAR_17, VAR_32);
 FUNC_6(VAR_17, VAR_33);
 FUNC_6(VAR_17, VAR_31);
 FUNC_8(VAR_17, VAR_14->t2_setupcount);
 FUNC_8(VAR_17, 0);
 for (VAR_29 = 0; VAR_29 < VAR_14->t2_setupcount; VAR_29++)
  FUNC_6(VAR_17, VAR_14->t2_setupdata[VAR_29]);
 FUNC_21(VAR_22);
 FUNC_17(VAR_22);

 if (VAR_14->t_name)
  FUNC_5(VAR_17, VAR_14->t_name, VAR_35, VAR_1);
 FUNC_8(VAR_17, 0);
 VAR_27 = FUNC_3(VAR_17);
 if (VAR_34) {
  FUNC_5(VAR_17, ((void*)0), FUNC_0(VAR_27) - VAR_27, VAR_2);
  VAR_30 = FUNC_10(&VAR_19, VAR_34, &VAR_21);
  FUNC_1("%d:%d:%d\n", VAR_30, VAR_34, VAR_28);
  if (VAR_30)
   goto freerq;
  FUNC_4(VAR_17, VAR_21);
 }
 VAR_27 = FUNC_3(VAR_17);
 if (VAR_33) {
  FUNC_5(VAR_17, ((void*)0), FUNC_0(VAR_27) - VAR_27, VAR_2);
  VAR_30 = FUNC_10(&VAR_20, VAR_33, &VAR_21);
  if (VAR_30)
   goto freerq;
  FUNC_4(VAR_17, VAR_21);
 }
 FUNC_16(VAR_22);
 VAR_30 = FUNC_19(VAR_22);
 if (VAR_30)
  goto freerq;
 if (VAR_24 == 0 && VAR_26 == 0)
  VAR_14->t2_flags |= VAR_7;
 VAR_30 = FUNC_23(VAR_14);
 if (VAR_30)
  goto bad;
 while (VAR_24 || VAR_26) {
  VAR_14->t2_flags |= VAR_9;
  VAR_30 = FUNC_20(VAR_22, VAR_14->t_name ?
      VAR_13 : VAR_12);
  if (VAR_30)
   goto bad;
  VAR_17 = &VAR_22->sr_rq;
  FUNC_22(VAR_22);
  FUNC_6(VAR_17, VAR_23);
  FUNC_6(VAR_17, VAR_25);
  VAR_27 = FUNC_3(VAR_17);





  VAR_27 = FUNC_0(VAR_27 + 6 * 2 + 2);
  if (VAR_14->t_name == ((void*)0))
   VAR_27 += 2;
  if (VAR_27 + VAR_24 > VAR_28) {
   VAR_34 = FUNC_12(VAR_24, VAR_28 - VAR_27);
   VAR_32 = VAR_27;
   VAR_33 = 0;
   VAR_31 = 0;
  } else {
   VAR_34 = VAR_24;
   VAR_32 = VAR_34 ? VAR_27 : 0;
   VAR_27 = FUNC_0(VAR_27 + VAR_34);
   VAR_33 = FUNC_12(VAR_26, VAR_28 - VAR_27);
   VAR_31 = VAR_33 ? VAR_27 : 0;
  }
  FUNC_6(VAR_17, VAR_34);
  FUNC_6(VAR_17, VAR_32);
  FUNC_6(VAR_17, VAR_23 - VAR_24);
  FUNC_6(VAR_17, VAR_33);
  FUNC_6(VAR_17, VAR_31);
  FUNC_6(VAR_17, VAR_25 - VAR_26);
  VAR_24 -= VAR_34;
  VAR_26 -= VAR_33;
  if (VAR_14->t_name == ((void*)0))
   FUNC_6(VAR_17, VAR_14->t2_fid);
  FUNC_21(VAR_22);
  FUNC_17(VAR_22);
  FUNC_8(VAR_17, 0);
  VAR_27 = FUNC_3(VAR_17);
  if (VAR_34) {
   FUNC_5(VAR_17, ((void*)0), FUNC_0(VAR_27) - VAR_27, VAR_2);
   VAR_30 = FUNC_10(&VAR_19, VAR_34, &VAR_21);
   if (VAR_30)
    goto bad;
   FUNC_4(VAR_17, VAR_21);
  }
  VAR_27 = FUNC_3(VAR_17);
  if (VAR_33) {
   FUNC_5(VAR_17, ((void*)0), FUNC_0(VAR_27) - VAR_27, VAR_2);
   VAR_30 = FUNC_10(&VAR_20, VAR_33, &VAR_21);
   if (VAR_30)
    goto bad;
   FUNC_4(VAR_17, VAR_21);
  }
  FUNC_16(VAR_22);
  VAR_22->sr_state = VAR_4;
  VAR_30 = FUNC_14(VAR_15->vc_iod, VAR_3, ((void*)0));
  if (VAR_30)
   goto bad;
 }
 VAR_14->t2_flags |= VAR_7;
 VAR_18 = &VAR_14->t2_rdata;
 if (VAR_18->md_top) {
  FUNC_2(VAR_18->md_top);
  FUNC_11(VAR_18, VAR_18->md_top);
 }
 VAR_18 = &VAR_14->t2_rparam;
 if (VAR_18->md_top) {
  FUNC_2(VAR_18->md_top);
  FUNC_11(VAR_18, VAR_18->md_top);
 }
bad:
 FUNC_13(VAR_22);
freerq:
 FUNC_18(VAR_22);
 if (VAR_30) {
  if (VAR_22->sr_flags & VAR_6)
   VAR_14->t2_flags |= VAR_8;
  FUNC_9(&VAR_14->t2_rparam);
  FUNC_9(&VAR_14->t2_rdata);
 }
 return VAR_30;
}
