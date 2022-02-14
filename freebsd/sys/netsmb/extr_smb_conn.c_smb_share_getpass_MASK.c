
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {char const* vc_pass; } ;
struct smb_share {char const* ss_pass; } ;


 struct smb_vc* FUNC_0 (struct smb_share*) ;
 char const* VAR_0 ;

const char*
FUNC_1(struct smb_share *VAR_1)
{
 struct smb_vc *VAR_2;

 if (VAR_1->ss_pass)
  return VAR_1->ss_pass;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->vc_pass)
  return VAR_2->vc_pass;
 return VAR_0;
}
