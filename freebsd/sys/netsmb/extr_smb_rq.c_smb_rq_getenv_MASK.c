
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {int vc_srvname; } ;
struct smb_share {int ss_name; } ;
struct smb_connobj {int co_level; struct smb_connobj* co_parent; } ;


 struct smb_share* FUNC_0 (struct smb_connobj*) ;
 struct smb_vc* FUNC_1 (struct smb_connobj*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;



__attribute__((used)) static int
FUNC_3(struct smb_connobj *VAR_1,
 struct smb_vc **VAR_2, struct smb_share **VAR_3)
{
 struct smb_vc *VAR_4 = ((void*)0);
 struct smb_share *VAR_5 = ((void*)0);
 struct smb_connobj *VAR_6;
 int VAR_7 = 0;

 switch (VAR_1->co_level) {
     case 128:
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_1->co_parent == ((void*)0)) {
   FUNC_2("zombie VC %s\n", VAR_4->vc_srvname);
   VAR_7 = VAR_0;
   break;
  }
  break;
     case 129:
  VAR_5 = FUNC_0(VAR_1);
  VAR_6 = VAR_1->co_parent;
  if (VAR_6 == ((void*)0)) {
   FUNC_2("zombie share %s\n", VAR_5->ss_name);
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = FUNC_3(VAR_6, &VAR_4, ((void*)0));
  if (VAR_7)
   break;
  break;
     default:
  FUNC_2("invalid layer %d passed\n", VAR_1->co_level);
  VAR_7 = VAR_0;
 }
 if (VAR_2)
  *VAR_2 = VAR_4;
 if (VAR_3)
  *VAR_3 = VAR_5;
 return VAR_7;
}
