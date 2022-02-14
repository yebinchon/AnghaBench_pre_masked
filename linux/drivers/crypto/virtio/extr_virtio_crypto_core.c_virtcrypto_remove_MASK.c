
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {TYPE_1__* config; int dev; struct virtio_crypto* priv; } ;
struct virtio_crypto {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct virtio_device*) ;} ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct virtio_crypto*) ;
 int FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtio_crypto*) ;
 int FUNC_4 (struct virtio_crypto*) ;
 scalar_t__ FUNC_5 (struct virtio_crypto*) ;
 int FUNC_6 (struct virtio_crypto*) ;
 int FUNC_7 (struct virtio_crypto*) ;
 int FUNC_8 (struct virtio_crypto*) ;

__attribute__((used)) static void FUNC_9(struct virtio_device *VAR_0)
{
 struct virtio_crypto *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_0->dev, "Start virtcrypto_remove.\n");

 if (FUNC_5(VAR_1))
  FUNC_6(VAR_1);
 VAR_0->config->reset(VAR_0);
 FUNC_8(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_7(VAR_1);
 FUNC_1(VAR_1);
}
