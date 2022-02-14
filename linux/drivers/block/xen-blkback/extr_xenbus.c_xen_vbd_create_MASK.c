
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_vbd {int readonly; int flush_support; int discard_secure; int type; struct block_device* bdev; int size; int pdevice; int handle; } ;
struct xen_blkif {int domid; struct xen_vbd vbd; } ;
struct request_queue {int queue_flags; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int blkif_vdev_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct request_queue* FUNC_2 (struct block_device*) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 struct block_device* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct xen_vbd*) ;
 int FUNC_9 (struct xen_vbd*) ;

__attribute__((used)) static int FUNC_10(struct xen_blkif *VAR_8, blkif_vdev_t VAR_9,
     unsigned VAR_10, unsigned VAR_11, int VAR_12,
     int VAR_13)
{
 struct xen_vbd *VAR_14;
 struct block_device *VAR_15;
 struct request_queue *VAR_16;

 VAR_14 = &VAR_8->vbd;
 VAR_14->handle = VAR_9;
 VAR_14->readonly = VAR_12;
 VAR_14->type = 0;

 VAR_14->pdevice = FUNC_1(VAR_10, VAR_11);

 VAR_15 = FUNC_4(VAR_14->pdevice, VAR_14->readonly ?
     VAR_1 : VAR_2, ((void*)0));

 if (FUNC_0(VAR_15)) {
  FUNC_6("xen_vbd_create: device %08x could not be opened\n",
   VAR_14->pdevice);
  return -VAR_0;
 }

 VAR_14->bdev = VAR_15;
 if (VAR_14->bdev->bd_disk == ((void*)0)) {
  FUNC_6("xen_vbd_create: device %08x doesn't exist\n",
   VAR_14->pdevice);
  FUNC_9(VAR_14);
  return -VAR_0;
 }
 VAR_14->size = FUNC_8(VAR_14);

 if (VAR_14->bdev->bd_disk->flags & VAR_3 || VAR_13)
  VAR_14->type |= VAR_6;
 if (VAR_14->bdev->bd_disk->flags & VAR_4)
  VAR_14->type |= VAR_7;

 VAR_16 = FUNC_2(VAR_15);
 if (VAR_16 && FUNC_7(VAR_5, &VAR_16->queue_flags))
  VAR_14->flush_support = 1;

 if (VAR_16 && FUNC_3(VAR_16))
  VAR_14->discard_secure = 1;

 FUNC_5("Successful creation of handle=%04x (dom=%u)\n",
  VAR_9, VAR_8->domid);
 return 0;
}
