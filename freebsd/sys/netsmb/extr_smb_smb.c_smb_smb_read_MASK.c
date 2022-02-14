
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
 int FUNC_0 (struct smb_share*) ;
 TYPE_2__* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int ,int,int ) ;
 int FUNC_3 (struct mbchain*,int) ;
 int FUNC_4 (struct mbchain*,int ) ;
 int FUNC_5 (struct mdchain*,int *,int,int ) ;
 int FUNC_6 (struct mdchain*,int*) ;
 int FUNC_7 (struct mdchain*,int*) ;
 int FUNC_8 (struct mdchain*,struct uio*,int) ;
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
FUNC_20(struct smb_share *VAR_5, u_int16_t VAR_6,
 int *VAR_7, int *VAR_8, struct uio *VAR_9, struct smb_cred *VAR_10)
{
 struct smb_rq *VAR_11;
 struct mbchain *VAR_12;
 struct mdchain *VAR_13;
 u_int16_t VAR_14, VAR_15;
 u_int8_t VAR_16;
 int VAR_17, VAR_18, VAR_19;

 if (FUNC_1(VAR_5)->vc_sopt.sv_caps & VAR_2)
  return (FUNC_19(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10));

 VAR_17 = FUNC_10(FUNC_0(VAR_5), VAR_3, VAR_10, &VAR_11);
 if (VAR_17)
  return VAR_17;

 VAR_19 = FUNC_1(VAR_5)->vc_txmax - VAR_4 - 16;
 VAR_18 = *VAR_7 = FUNC_9(VAR_19, *VAR_7);

 FUNC_15(VAR_11, &VAR_12);
 FUNC_18(VAR_11);
 FUNC_2(VAR_12, (caddr_t)&VAR_6, sizeof(VAR_6), VAR_1);
 FUNC_3(VAR_12, VAR_18);
 FUNC_4(VAR_12, VAR_9->uio_offset);
 FUNC_3(VAR_12, FUNC_9(VAR_9->uio_resid, 0xffff));
 FUNC_17(VAR_11);
 FUNC_12(VAR_11);
 FUNC_11(VAR_11);
 do {
  VAR_17 = FUNC_16(VAR_11);
  if (VAR_17)
   break;
  FUNC_14(VAR_11, &VAR_13);
  FUNC_7(VAR_13, &VAR_16);
  if (VAR_16 != 5) {
   VAR_17 = VAR_0;
   break;
  }
  FUNC_6(VAR_13, &VAR_14);
  FUNC_5(VAR_13, ((void*)0), 4 * 2, VAR_1);
  FUNC_6(VAR_13, &VAR_15);
  FUNC_7(VAR_13, ((void*)0));
  FUNC_6(VAR_13, &VAR_14);
  if (VAR_14 == 0) {
   *VAR_8 = VAR_14;
   break;
  }
  VAR_17 = FUNC_8(VAR_13, VAR_9, VAR_14);
  if (VAR_17)
   break;
  *VAR_8 = VAR_14;
 } while(0);
 FUNC_13(VAR_11);
 return VAR_17;
}
