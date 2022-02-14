
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int hpd_eop_obj; int hpd_eop_gpu_addr; int queue_bitmap; } ;
struct TYPE_4__ {size_t num_compute_rings; TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,size_t,int ,int ,int *,int *,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *,int ,size_t) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_4)
{
 int VAR_5;
 u32 *VAR_6;
 size_t VAR_7;

 FUNC_4(VAR_4->gfx.mec.queue_bitmap, VAR_1);


 FUNC_3(VAR_4);

 VAR_7 = VAR_4->gfx.num_compute_rings * VAR_2;

 VAR_5 = FUNC_0(VAR_4, VAR_7, VAR_3,
          VAR_0,
          &VAR_4->gfx.mec.hpd_eop_obj,
          &VAR_4->gfx.mec.hpd_eop_gpu_addr,
          (void **)&VAR_6);
 if (VAR_5) {
  FUNC_5(VAR_4->dev, "(%d) create HDP EOP bo failed\n", VAR_5);
  return VAR_5;
 }

 FUNC_6(VAR_6, 0, VAR_7);

 FUNC_1(VAR_4->gfx.mec.hpd_eop_obj);
 FUNC_2(VAR_4->gfx.mec.hpd_eop_obj);

 return 0;
}
