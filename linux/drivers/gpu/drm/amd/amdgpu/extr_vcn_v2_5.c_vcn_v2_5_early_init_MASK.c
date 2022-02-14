
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_vcn_inst; int harvest_config; int num_enc_rings; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ vcn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_8;
 if (VAR_9->asic_type == VAR_3) {
  u32 VAR_10;
  int VAR_11;

  VAR_9->vcn.num_vcn_inst = VAR_6;
  for (VAR_11 = 0; VAR_11 < VAR_9->vcn.num_vcn_inst; VAR_11++) {
   VAR_10 = FUNC_0(VAR_5, VAR_11, VAR_7);
   if (VAR_10 & VAR_2)
    VAR_9->vcn.harvest_config |= 1 << VAR_11;
  }

  if (VAR_9->vcn.harvest_config == (VAR_0 |
       VAR_1))

   return -VAR_4;
 } else
  VAR_9->vcn.num_vcn_inst = 1;

 VAR_9->vcn.num_enc_rings = 2;

 FUNC_1(VAR_9);
 FUNC_2(VAR_9);
 FUNC_4(VAR_9);
 FUNC_3(VAR_9);

 return 0;
}
