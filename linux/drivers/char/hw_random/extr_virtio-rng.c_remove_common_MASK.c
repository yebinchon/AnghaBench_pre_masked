
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtrng_info {int hwrng_removed; int busy; int index; int hwrng; scalar_t__ hwrng_register_done; int have_data; scalar_t__ data_avail; } ;
struct virtio_device {TYPE_1__* config; struct virtrng_info* priv; } ;
struct TYPE_2__ {int (* del_vqs ) (struct virtio_device*) ;int (* reset ) (struct virtio_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct virtrng_info*) ;
 int VAR_0 ;
 int FUNC_4 (struct virtio_device*) ;
 int FUNC_5 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_6(struct virtio_device *VAR_1)
{
 struct virtrng_info *VAR_2 = VAR_1->priv;

 VAR_2->hwrng_removed = 1;
 VAR_2->data_avail = 0;
 FUNC_0(&VAR_2->have_data);
 VAR_1->config->reset(VAR_1);
 VAR_2->busy = 0;
 if (VAR_2->hwrng_register_done)
  FUNC_1(&VAR_2->hwrng);
 VAR_1->config->del_vqs(VAR_1);
 FUNC_2(&VAR_0, VAR_2->index);
 FUNC_3(VAR_2);
}
