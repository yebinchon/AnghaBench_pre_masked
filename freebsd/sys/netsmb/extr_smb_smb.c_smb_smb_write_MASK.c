
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct uio {int uio_resid; int uio_offset; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;
typedef int fid ;
typedef int caddr_t ;
struct TYPE_3__ {int sv_caps; } ;
struct TYPE_4__ {int vc_txmax; TYPE_1__ vc_sopt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smb_share*) ;
 TYPE_2__* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int ,int,int ) ;
 int FUNC_3 (struct mbchain*,int) ;
 int FUNC_4 (struct mbchain*,int ) ;
 int FUNC_5 (struct mbchain*,int ) ;
 int FUNC_6 (struct mbchain*,struct uio*,int) ;
 int FUNC_7 (struct mdchain*,int*) ;
 int FUNC_8 (struct mdchain*,int*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smb_rq*) ;
 int FUNC_14 (struct smb_rq*,struct mdchain**) ;
 int FUNC_15 (struct smb_rq*,struct mbchain**) ;
 int FUNC_16 (struct smb_rq*) ;
 int FUNC_17 (struct smb_rq*) ;
 int FUNC_18 (struct smb_rq*) ;
 int FUNC_19 (struct smb_share*,int,int*,int*,struct uio*,struct smb_cred*) ;

__attribute__((used)) static __inline int
FUNC_20(struct smb_share *VAR_6, u_int16_t VAR_7, int *VAR_8, int *VAR_9,
 struct uio *VAR_10, struct smb_cred *VAR_11)
{
 struct smb_rq *VAR_12;
 struct mbchain *VAR_13;
 struct mdchain *VAR_14;
 u_int16_t VAR_15;
 u_int8_t VAR_16;
 int VAR_17, VAR_18;

 if (*VAR_8 && FUNC_1(VAR_6)->vc_sopt.sv_caps & VAR_2)
  return (FUNC_19(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11));

 VAR_18 = FUNC_1(VAR_6)->vc_txmax - VAR_5 - 16;
 if (VAR_18 > 0xffff)
  VAR_18 = 0xffff;

 VAR_15 = *VAR_8 = FUNC_9(VAR_18, *VAR_8);

 VAR_17 = FUNC_10(FUNC_0(VAR_6), VAR_3, VAR_11, &VAR_12);
 if (VAR_17)
  return VAR_17;
 FUNC_15(VAR_12, &VAR_13);
 FUNC_18(VAR_12);
 FUNC_2(VAR_13, (caddr_t)&VAR_7, sizeof(VAR_7), VAR_1);
 FUNC_3(VAR_13, VAR_15);
 FUNC_4(VAR_13, VAR_10->uio_offset);
 FUNC_3(VAR_13, FUNC_9(VAR_10->uio_resid, 0xffff));
 FUNC_17(VAR_12);
 FUNC_12(VAR_12);
 FUNC_5(VAR_13, VAR_4);
 FUNC_3(VAR_13, VAR_15);
 do {
  VAR_17 = FUNC_6(VAR_13, VAR_10, VAR_15);
  if (VAR_17)
   break;
  FUNC_11(VAR_12);
  VAR_17 = FUNC_16(VAR_12);
  if (VAR_17)
   break;
  FUNC_14(VAR_12, &VAR_14);
  FUNC_8(VAR_14, &VAR_16);
  if (VAR_16 != 1) {
   VAR_17 = VAR_0;
   break;
  }
  FUNC_7(VAR_14, &VAR_15);
  *VAR_9 = VAR_15;
 } while(0);
 FUNC_13(VAR_12);
 return VAR_17;
}
