
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {int dummy; } ;
struct smb_share {int dummy; } ;
struct smb_dev {scalar_t__ refcount; struct smb_vc* sd_vc; struct smb_share* sd_share; } ;
struct smb_cred {scalar_t__ refcount; struct smb_vc* sd_vc; struct smb_share* sd_share; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct smb_dev*,int ) ;
 struct smb_dev* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct smb_dev*,int ,int *) ;
 int FUNC_6 (struct smb_share*) ;
 int FUNC_7 (struct smb_share*,struct smb_dev*) ;
 int FUNC_8 (struct smb_vc*) ;
 int FUNC_9 (struct smb_vc*,struct smb_dev*) ;

void
FUNC_10(struct smb_dev *VAR_3)
{
 struct smb_vc *VAR_4;
 struct smb_share *VAR_5;
 struct smb_cred *VAR_6;

 FUNC_1();
 if (!VAR_3)
  FUNC_4("No smb_dev upon device close");
 FUNC_0(VAR_3->refcount > 0);
 VAR_3->refcount--;
 if (VAR_3->refcount)
  return;
 VAR_6 = FUNC_3(sizeof(struct smb_cred), VAR_0, VAR_1);
 FUNC_5(VAR_6, VAR_2, ((void*)0));
 VAR_5 = VAR_3->sd_share;
 if (VAR_5 != ((void*)0)) {
  FUNC_6(VAR_5);
  FUNC_7(VAR_5, VAR_6);
 }
 VAR_4 = VAR_3->sd_vc;
 if (VAR_4 != ((void*)0)) {
  FUNC_8(VAR_4);
  FUNC_9(VAR_4, VAR_6);
 }
 FUNC_2(VAR_6, VAR_0);
 FUNC_2(VAR_3, VAR_0);
 return;
}
