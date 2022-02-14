
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkfront_ring_info {int ring_lock; int work; struct blkfront_info* dev_info; int grants; int indirect_pages; } ;
struct blkfront_info {int nr_rings; struct blkfront_ring_info* rinfo; TYPE_1__* xbdev; } ;
struct TYPE_2__ {int otherend; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 struct blkfront_ring_info* FUNC_3 (int,int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,int,char*) ;
 unsigned int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct blkfront_info *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;

 FUNC_0(VAR_4->nr_rings);


 VAR_5 = FUNC_7(VAR_4->xbdev->otherend,
        "multi-queue-max-queues", 1);
 VAR_4->nr_rings = FUNC_4(VAR_5, VAR_3);

 if (!VAR_4->nr_rings)
  VAR_4->nr_rings = 1;

 VAR_4->rinfo = FUNC_3(VAR_4->nr_rings,
          sizeof(struct blkfront_ring_info),
          VAR_1);
 if (!VAR_4->rinfo) {
  FUNC_6(VAR_4->xbdev, -VAR_0, "allocating ring_info structure");
  VAR_4->nr_rings = 0;
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->nr_rings; VAR_6++) {
  struct blkfront_ring_info *VAR_7;

  VAR_7 = &VAR_4->rinfo[VAR_6];
  FUNC_1(&VAR_7->indirect_pages);
  FUNC_1(&VAR_7->grants);
  VAR_7->dev_info = VAR_4;
  FUNC_2(&VAR_7->work, VAR_2);
  FUNC_5(&VAR_7->ring_lock);
 }
 return 0;
}
