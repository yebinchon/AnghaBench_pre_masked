
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {int vc_stlock; scalar_t__ vc_ucs_toserver; scalar_t__ vc_ucs_tolocal; scalar_t__ vc_cp_toserver; scalar_t__ vc_cp_tolocal; int * vc_toserver; int * vc_tolocal; scalar_t__ vc_toupper; scalar_t__ vc_tolower; struct smb_vc* vc_laddr; struct smb_vc* vc_paddr; struct smb_vc* vc_mackey; int vc_domain; int vc_pass; int vc_srvname; int vc_username; scalar_t__ vc_iod; } ;
struct smb_connobj {int dummy; } ;


 struct smb_vc* FUNC_0 (struct smb_connobj*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct smb_vc*) ;
 int FUNC_3 (struct smb_vc*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct smb_connobj *VAR_3)
{
 struct smb_vc *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->vc_iod)
  FUNC_6(VAR_4->vc_iod);
 FUNC_1(VAR_4->vc_username);
 FUNC_1(VAR_4->vc_srvname);
 FUNC_1(VAR_4->vc_pass);
 FUNC_1(VAR_4->vc_domain);
 if (VAR_4->vc_mackey)
  FUNC_3(VAR_4->vc_mackey, VAR_1);
 if (VAR_4->vc_paddr)
  FUNC_3(VAR_4->vc_paddr, VAR_2);
 if (VAR_4->vc_laddr)
  FUNC_3(VAR_4->vc_laddr, VAR_2);
 if (VAR_4->vc_tolower)
  FUNC_4(VAR_4->vc_tolower);
 if (VAR_4->vc_toupper)
  FUNC_4(VAR_4->vc_toupper);
 if (VAR_4->vc_tolocal)
  VAR_4->vc_tolocal = ((void*)0);
 if (VAR_4->vc_toserver)
  VAR_4->vc_toserver = ((void*)0);
 if (VAR_4->vc_cp_tolocal)
  FUNC_4(VAR_4->vc_cp_tolocal);
 if (VAR_4->vc_cp_toserver)
  FUNC_4(VAR_4->vc_cp_toserver);
 if (VAR_4->vc_ucs_tolocal)
  FUNC_4(VAR_4->vc_ucs_tolocal);
 if (VAR_4->vc_ucs_toserver)
  FUNC_4(VAR_4->vc_ucs_toserver);
 FUNC_5(FUNC_2(VAR_4));
 FUNC_7(&VAR_4->vc_stlock);
 FUNC_3(VAR_4, VAR_0);
}
