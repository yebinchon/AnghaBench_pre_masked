
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtqueue {TYPE_3__* vdev; } ;
struct TYPE_5__ {int hvc; } ;
struct port {TYPE_2__ cons; int waitqueue; int inbuf_lock; TYPE_1__* portdev; int guest_connected; int inbuf; } ;
struct TYPE_6__ {int priv; } ;
struct TYPE_4__ {int vdev; } ;


 int FUNC_0 (struct port*) ;
 struct port* FUNC_1 (int ,struct virtqueue*) ;
 int FUNC_2 (struct virtqueue*,int) ;
 int FUNC_3 (struct port*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct port*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct port*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct virtqueue *VAR_0)
{
 struct port *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_1(VAR_0->vdev->priv, VAR_0);
 if (!VAR_1) {
  FUNC_2(VAR_0, 0);
  return;
 }

 FUNC_9(&VAR_1->inbuf_lock, VAR_2);
 VAR_1->inbuf = FUNC_3(VAR_1);
 if (!VAR_1->guest_connected && !FUNC_7(VAR_1->portdev->vdev))
  FUNC_0(VAR_1);


 FUNC_8(VAR_1);

 FUNC_10(&VAR_1->inbuf_lock, VAR_2);

 FUNC_11(&VAR_1->waitqueue);

 if (FUNC_6(VAR_1) && FUNC_5(VAR_1->cons.hvc))
  FUNC_4();
}
