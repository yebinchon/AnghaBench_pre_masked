
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_gpu_vbuffer {int list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct list_head*) ;
 struct virtio_gpu_vbuffer* FUNC_2 (struct virtqueue*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct virtqueue *VAR_0, struct list_head *VAR_1)
{
 struct virtio_gpu_vbuffer *VAR_2;
 unsigned int VAR_3;
 int VAR_4 = 0;

 while ((VAR_2 = FUNC_2(VAR_0, &VAR_3))) {
  FUNC_1(&VAR_2->list, VAR_1);
  VAR_4++;
 }
 if (VAR_4 == 0)
  FUNC_0("Huh? zero vbufs reclaimed");
}
