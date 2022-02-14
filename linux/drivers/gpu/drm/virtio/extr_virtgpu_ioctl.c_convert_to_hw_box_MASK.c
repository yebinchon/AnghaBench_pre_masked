
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_box {void* d; void* h; void* w; void* z; void* y; void* x; } ;
struct drm_virtgpu_3d_box {int d; int h; int w; int z; int y; int x; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct virtio_gpu_box *VAR_0,
         const struct drm_virtgpu_3d_box *VAR_1)
{
 VAR_0->x = FUNC_0(VAR_1->x);
 VAR_0->y = FUNC_0(VAR_1->y);
 VAR_0->z = FUNC_0(VAR_1->z);
 VAR_0->w = FUNC_0(VAR_1->w);
 VAR_0->h = FUNC_0(VAR_1->h);
 VAR_0->d = FUNC_0(VAR_1->d);
}
