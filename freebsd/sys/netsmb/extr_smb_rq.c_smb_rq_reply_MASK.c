
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct mdchain {int dummy; } ;
struct smb_rq {int sr_serror; int sr_errclass; int sr_rptid; int sr_rpuid; int sr_rppid; int sr_rpmid; TYPE_1__* sr_vc; int sr_rpflags2; int sr_rpflags; int sr_error; struct mdchain sr_rp; } ;
struct TYPE_2__ {int vc_hflags2; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mdchain*,int *) ;
 int FUNC_2 (struct mdchain*,int *) ;
 int FUNC_3 (struct mdchain*,int *) ;
 int FUNC_4 (struct mdchain*,int *) ;
 int FUNC_5 (struct smb_rq*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct smb_rq*) ;

__attribute__((used)) static int
FUNC_8(struct smb_rq *VAR_2)
{
 struct mdchain *VAR_3 = &VAR_2->sr_rp;
 u_int32_t VAR_4;
 u_int8_t VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_4(VAR_3, &VAR_5);
 if (VAR_2->sr_vc->vc_hflags2 & VAR_0) {
  VAR_6 = FUNC_3(VAR_3, &VAR_2->sr_error);
 } else {
  VAR_6 = FUNC_4(VAR_3, &VAR_2->sr_errclass);
  VAR_6 = FUNC_4(VAR_3, &VAR_5);
  VAR_6 = FUNC_1(VAR_3, &VAR_2->sr_serror);
  if (!VAR_6)
   VAR_7 = FUNC_6(VAR_2->sr_errclass, VAR_2->sr_serror);
 }
 VAR_6 = FUNC_4(VAR_3, &VAR_2->sr_rpflags);
 VAR_6 = FUNC_1(VAR_3, &VAR_2->sr_rpflags2);

 VAR_6 = FUNC_2(VAR_3, &VAR_4);
 VAR_6 = FUNC_2(VAR_3, &VAR_4);
 VAR_6 = FUNC_2(VAR_3, &VAR_4);

 VAR_6 = FUNC_1(VAR_3, &VAR_2->sr_rptid);
 VAR_6 = FUNC_1(VAR_3, &VAR_2->sr_rppid);
 VAR_6 = FUNC_1(VAR_3, &VAR_2->sr_rpuid);
 VAR_6 = FUNC_1(VAR_3, &VAR_2->sr_rpmid);

 if (VAR_6 == 0 &&
     (VAR_2->sr_vc->vc_hflags2 & VAR_1))
  VAR_6 = FUNC_7(VAR_2);

 FUNC_0("M:%04x, P:%04x, U:%04x, T:%04x, E: %d:%d\n",
     VAR_2->sr_rpmid, VAR_2->sr_rppid, VAR_2->sr_rpuid, VAR_2->sr_rptid,
     VAR_2->sr_errclass, VAR_2->sr_serror);
 return VAR_6 ? VAR_6 : VAR_7;
}
