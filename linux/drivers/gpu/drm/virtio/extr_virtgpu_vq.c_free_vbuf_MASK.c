
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_vbuffer {scalar_t__ resp_size; int data_buf; int resp_buf; } ;
struct virtio_gpu_device {int vbufs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct virtio_gpu_vbuffer*) ;

__attribute__((used)) static void FUNC_2(struct virtio_gpu_device *VAR_1,
        struct virtio_gpu_vbuffer *VAR_2)
{
 if (VAR_2->resp_size > VAR_0)
  FUNC_0(VAR_2->resp_buf);
 FUNC_0(VAR_2->data_buf);
 FUNC_1(VAR_1->vbufs, VAR_2);
}
