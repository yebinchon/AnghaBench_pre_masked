
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int ready; int * bo; } ;
struct TYPE_5__ {int gart_size; } ;
struct amdgpu_device {TYPE_3__ gart; TYPE_2__ gmc; TYPE_1__* nbio_funcs; int dev; } ;
struct TYPE_4__ {int (* hdp_flush ) (struct amdgpu_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,unsigned int,unsigned long long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct amdgpu_device*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 int FUNC_8 (struct amdgpu_device*,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*,int) ;
 int FUNC_11 (struct amdgpu_device*,int *) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_9)
{
 int VAR_10;
 bool VAR_11;
 u32 VAR_12;

 if (VAR_9->gart.bo == ((void*)0)) {
  FUNC_5(VAR_9->dev, "No VRAM object for PCIE GART.\n");
  return -VAR_3;
 }

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_12 = FUNC_1(VAR_4, 0, VAR_8);
 VAR_12 |= VAR_5;
 FUNC_2(VAR_4, 0, VAR_8, VAR_12);

 VAR_12 = FUNC_1(VAR_4, 0, VAR_7);
 FUNC_2(VAR_4, 0, VAR_7, VAR_12);


 VAR_9->nbio_funcs->hdp_flush(VAR_9, ((void*)0));

 VAR_11 = (VAR_6 == VAR_2) ?
  0 : 1;

 FUNC_7(VAR_9, VAR_11);
 FUNC_10(VAR_9, VAR_11);
 FUNC_8(VAR_9, 0, VAR_1, 0);
 FUNC_8(VAR_9, 0, VAR_0, 0);

 FUNC_0("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_9->gmc.gart_size >> 20),
   (unsigned long long)FUNC_3(VAR_9->gart.bo));

 VAR_9->gart.ready = 1;

 return 0;
}
