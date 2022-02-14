
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rq {int sr_flags; TYPE_1__* sr_cred; } ;
struct TYPE_2__ {int scr_td; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int
FUNC_1(struct smb_rq *VAR_2)
{
 if (VAR_2->sr_flags & VAR_1)
  return VAR_0;
 return FUNC_0(VAR_2->sr_cred->scr_td);
}
