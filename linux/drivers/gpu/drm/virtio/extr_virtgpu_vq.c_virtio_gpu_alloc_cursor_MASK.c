
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_vbuffer {scalar_t__ buf; } ;
struct virtio_gpu_update_cursor {int dummy; } ;
struct virtio_gpu_device {int dummy; } ;


 struct virtio_gpu_update_cursor* FUNC_0 (struct virtio_gpu_vbuffer*) ;
 scalar_t__ FUNC_1 (struct virtio_gpu_vbuffer*) ;
 struct virtio_gpu_vbuffer* FUNC_2 (struct virtio_gpu_device*,int,int ,int *,int *) ;

__attribute__((used)) static struct virtio_gpu_update_cursor*
FUNC_3(struct virtio_gpu_device *VAR_0,
   struct virtio_gpu_vbuffer **VAR_1)
{
 struct virtio_gpu_vbuffer *VAR_2;

 VAR_2 = FUNC_2
  (VAR_0, sizeof(struct virtio_gpu_update_cursor),
   0, ((void*)0), ((void*)0));
 if (FUNC_1(VAR_2)) {
  *VAR_1 = ((void*)0);
  return FUNC_0(VAR_2);
 }
 *VAR_1 = VAR_2;
 return (struct virtio_gpu_update_cursor *)VAR_2->buf;
}
