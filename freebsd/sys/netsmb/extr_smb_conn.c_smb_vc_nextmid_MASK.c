
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_2__ {int co_interlock; } ;
struct smb_vc {TYPE_1__ obj; int vc_mid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u_short
FUNC_2(struct smb_vc *VAR_0)
{
 u_short VAR_1;

 FUNC_1(&VAR_0->obj.co_interlock);
 VAR_1 = VAR_0->vc_mid++;
 FUNC_0(&VAR_0->obj.co_interlock);
 return VAR_1;
}
