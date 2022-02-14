
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int virtio_gpu_resp_cb ;
struct virtio_gpu_vbuffer {int size; int resp_size; void* resp_buf; void* buf; int resp_cb; } ;
struct virtio_gpu_device {int vbufs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct virtio_gpu_vbuffer* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct virtio_gpu_vbuffer* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct virtio_gpu_vbuffer*
FUNC_3(struct virtio_gpu_device *VAR_4,
      int VAR_5, int VAR_6, void *VAR_7,
      virtio_gpu_resp_cb VAR_8)
{
 struct virtio_gpu_vbuffer *VAR_9;

 VAR_9 = FUNC_2(VAR_4->vbufs, VAR_1);
 if (!VAR_9)
  return FUNC_1(-VAR_0);

 FUNC_0(VAR_5 > VAR_2);
 VAR_9->buf = (void *)VAR_9 + sizeof(*VAR_9);
 VAR_9->size = VAR_5;

 VAR_9->resp_cb = VAR_8;
 VAR_9->resp_size = VAR_6;
 if (VAR_6 <= VAR_3)
  VAR_9->resp_buf = (void *)VAR_9->buf + VAR_5;
 else
  VAR_9->resp_buf = VAR_7;
 FUNC_0(!VAR_9->resp_buf);
 return VAR_9;
}
