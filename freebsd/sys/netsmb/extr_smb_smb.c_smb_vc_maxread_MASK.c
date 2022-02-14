
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int sv_caps; int sv_maxtx; } ;
struct smb_vc {int vc_hflags2; TYPE_1__ vc_sopt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u_int32_t
FUNC_0(struct smb_vc *VAR_3)
{
 if ((VAR_3->vc_sopt.sv_caps & VAR_0) &&
     (VAR_3->vc_hflags2 & VAR_1) == 0)
  return (60*1024);
 else
  return (VAR_3->vc_sopt.sv_maxtx - VAR_2 - 64);
}
