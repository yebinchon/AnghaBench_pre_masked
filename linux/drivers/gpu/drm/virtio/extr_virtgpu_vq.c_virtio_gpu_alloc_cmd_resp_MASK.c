
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int virtio_gpu_resp_cb ;
struct virtio_gpu_vbuffer {scalar_t__ buf; } ;
struct virtio_gpu_device {int dummy; } ;
typedef void virtio_gpu_command ;


 void* FUNC_0 (struct virtio_gpu_vbuffer*) ;
 scalar_t__ FUNC_1 (struct virtio_gpu_vbuffer*) ;
 struct virtio_gpu_vbuffer* FUNC_2 (struct virtio_gpu_device*,int,int,void*,int ) ;

__attribute__((used)) static void *FUNC_3(struct virtio_gpu_device *VAR_0,
           virtio_gpu_resp_cb VAR_1,
           struct virtio_gpu_vbuffer **VAR_2,
           int VAR_3, int VAR_4,
           void *VAR_5)
{
 struct virtio_gpu_vbuffer *VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_3,
       VAR_4, VAR_5, VAR_1);
 if (FUNC_1(VAR_6)) {
  *VAR_2 = ((void*)0);
  return FUNC_0(VAR_6);
 }
 *VAR_2 = VAR_6;
 return (struct virtio_gpu_command *)VAR_6->buf;
}
