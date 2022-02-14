
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtrng_info {int have_data; int data_avail; int vq; } ;
struct virtqueue {TYPE_1__* vdev; } ;
struct TYPE_2__ {struct virtrng_info* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_0)
{
 struct virtrng_info *VAR_1 = VAR_0->vdev->priv;


 if (!FUNC_1(VAR_1->vq, &VAR_1->data_avail))
  return;

 FUNC_0(&VAR_1->have_data);
}
