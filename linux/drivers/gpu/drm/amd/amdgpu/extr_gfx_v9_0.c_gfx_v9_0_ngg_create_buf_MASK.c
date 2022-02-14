
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ngg_buf {int size; int bo; int bo_size; int gpu_addr; } ;
struct TYPE_3__ {int max_shader_engines; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {int dev; TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3,
       struct amdgpu_ngg_buf *VAR_4,
       int VAR_5,
       int VAR_6)
{
 int VAR_7;

 if (VAR_5 < 0) {
  FUNC_2(VAR_3->dev, "Buffer size is invalid: %d\n", VAR_5);
  return -VAR_1;
 }
 VAR_5 = VAR_5 ? VAR_5 : VAR_6;

 VAR_4->size = VAR_5 * VAR_3->gfx.config.max_shader_engines;
 VAR_7 = FUNC_0(VAR_3, VAR_4->size,
        VAR_2, VAR_0,
        &VAR_4->bo,
        &VAR_4->gpu_addr,
        ((void*)0));
 if (VAR_7) {
  FUNC_2(VAR_3->dev, "(%d) failed to create NGG buffer\n", VAR_7);
  return VAR_7;
 }
 VAR_4->bo_size = FUNC_1(VAR_4->bo);

 return VAR_7;
}
