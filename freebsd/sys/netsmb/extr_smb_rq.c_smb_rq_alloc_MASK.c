
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct smb_rq {int sr_flags; } ;
struct smb_cred {int dummy; } ;
struct smb_connobj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct smb_rq* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct smb_rq*) ;
 int FUNC_2 (struct smb_rq*,struct smb_connobj*,int ,struct smb_cred*) ;

int
FUNC_3(struct smb_connobj *VAR_4, u_char VAR_5, struct smb_cred *VAR_6,
 struct smb_rq **VAR_7)
{
 struct smb_rq *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1, VAR_2);
 if (VAR_8 == ((void*)0))
  return VAR_0;
 VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_6);
 VAR_8->sr_flags |= VAR_3;
 if (VAR_9) {
  FUNC_1(VAR_8);
  return VAR_9;
 }
 *VAR_7 = VAR_8;
 return 0;
}
