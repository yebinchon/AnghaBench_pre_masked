
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_ring {int name; int mqd_ptr; int mqd_gpu_addr; int mqd_obj; } ;
struct TYPE_7__ {void** mqd_backup; } ;
struct TYPE_6__ {void** mqd_backup; } ;
struct TYPE_5__ {struct amdgpu_ring ring; } ;
struct TYPE_8__ {int num_gfx_rings; int num_compute_rings; TYPE_3__ mec; struct amdgpu_ring* compute_ring; TYPE_2__ me; struct amdgpu_ring* gfx_ring; TYPE_1__ kiq; } ;
struct amdgpu_device {scalar_t__ asic_type; int dev; TYPE_4__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct amdgpu_device*,unsigned int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,char*,int) ;
 void* FUNC_2 (unsigned int,int ) ;

int FUNC_3(struct amdgpu_device *VAR_7,
      unsigned VAR_8)
{
 struct amdgpu_ring *VAR_9 = ((void*)0);
 int VAR_10, VAR_11;


 VAR_9 = &VAR_7->gfx.kiq.ring;
 if (!VAR_9->mqd_obj) {





  VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_5,
         VAR_1, &VAR_9->mqd_obj,
         &VAR_9->mqd_gpu_addr, &VAR_9->mqd_ptr);
  if (VAR_10) {
   FUNC_1(VAR_7->dev, "failed to create ring mqd ob (%d)", VAR_10);
   return VAR_10;
  }


  VAR_7->gfx.mec.mqd_backup[VAR_2] = FUNC_2(VAR_8, VAR_4);
  if (!VAR_7->gfx.mec.mqd_backup[VAR_2])
    FUNC_1(VAR_7->dev, "no memory to create MQD backup for ring %s\n", VAR_9->name);
 }

 if (VAR_7->asic_type >= VAR_3 && VAR_6) {

  for (VAR_11 = 0; VAR_11 < VAR_7->gfx.num_gfx_rings; VAR_11++) {
   VAR_9 = &VAR_7->gfx.gfx_ring[VAR_11];
   if (!VAR_9->mqd_obj) {
    VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_5,
           VAR_0, &VAR_9->mqd_obj,
           &VAR_9->mqd_gpu_addr, &VAR_9->mqd_ptr);
    if (VAR_10) {
     FUNC_1(VAR_7->dev, "failed to create ring mqd bo (%d)", VAR_10);
     return VAR_10;
    }


    VAR_7->gfx.me.mqd_backup[VAR_11] = FUNC_2(VAR_8, VAR_4);
    if (!VAR_7->gfx.me.mqd_backup[VAR_11])
     FUNC_1(VAR_7->dev, "no memory to create MQD backup for ring %s\n", VAR_9->name);
   }
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_7->gfx.num_compute_rings; VAR_11++) {
  VAR_9 = &VAR_7->gfx.compute_ring[VAR_11];
  if (!VAR_9->mqd_obj) {
   VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_5,
          VAR_0, &VAR_9->mqd_obj,
          &VAR_9->mqd_gpu_addr, &VAR_9->mqd_ptr);
   if (VAR_10) {
    FUNC_1(VAR_7->dev, "failed to create ring mqd bo (%d)", VAR_10);
    return VAR_10;
   }


   VAR_7->gfx.mec.mqd_backup[VAR_11] = FUNC_2(VAR_8, VAR_4);
   if (!VAR_7->gfx.mec.mqd_backup[VAR_11])
    FUNC_1(VAR_7->dev, "no memory to create MQD backup for ring %s\n", VAR_9->name);
  }
 }

 return 0;
}
