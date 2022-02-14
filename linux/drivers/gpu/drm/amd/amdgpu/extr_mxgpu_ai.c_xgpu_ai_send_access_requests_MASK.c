
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int checksum_key; } ;
struct TYPE_4__ {TYPE_1__ fw_reserve; } ;
struct amdgpu_device {TYPE_2__ virt; } ;
typedef enum idh_request { ____Placeholder_idh_request } idh_request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct amdgpu_device*,int,int ,int ,int ) ;
 int FUNC_4 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_6,
     enum idh_request VAR_7)
{
 int VAR_8;

 FUNC_3(VAR_6, VAR_7, 0, 0, 0);


 if (VAR_7 == VAR_2 ||
  VAR_7 == VAR_1 ||
  VAR_7 == VAR_3) {
  VAR_8 = FUNC_4(VAR_6, VAR_0);
  if (VAR_8) {
   FUNC_2("Doesn't get READY_TO_ACCESS_GPU from pf, give up\n");
   return VAR_8;
  }

  if (VAR_7 == VAR_2 || VAR_7 == VAR_3) {
   VAR_6->virt.fw_reserve.checksum_key =
    FUNC_0(FUNC_1(VAR_4, 0,
     VAR_5));
  }
 }

 return 0;
}
