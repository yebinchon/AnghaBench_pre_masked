
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {char const* vc_pass; } ;


 char const* VAR_0 ;

const char *
FUNC_0(struct smb_vc *VAR_1)
{
 if (VAR_1->vc_pass)
  return VAR_1->vc_pass;
 return VAR_0;
}
