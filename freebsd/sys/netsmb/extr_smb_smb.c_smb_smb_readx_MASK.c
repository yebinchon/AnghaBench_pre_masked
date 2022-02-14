
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct uio {int uio_offset; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;
typedef int fid ;
typedef int caddr_t ;
struct TYPE_2__ {int vc_rxmax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smb_share*) ;
 TYPE_1__* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int ,int,int ) ;
 int FUNC_3 (struct mbchain*,int) ;
 int FUNC_4 (struct mbchain*,int) ;
 int FUNC_5 (struct mbchain*,int) ;
 int FUNC_6 (struct mdchain*,int *,int,int ) ;
 int FUNC_7 (struct mdchain*,int*) ;
 int FUNC_8 (struct mdchain*,int*) ;
 int FUNC_9 (struct mdchain*,struct uio*,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smb_rq*) ;
 int FUNC_14 (struct smb_rq*) ;
 int FUNC_15 (struct smb_rq*,struct mdchain**) ;
 int FUNC_16 (struct smb_rq*,struct mbchain**) ;
 int FUNC_17 (struct smb_rq*) ;
 int FUNC_18 (struct smb_rq*) ;
 int FUNC_19 (struct smb_rq*) ;

__attribute__((used)) static __inline int
FUNC_20(struct smb_share *VAR_4, u_int16_t VAR_5, int *VAR_6, int *VAR_7,
       struct uio *VAR_8, struct smb_cred *VAR_9)
{
 struct smb_rq *VAR_10;
 struct mbchain *VAR_11;
 struct mdchain *VAR_12;
 u_int8_t VAR_13;
 int VAR_14;
 u_int16_t VAR_15, VAR_16, VAR_17, VAR_18;
 u_int32_t VAR_19;

 VAR_14 = FUNC_11(FUNC_0(VAR_4), VAR_2, VAR_9, &VAR_10);
 if (VAR_14)
  return VAR_14;
 FUNC_16(VAR_10, &VAR_11);
 FUNC_19(VAR_10);
 FUNC_5(VAR_11, 0xff);
 FUNC_5(VAR_11, 0);
 FUNC_3(VAR_11, 0);
 FUNC_2(VAR_11, (caddr_t)&VAR_5, sizeof(VAR_5), VAR_1);
 FUNC_4(VAR_11, VAR_8->uio_offset);
 *VAR_6 = FUNC_10(FUNC_1(VAR_4)->vc_rxmax, *VAR_6);
 FUNC_3(VAR_11, *VAR_6);
 FUNC_3(VAR_11, *VAR_6);
 FUNC_4(VAR_11, (unsigned)*VAR_6 >> 16);
 FUNC_3(VAR_11, *VAR_6);
 FUNC_4(VAR_11, VAR_8->uio_offset >> 32);
 FUNC_18(VAR_10);
 FUNC_13(VAR_10);
 FUNC_12(VAR_10);
 do {
  VAR_14 = FUNC_17(VAR_10);
  if (VAR_14)
   break;
  FUNC_15(VAR_10, &VAR_12);
  VAR_17 = VAR_3;
  FUNC_8(VAR_12, &VAR_13);
  VAR_17++;
  if (VAR_13 != 12) {
   VAR_14 = VAR_0;
   break;
  }
  FUNC_8(VAR_12, ((void*)0));
  VAR_17++;
  FUNC_8(VAR_12, ((void*)0));
  VAR_17++;
  FUNC_7(VAR_12, ((void*)0));
  VAR_17 += 2;
  FUNC_7(VAR_12, ((void*)0));
  VAR_17 += 2;
  FUNC_7(VAR_12, ((void*)0));
  VAR_17 += 2;
  FUNC_7(VAR_12, ((void*)0));
  VAR_17 += 2;
  FUNC_7(VAR_12, &VAR_16);
  VAR_17 += 2;
  FUNC_7(VAR_12, &VAR_18);
  VAR_17 += 2;
  FUNC_7(VAR_12, &VAR_15);
  VAR_17 += 2;
  VAR_19 = (VAR_15 << 16) | VAR_16;
  FUNC_6(VAR_12, ((void*)0), 4 * 2, VAR_1);
  VAR_17 += 4*2;
  FUNC_7(VAR_12, ((void*)0));
  VAR_17 += 2;
  if (VAR_18 > VAR_17)
   FUNC_6(VAR_12, ((void*)0), VAR_18 - VAR_17, VAR_1);
  if (VAR_19 == 0) {
   *VAR_7 = VAR_19;
   break;
  }
  VAR_14 = FUNC_9(VAR_12, VAR_8, VAR_19);
  if (VAR_14)
   break;
  *VAR_7 = VAR_19;
 } while(0);
 FUNC_14(VAR_10);
 return (VAR_14);
}
