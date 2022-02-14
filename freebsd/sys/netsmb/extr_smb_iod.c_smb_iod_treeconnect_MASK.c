
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbiod {scalar_t__ iod_state; int iod_scred; } ;
struct smb_share {int ss_vcgenid; int ss_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct smb_share*) ;
 int FUNC_2 (struct smb_share*) ;
 int FUNC_3 (struct smbiod*) ;
 int FUNC_4 (struct smb_share*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct smbiod *VAR_5, struct smb_share *VAR_6)
{
 int VAR_7;

 if (VAR_5->iod_state != VAR_3) {
  if (VAR_5->iod_state != VAR_1)
   return VAR_0;
  VAR_5->iod_state = VAR_2;
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7)
   return VAR_7;
 }
 FUNC_0("tree reconnect\n");
 FUNC_1(VAR_6);
 VAR_6->ss_flags |= VAR_4;
 FUNC_2(VAR_6);
 VAR_7 = FUNC_4(VAR_6, &VAR_5->iod_scred);
 FUNC_1(VAR_6);
 VAR_6->ss_flags &= ~VAR_4;
 FUNC_2(VAR_6);
 FUNC_5(&VAR_6->ss_vcgenid);
 return VAR_7;
}
