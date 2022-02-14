
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_device {int dummy; } ;
struct TYPE_4__ {int ws; int hvc; } ;
struct port {TYPE_2__ cons; TYPE_1__* portdev; } ;
struct TYPE_3__ {struct virtio_device* vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct port*) ;
 int FUNC_2 (struct virtio_device*) ;
 scalar_t__ FUNC_3 (struct virtio_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct port *VAR_1)
{
 struct virtio_device *VAR_2;


 if (!VAR_1 || !FUNC_1(VAR_1))
  return;

 VAR_2 = VAR_1->portdev->vdev;


 if (!FUNC_2(VAR_2) &&
     FUNC_3(VAR_2, VAR_0))
  FUNC_0(VAR_1->cons.hvc, VAR_1->cons.ws);
}
