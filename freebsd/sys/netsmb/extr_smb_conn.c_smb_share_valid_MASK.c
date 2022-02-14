
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_share {scalar_t__ ss_tid; scalar_t__ ss_vcgenid; } ;
struct TYPE_2__ {scalar_t__ vc_genid; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct smb_share*) ;

int
FUNC_1(struct smb_share *VAR_1)
{
 return VAR_1->ss_tid != VAR_0 &&
     VAR_1->ss_vcgenid == FUNC_0(VAR_1)->vc_genid;
}
