
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct xenbus_device {char* nodename; int dev; } ;
struct blkfront_ring_info {TYPE_5__* shadow; } ;
struct blkfront_info {int nr_ring_pages; unsigned int nr_rings; struct blkfront_ring_info* rinfo; TYPE_1__* xbdev; } ;
struct TYPE_7__ {unsigned int id; } ;
struct TYPE_8__ {TYPE_2__ rw; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_10__ {TYPE_4__ req; } ;
struct TYPE_6__ {int otherend; } ;


 int FUNC_0 (struct blkfront_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct blkfront_info*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct blkfront_info*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t,int ) ;
 int FUNC_7 (char*,int ,size_t) ;
 unsigned int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct blkfront_info*) ;
 int FUNC_12 (struct xenbus_device*,struct blkfront_ring_info*) ;
 int FUNC_13 (char*,size_t,char*,char*,unsigned int) ;
 size_t FUNC_14 (char*) ;
 int FUNC_15 (struct xenbus_transaction,struct blkfront_ring_info*,char*) ;
 int VAR_8 ;
 int FUNC_16 (struct xenbus_device*,int,char*,...) ;
 int FUNC_17 (struct xenbus_transaction,char*,char*,char*,int) ;
 unsigned int FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (struct xenbus_device*,int ) ;
 int FUNC_20 (struct xenbus_transaction,int) ;
 int FUNC_21 (struct xenbus_transaction*) ;

__attribute__((used)) static int FUNC_22(struct xenbus_device *VAR_9,
      struct blkfront_info *VAR_10)
{
 const char *VAR_11 = ((void*)0);
 struct xenbus_transaction VAR_12;
 int VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16;

 if (!VAR_10)
  return -VAR_1;

 VAR_15 = FUNC_18(VAR_10->xbdev->otherend,
           "max-ring-page-order", 0);
 VAR_16 = FUNC_8(VAR_8, VAR_15);
 VAR_10->nr_ring_pages = 1 << VAR_16;

 VAR_13 = FUNC_11(VAR_10);
 if (VAR_13)
  goto destroy_blkring;

 for (VAR_14 = 0; VAR_14 < VAR_10->nr_rings; VAR_14++) {
  struct blkfront_ring_info *VAR_17 = &VAR_10->rinfo[VAR_14];


  VAR_13 = FUNC_12(VAR_9, VAR_17);
  if (VAR_13)
   goto destroy_blkring;
 }

again:
 VAR_13 = FUNC_21(&VAR_12);
 if (VAR_13) {
  FUNC_16(VAR_9, VAR_13, "starting transaction");
  goto destroy_blkring;
 }

 if (VAR_10->nr_ring_pages > 1) {
  VAR_13 = FUNC_17(VAR_12, VAR_9->nodename, "ring-page-order", "%u",
        VAR_16);
  if (VAR_13) {
   VAR_11 = "writing ring-page-order";
   goto abort_transaction;
  }
 }


 if (VAR_10->nr_rings == 1) {
  VAR_13 = FUNC_15(VAR_12, &VAR_10->rinfo[0], VAR_9->nodename);
  if (VAR_13)
   goto destroy_blkring;
 } else {
  char *VAR_18;
  size_t VAR_19;

  VAR_13 = FUNC_17(VAR_12, VAR_9->nodename, "multi-queue-num-queues", "%u",
        VAR_10->nr_rings);
  if (VAR_13) {
   VAR_11 = "writing multi-queue-num-queues";
   goto abort_transaction;
  }

  VAR_19 = FUNC_14(VAR_9->nodename) + VAR_4;
  VAR_18 = FUNC_6(VAR_19, VAR_3);
  if (!VAR_18) {
   VAR_13 = -VAR_2;
   VAR_11 = "ENOMEM while writing ring references";
   goto abort_transaction;
  }

  for (VAR_14 = 0; VAR_14 < VAR_10->nr_rings; VAR_14++) {
   FUNC_7(VAR_18, 0, VAR_19);
   FUNC_13(VAR_18, VAR_19, "%s/queue-%u", VAR_9->nodename, VAR_14);
   VAR_13 = FUNC_15(VAR_12, &VAR_10->rinfo[VAR_14], VAR_18);
   if (VAR_13) {
    FUNC_5(VAR_18);
    goto destroy_blkring;
   }
  }
  FUNC_5(VAR_18);
 }
 VAR_13 = FUNC_17(VAR_12, VAR_9->nodename, "protocol", "%s",
       VAR_5);
 if (VAR_13) {
  VAR_11 = "writing protocol";
  goto abort_transaction;
 }
 VAR_13 = FUNC_17(VAR_12, VAR_9->nodename,
       "feature-persistent", "%u", 1);
 if (VAR_13)
  FUNC_3(&VAR_9->dev,
    "writing persistent grants feature to xenbus");

 VAR_13 = FUNC_20(VAR_12, 0);
 if (VAR_13) {
  if (VAR_13 == -VAR_0)
   goto again;
  FUNC_16(VAR_9, VAR_13, "completing transaction");
  goto destroy_blkring;
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->nr_rings; VAR_14++) {
  unsigned int VAR_20;
  struct blkfront_ring_info *VAR_21 = &VAR_10->rinfo[VAR_14];

  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_10); VAR_20++)
   VAR_21->shadow[VAR_20].req.u.rw.id = VAR_20 + 1;
  VAR_21->shadow[FUNC_0(VAR_10)-1].req.u.rw.id = 0x0fffffff;
 }
 FUNC_19(VAR_9, VAR_6);

 return 0;

 abort_transaction:
 FUNC_20(VAR_12, 1);
 if (VAR_11)
  FUNC_16(VAR_9, VAR_13, "%s", VAR_11);
 destroy_blkring:
 FUNC_1(VAR_10, 0);

 FUNC_9(&VAR_7);
 FUNC_4(VAR_10);
 FUNC_10(&VAR_7);

 FUNC_2(&VAR_9->dev, ((void*)0));

 return VAR_13;
}
