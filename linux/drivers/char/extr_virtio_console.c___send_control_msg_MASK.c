
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct virtqueue {int dummy; } ;
struct virtio_console_control {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {void* value; void* event; int id; } ;
struct ports_device {int c_ovq_lock; TYPE_1__ cpkt; int vdev; struct virtqueue* c_ovq; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct scatterlist*,TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ports_device*) ;
 scalar_t__ FUNC_7 (struct virtqueue*,struct scatterlist*,int,TYPE_1__*,int ) ;
 int FUNC_8 (struct virtqueue*,unsigned int*) ;
 int FUNC_9 (struct virtqueue*) ;
 int FUNC_10 (struct virtqueue*) ;

__attribute__((used)) static ssize_t FUNC_11(struct ports_device *VAR_1, u32 VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 struct scatterlist VAR_5[1];
 struct virtqueue *VAR_6;
 unsigned int VAR_7;

 if (!FUNC_6(VAR_1))
  return 0;

 VAR_6 = VAR_1->c_ovq;

 FUNC_4(&VAR_1->c_ovq_lock);

 VAR_1->cpkt.id = FUNC_2(VAR_1->vdev, VAR_2);
 VAR_1->cpkt.event = FUNC_1(VAR_1->vdev, VAR_3);
 VAR_1->cpkt.value = FUNC_1(VAR_1->vdev, VAR_4);

 FUNC_3(VAR_5, &VAR_1->cpkt, sizeof(struct virtio_console_control));

 if (FUNC_7(VAR_6, VAR_5, 1, &VAR_1->cpkt, VAR_0) == 0) {
  FUNC_10(VAR_6);
  while (!FUNC_8(VAR_6, &VAR_7)
   && !FUNC_9(VAR_6))
   FUNC_0();
 }

 FUNC_5(&VAR_1->c_ovq_lock);
 return 0;
}
