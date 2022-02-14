
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xen_blkif_ring {int * xenblkd; int irq; } ;
struct TYPE_9__ {TYPE_2__* bdev; } ;
struct xen_blkif {int nr_rings; struct xen_blkif_ring* rings; TYPE_6__* be; TYPE_3__ vbd; } ;
struct TYPE_11__ {TYPE_4__* dev; } ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_8__ {TYPE_1__* bd_inode; } ;
struct TYPE_7__ {int i_mapping; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct xen_blkif*,char*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,struct xen_blkif_ring*,char*,char*,int) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_4__*,int,char*) ;
 int FUNC_9 (TYPE_4__*,int,char*,char*,int) ;

__attribute__((used)) static void FUNC_10(struct xen_blkif *VAR_3)
{
 int VAR_4;
 char VAR_5[VAR_0];
 struct xen_blkif_ring *VAR_6;
 int VAR_7;


 if (!VAR_3->rings || !VAR_3->rings[0].irq || !VAR_3->vbd.bdev)
  return;


 if (VAR_3->be->dev->state == VAR_1)
  return;


 FUNC_3(VAR_3->be);
 if (VAR_3->be->dev->state != VAR_1)
  return;

 VAR_4 = FUNC_2(VAR_3, VAR_5);
 if (VAR_4) {
  FUNC_8(VAR_3->be->dev, VAR_4, "get blkback dev name");
  return;
 }

 VAR_4 = FUNC_4(VAR_3->vbd.bdev->bd_inode->i_mapping);
 if (VAR_4) {
  FUNC_8(VAR_3->be->dev, VAR_4, "block flush");
  return;
 }
 FUNC_5(VAR_3->vbd.bdev->bd_inode->i_mapping);

 for (VAR_7 = 0; VAR_7 < VAR_3->nr_rings; VAR_7++) {
  VAR_6 = &VAR_3->rings[VAR_7];
  VAR_6->xenblkd = FUNC_6(VAR_2, VAR_6, "%s-%d", VAR_5, VAR_7);
  if (FUNC_0(VAR_6->xenblkd)) {
   VAR_4 = FUNC_1(VAR_6->xenblkd);
   VAR_6->xenblkd = ((void*)0);
   FUNC_9(VAR_3->be->dev, VAR_4,
     "start %s-%d xenblkd", VAR_5, VAR_7);
   goto out;
  }
 }
 return;

out:
 while (--VAR_7 >= 0) {
  VAR_6 = &VAR_3->rings[VAR_7];
  FUNC_7(VAR_6->xenblkd);
 }
 return;
}
