
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbiod {scalar_t__ iod_state; int iod_scred; struct smb_vc* iod_vc; } ;
struct smb_vc {int vc_smbuid; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct smbiod*) ;
 int FUNC_2 (struct smb_vc*,int *) ;

__attribute__((used)) static int
FUNC_3(struct smbiod *VAR_4)
{
 struct smb_vc *VAR_5 = VAR_4->iod_vc;

 FUNC_0("\n");
 if (VAR_4->iod_state == VAR_2) {
  FUNC_2(VAR_5, &VAR_4->iod_scred);
  VAR_4->iod_state = VAR_1;
 }
 VAR_5->vc_smbuid = VAR_3;
 FUNC_1(VAR_4);
 VAR_4->iod_state = VAR_0;
 return 0;
}
