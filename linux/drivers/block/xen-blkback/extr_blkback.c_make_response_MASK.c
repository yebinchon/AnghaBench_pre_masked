
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rsp_prod_pvt; } ;
struct TYPE_6__ {int rsp_prod_pvt; } ;
union blkif_back_rings {TYPE_2__ common; TYPE_3__ x86_64; TYPE_3__ x86_32; TYPE_3__ native; } ;
typedef int u64 ;
struct xen_blkif_ring {int irq; int blk_ring_lock; TYPE_1__* blkif; union blkif_back_rings blk_rings; } ;
struct blkif_response {unsigned short operation; int status; int id; } ;
struct TYPE_4__ {int blk_protocol; } ;





 int FUNC_0 () ;
 struct blkif_response* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct xen_blkif_ring *VAR_0, u64 VAR_1,
     unsigned short VAR_2, int VAR_3)
{
 struct blkif_response *VAR_4;
 unsigned long VAR_5;
 union blkif_back_rings *VAR_6;
 int VAR_7;

 FUNC_4(&VAR_0->blk_ring_lock, VAR_5);
 VAR_6 = &VAR_0->blk_rings;

 switch (VAR_0->blkif->blk_protocol) {
 case 130:
  VAR_4 = FUNC_1(&VAR_6->native,
      VAR_6->native.rsp_prod_pvt);
  break;
 case 129:
  VAR_4 = FUNC_1(&VAR_6->x86_32,
      VAR_6->x86_32.rsp_prod_pvt);
  break;
 case 128:
  VAR_4 = FUNC_1(&VAR_6->x86_64,
      VAR_6->x86_64.rsp_prod_pvt);
  break;
 default:
  FUNC_0();
 }

 VAR_4->id = VAR_1;
 VAR_4->operation = VAR_2;
 VAR_4->status = VAR_3;

 VAR_6->common.rsp_prod_pvt++;
 FUNC_2(&VAR_6->common, VAR_7);
 FUNC_5(&VAR_0->blk_ring_lock, VAR_5);
 if (VAR_7)
  FUNC_3(VAR_0->irq);
}
