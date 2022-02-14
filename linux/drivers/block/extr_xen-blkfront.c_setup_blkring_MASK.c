
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
struct blkif_sring {int dummy; } ;
struct TYPE_2__ {int * sring; } ;
struct blkfront_ring_info {int irq; int evtchn; int * ring_ref; TYPE_1__ ring; struct blkfront_info* dev_info; } ;
struct blkfront_info {unsigned long nr_ring_pages; } ;
typedef int grant_ref_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct blkif_sring*,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct blkif_sring*) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,char*,struct blkfront_ring_info*) ;
 int FUNC_4 (struct blkfront_info*,int ) ;
 int VAR_6 ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct xenbus_device*,int *) ;
 int FUNC_8 (struct xenbus_device*,int,char*) ;
 int FUNC_9 (struct xenbus_device*,int *,int,int *) ;

__attribute__((used)) static int FUNC_10(struct xenbus_device *VAR_7,
    struct blkfront_ring_info *VAR_8)
{
 struct blkif_sring *VAR_9;
 int VAR_10, VAR_11;
 struct blkfront_info *VAR_12 = VAR_8->dev_info;
 unsigned long VAR_13 = VAR_12->nr_ring_pages * VAR_4;
 grant_ref_t VAR_14[VAR_3];

 for (VAR_11 = 0; VAR_11 < VAR_12->nr_ring_pages; VAR_11++)
  VAR_8->ring_ref[VAR_11] = VAR_2;

 VAR_9 = (struct blkif_sring *)FUNC_2(VAR_1 | VAR_5,
             FUNC_6(VAR_13));
 if (!VAR_9) {
  FUNC_8(VAR_7, -VAR_0, "allocating shared ring");
  return -VAR_0;
 }
 FUNC_1(VAR_9);
 FUNC_0(&VAR_8->ring, VAR_9, VAR_13);

 VAR_10 = FUNC_9(VAR_7, VAR_8->ring.sring, VAR_12->nr_ring_pages, VAR_14);
 if (VAR_10 < 0) {
  FUNC_5((unsigned long)VAR_9, FUNC_6(VAR_13));
  VAR_8->ring.sring = ((void*)0);
  goto fail;
 }
 for (VAR_11 = 0; VAR_11 < VAR_12->nr_ring_pages; VAR_11++)
  VAR_8->ring_ref[VAR_11] = VAR_14[VAR_11];

 VAR_10 = FUNC_7(VAR_7, &VAR_8->evtchn);
 if (VAR_10)
  goto fail;

 VAR_10 = FUNC_3(VAR_8->evtchn, VAR_6, 0,
     "blkif", VAR_8);
 if (VAR_10 <= 0) {
  FUNC_8(VAR_7, VAR_10,
     "bind_evtchn_to_irqhandler failed");
  goto fail;
 }
 VAR_8->irq = VAR_10;

 return 0;
fail:
 FUNC_4(VAR_12, 0);
 return VAR_10;
}
