
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * sring; } ;
struct TYPE_6__ {TYPE_2__ common; int x86_64; int x86_32; int native; } ;
struct xen_blkif_ring {int irq; TYPE_3__ blk_rings; scalar_t__ blk_ring; struct xen_blkif* blkif; } ;
struct xen_blkif {int blk_protocol; TYPE_1__* be; int domid; } ;
struct blkif_x86_64_sring {int dummy; } ;
typedef struct blkif_x86_64_sring blkif_x86_32_sring ;
typedef struct blkif_x86_64_sring blkif_sring ;
typedef int grant_ref_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,struct blkif_x86_64_sring*,unsigned int) ;



 int FUNC_1 () ;
 unsigned int VAR_0 ;
 int FUNC_2 (int ,unsigned int,int ,int ,char*,struct xen_blkif_ring*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,unsigned int,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct xen_blkif_ring *VAR_2, grant_ref_t *VAR_3,
    unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 struct xen_blkif *VAR_7 = VAR_2->blkif;


 if (VAR_2->irq)
  return 0;

 VAR_6 = FUNC_3(VAR_7->be->dev, VAR_3, VAR_4,
         &VAR_2->blk_ring);
 if (VAR_6 < 0)
  return VAR_6;

 switch (VAR_7->blk_protocol) {
 case 130:
 {
  struct blkif_sring *VAR_8;
  VAR_8 = (struct blkif_sring *)VAR_2->blk_ring;
  FUNC_0(&VAR_2->blk_rings.native, VAR_8,
          VAR_0 * VAR_4);
  break;
 }
 case 129:
 {
  struct blkif_x86_32_sring *VAR_9;
  VAR_9 = (struct blkif_x86_32_sring *)VAR_2->blk_ring;
  FUNC_0(&VAR_2->blk_rings.x86_32, VAR_9,
          VAR_0 * VAR_4);
  break;
 }
 case 128:
 {
  struct blkif_x86_64_sring *VAR_10;
  VAR_10 = (struct blkif_x86_64_sring *)VAR_2->blk_ring;
  FUNC_0(&VAR_2->blk_rings.x86_64, VAR_10,
          VAR_0 * VAR_4);
  break;
 }
 default:
  FUNC_1();
 }

 VAR_6 = FUNC_2(VAR_7->domid, VAR_5,
          VAR_1, 0,
          "blkif-backend", VAR_2);
 if (VAR_6 < 0) {
  FUNC_4(VAR_7->be->dev, VAR_2->blk_ring);
  VAR_2->blk_rings.common.sring = ((void*)0);
  return VAR_6;
 }
 VAR_2->irq = VAR_6;

 return 0;
}
