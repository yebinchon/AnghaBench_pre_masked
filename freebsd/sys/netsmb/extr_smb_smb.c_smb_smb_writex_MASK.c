
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct uio {int uio_offset; } ;
struct smb_share {int dummy; } ;
struct smb_rq {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mdchain {int dummy; } ;
struct mbchain {int dummy; } ;
typedef int fid ;
typedef int caddr_t ;
struct TYPE_2__ {int vc_wxmax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smb_share*) ;
 TYPE_1__* FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct mbchain*,int ,int,int ) ;
 int FUNC_3 (struct mbchain*,int) ;
 int FUNC_4 (struct mbchain*,int) ;
 int FUNC_5 (struct mbchain*,int) ;
 int FUNC_6 (struct mbchain*,struct uio*,int) ;
 int FUNC_7 (struct mdchain*,int*) ;
 int FUNC_8 (struct mdchain*,int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_11 (struct smb_rq*) ;
 int FUNC_12 (struct smb_rq*) ;
 int FUNC_13 (struct smb_rq*) ;
 int FUNC_14 (struct smb_rq*,struct mdchain**) ;
 int FUNC_15 (struct smb_rq*,struct mbchain**) ;
 int FUNC_16 (struct smb_rq*) ;
 int FUNC_17 (struct smb_rq*) ;
 int FUNC_18 (struct smb_rq*) ;

__attribute__((used)) static __inline int
FUNC_19(struct smb_share *VAR_3, u_int16_t VAR_4, int *VAR_5, int *VAR_6,
 struct uio *VAR_7, struct smb_cred *VAR_8)
{
 struct smb_rq *VAR_9;
 struct mbchain *VAR_10;
 struct mdchain *VAR_11;
 int VAR_12;
 u_int8_t VAR_13;
 u_int16_t VAR_14;

 VAR_12 = FUNC_10(FUNC_0(VAR_3), VAR_2, VAR_8, &VAR_9);
 if (VAR_12)
  return (VAR_12);
 FUNC_15(VAR_9, &VAR_10);
 FUNC_18(VAR_9);
 FUNC_5(VAR_10, 0xff);
 FUNC_5(VAR_10, 0);
 FUNC_3(VAR_10, 0);
 FUNC_2(VAR_10, (caddr_t)&VAR_4, sizeof(VAR_4), VAR_1);
 FUNC_4(VAR_10, VAR_7->uio_offset);
 FUNC_4(VAR_10, 0);
 FUNC_3(VAR_10, 0);
 FUNC_3(VAR_10, 0);
 *VAR_5 = FUNC_9(FUNC_1(VAR_3)->vc_wxmax, *VAR_5);
 FUNC_3(VAR_10, (unsigned)*VAR_5 >> 16);
 FUNC_3(VAR_10, *VAR_5);
 FUNC_3(VAR_10, 64);
 FUNC_4(VAR_10, VAR_7->uio_offset >> 32);
 FUNC_17(VAR_9);
 FUNC_12(VAR_9);
 do {
  FUNC_5(VAR_10, 0xee);
  VAR_12 = FUNC_6(VAR_10, VAR_7, *VAR_5);
  if (VAR_12)
   break;
  FUNC_11(VAR_9);
  VAR_12 = FUNC_16(VAR_9);
  if (VAR_12)
   break;
  FUNC_14(VAR_9, &VAR_11);
  FUNC_8(VAR_11, &VAR_13);
  if (VAR_13 != 6) {
   VAR_12 = VAR_0;
   break;
  }
  FUNC_8(VAR_11, ((void*)0));
  FUNC_8(VAR_11, ((void*)0));
  FUNC_7(VAR_11, ((void*)0));
  FUNC_7(VAR_11, &VAR_14);
  *VAR_6 = VAR_14;
 } while(0);

 FUNC_13(VAR_9);
 return (VAR_12);
}
