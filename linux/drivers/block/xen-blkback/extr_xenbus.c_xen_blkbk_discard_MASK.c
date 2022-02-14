
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct xenbus_device {int dev; int nodename; } ;
struct TYPE_4__ {int discard_secure; struct block_device* bdev; } ;
struct xen_blkif {TYPE_2__ vbd; } ;
struct TYPE_3__ {int discard_granularity; int discard_alignment; } ;
struct request_queue {TYPE_1__ limits; } ;
struct block_device {int dummy; } ;
struct backend_info {struct xen_blkif* blkif; struct xenbus_device* dev; } ;


 struct request_queue* FUNC_0 (struct block_device*) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct xenbus_transaction,int ,char*,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct xenbus_transaction VAR_0, struct backend_info *VAR_1)
{
 struct xenbus_device *VAR_2 = VAR_1->dev;
 struct xen_blkif *VAR_3 = VAR_1->blkif;
 int VAR_4;
 int VAR_5 = 0;
 struct block_device *VAR_6 = VAR_1->blkif->vbd.bdev;
 struct request_queue *VAR_7 = FUNC_0(VAR_6);

 if (!FUNC_4(VAR_2->nodename, "discard-enable", 1))
  return;

 if (FUNC_1(VAR_7)) {
  VAR_4 = FUNC_3(VAR_0, VAR_2->nodename,
   "discard-granularity", "%u",
   VAR_7->limits.discard_granularity);
  if (VAR_4) {
   FUNC_2(&VAR_2->dev, "writing discard-granularity (%d)", VAR_4);
   return;
  }
  VAR_4 = FUNC_3(VAR_0, VAR_2->nodename,
   "discard-alignment", "%u",
   VAR_7->limits.discard_alignment);
  if (VAR_4) {
   FUNC_2(&VAR_2->dev, "writing discard-alignment (%d)", VAR_4);
   return;
  }
  VAR_5 = 1;

  VAR_4 = FUNC_3(VAR_0, VAR_2->nodename,
        "discard-secure", "%d",
        VAR_3->vbd.discard_secure);
  if (VAR_4) {
   FUNC_2(&VAR_2->dev, "writing discard-secure (%d)", VAR_4);
   return;
  }
 }
 VAR_4 = FUNC_3(VAR_0, VAR_2->nodename, "feature-discard",
       "%d", VAR_5);
 if (VAR_4)
  FUNC_2(&VAR_2->dev, "writing feature-discard (%d)", VAR_4);
}
