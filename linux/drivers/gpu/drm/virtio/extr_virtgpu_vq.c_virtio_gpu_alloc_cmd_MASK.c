
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_vbuffer {void* buf; } ;
struct virtio_gpu_device {int dummy; } ;
struct virtio_gpu_ctrl_hdr {int dummy; } ;


 void* FUNC_0 (struct virtio_gpu_vbuffer*) ;
 scalar_t__ FUNC_1 (struct virtio_gpu_vbuffer*) ;
 struct virtio_gpu_vbuffer* FUNC_2 (struct virtio_gpu_device*,int,int,int *,int *) ;

__attribute__((used)) static void *FUNC_3(struct virtio_gpu_device *VAR_0,
      struct virtio_gpu_vbuffer **VAR_1,
      int VAR_2)
{
 struct virtio_gpu_vbuffer *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2,
       sizeof(struct virtio_gpu_ctrl_hdr),
       ((void*)0), ((void*)0));
 if (FUNC_1(VAR_3)) {
  *VAR_1 = ((void*)0);
  return FUNC_0(VAR_3);
 }
 *VAR_1 = VAR_3;
 return VAR_3->buf;
}
