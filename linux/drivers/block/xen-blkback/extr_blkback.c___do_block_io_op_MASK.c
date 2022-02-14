
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ req_cons; scalar_t__ rsp_prod_pvt; TYPE_1__* sring; } ;
union blkif_back_rings {TYPE_4__ common; int x86_64; int x86_32; int native; } ;
struct xen_blkif_ring {TYPE_3__* blkif; int st_oo_req; union blkif_back_rings blk_rings; } ;
struct pending_req {int dummy; } ;
struct blkif_request {int operation; } ;
typedef int req ;
struct TYPE_7__ {int pdevice; } ;
struct TYPE_8__ {int blk_protocol; TYPE_2__ vbd; } ;
struct TYPE_6__ {scalar_t__ req_prod; } ;
typedef scalar_t__ RING_IDX ;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__) ;
 struct pending_req* FUNC_4 (struct xen_blkif_ring*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct blkif_request*,int ) ;
 int FUNC_7 (struct blkif_request*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct xen_blkif_ring*,struct blkif_request*) ;
 int FUNC_10 (struct xen_blkif_ring*,struct blkif_request*,struct pending_req*) ;
 int FUNC_11 (struct xen_blkif_ring*,struct blkif_request*,struct pending_req*) ;
 int FUNC_12 (struct xen_blkif_ring*,struct pending_req*) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (struct blkif_request*,int ,int) ;
 int FUNC_15 (char*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_16 () ;

__attribute__((used)) static int
FUNC_17(struct xen_blkif_ring *VAR_1)
{
 union blkif_back_rings *VAR_2 = &VAR_1->blk_rings;
 struct blkif_request VAR_3;
 struct pending_req *VAR_4;
 RING_IDX VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_2->common.req_cons;
 VAR_6 = VAR_2->common.sring->req_prod;
 FUNC_16();

 if (FUNC_3(&VAR_2->common, VAR_6)) {
  VAR_5 = VAR_2->common.rsp_prod_pvt;
  FUNC_15("Frontend provided bogus ring requests (%d - %d = %d). Halting ring processing on dev=%04x\n",
   VAR_6, VAR_5, VAR_6 - VAR_5, VAR_1->blkif->vbd.pdevice);
  return -VAR_0;
 }
 while (VAR_5 != VAR_6) {

  if (FUNC_2(&VAR_2->common, VAR_5))
   break;

  if (FUNC_13()) {
   VAR_7 = 1;
   break;
  }

  VAR_4 = FUNC_4(VAR_1);
  if (((void*)0) == VAR_4) {
   VAR_1->st_oo_req++;
   VAR_7 = 1;
   break;
  }

  switch (VAR_1->blkif->blk_protocol) {
  case 130:
   FUNC_14(&VAR_3, FUNC_1(&VAR_2->native, VAR_5), sizeof(VAR_3));
   break;
  case 129:
   FUNC_6(&VAR_3, FUNC_1(&VAR_2->x86_32, VAR_5));
   break;
  case 128:
   FUNC_7(&VAR_3, FUNC_1(&VAR_2->x86_64, VAR_5));
   break;
  default:
   FUNC_0();
  }
  VAR_2->common.req_cons = ++VAR_5;


  FUNC_5();

  switch (VAR_3.operation) {
  case 133:
  case 132:
  case 131:
  case 135:
  case 134:
   if (FUNC_11(VAR_1, &VAR_3, VAR_4))
    goto done;
   break;
  case 136:
   FUNC_12(VAR_1, VAR_4);
   if (FUNC_9(VAR_1, &VAR_3))
    goto done;
   break;
  default:
   if (FUNC_10(VAR_1, &VAR_3, VAR_4))
    goto done;
   break;
  }


  FUNC_8();
 }
done:
 return VAR_7;
}
