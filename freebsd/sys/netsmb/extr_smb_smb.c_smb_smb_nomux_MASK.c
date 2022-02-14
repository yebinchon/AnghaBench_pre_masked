
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_vc {TYPE_2__* vc_iod; } ;
struct smb_cred {TYPE_1__* scr_td; } ;
struct TYPE_4__ {scalar_t__ iod_p; } ;
struct TYPE_3__ {scalar_t__ td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int
FUNC_1(struct smb_vc *VAR_1, struct smb_cred *VAR_2, const char *VAR_3)
{
 if (VAR_2->scr_td->td_proc == VAR_1->vc_iod->iod_p)
  return 0;
 FUNC_0("wrong function called(%s)\n", VAR_3);
 return VAR_0;
}
