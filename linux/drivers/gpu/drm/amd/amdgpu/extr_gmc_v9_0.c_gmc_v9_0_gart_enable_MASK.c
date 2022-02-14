
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int ready; int * bo; } ;
struct TYPE_5__ {int vram_start; int gart_size; } ;
struct amdgpu_device {int asic_type; int num_vmhubs; TYPE_3__ gart; TYPE_2__ gmc; TYPE_1__* nbio_funcs; int dev; } ;
struct TYPE_4__ {int (* hdp_flush ) (struct amdgpu_device*,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

 int FUNC_1 (char*,unsigned int,unsigned long long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct amdgpu_device*,int ,int ) ;
 int FUNC_7 (struct amdgpu_device*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*,int) ;
 int FUNC_11 (struct amdgpu_device*,int ,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*,int) ;
 int FUNC_14 (struct amdgpu_device*,int) ;
 int FUNC_15 (struct amdgpu_device*) ;
 int FUNC_16 (struct amdgpu_device*,int) ;
 int FUNC_17 (struct amdgpu_device*,int *) ;

__attribute__((used)) static int FUNC_18(struct amdgpu_device *VAR_11)
{
 int VAR_12, VAR_13;
 bool VAR_14;
 u32 VAR_15;

 FUNC_6(VAR_11,
      VAR_7,
      FUNC_0(VAR_7));

 if (VAR_11->gart.bo == ((void*)0)) {
  FUNC_8(VAR_11->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_2;
 }
 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12)
  return VAR_12;

 switch (VAR_11->asic_type) {
 case 128:

  FUNC_14(VAR_11, 1);
  break;
 default:
  break;
 }

 VAR_12 = FUNC_9(VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11->asic_type == VAR_1)
  VAR_12 = FUNC_15(VAR_11);
 else
  VAR_12 = FUNC_12(VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_3(VAR_4, 0, VAR_5, VAR_3, 1);

 VAR_15 = FUNC_2(VAR_4, 0, VAR_8);
 FUNC_4(VAR_4, 0, VAR_8, VAR_15);

 FUNC_4(VAR_4, 0, VAR_9, (VAR_11->gmc.vram_start >> 8));
 FUNC_4(VAR_4, 0, VAR_10, (VAR_11->gmc.vram_start >> 40));


 VAR_11->nbio_funcs->hdp_flush(VAR_11, ((void*)0));

 if (VAR_6 == VAR_0)
  VAR_14 = 0;
 else
  VAR_14 = 1;

 FUNC_10(VAR_11, VAR_14);
 if (VAR_11->asic_type == VAR_1)
  FUNC_16(VAR_11, VAR_14);
 else
  FUNC_13(VAR_11, VAR_14);

 for (VAR_13 = 0; VAR_13 < VAR_11->num_vmhubs; ++VAR_13)
  FUNC_11(VAR_11, 0, VAR_13, 0);

 FUNC_1("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_11->gmc.gart_size >> 20),
   (unsigned long long)FUNC_5(VAR_11->gart.bo));
 VAR_11->gart.ready = 1;
 return 0;
}
