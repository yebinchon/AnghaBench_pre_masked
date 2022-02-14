
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tx ;
struct TYPE_10__ {int dmabase; scalar_t__ vbase; } ;
struct pdc_state {int rx_status_len; int ntxpost; int nrxpost; int ring_pool; struct dma64dd* rxd_64; struct dma64dd* txd_64; TYPE_5__ rx_ring_alloc; TYPE_5__ tx_ring_alloc; TYPE_2__* regs; scalar_t__ txout; scalar_t__ tx_msg_start; scalar_t__ txin; scalar_t__ rxout; scalar_t__ last_rx_curr; scalar_t__ rx_msg_start; scalar_t__ rxin; TYPE_1__* pdev; } ;
struct pdc_ring_alloc {int dmabase; int * vbase; } ;
struct dma64dd {int ctrl1; } ;
struct TYPE_9__ {int control; int addrhigh; int addrlow; int ptr; } ;
struct TYPE_8__ {int control; int addrhigh; int addrlow; int ptr; } ;
struct dma64 {TYPE_4__ dmarcv; TYPE_3__ dmaxmt; } ;
struct device {int dummy; } ;
typedef int rx ;
struct TYPE_7__ {struct dma64* dmaregs; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,char*,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 void* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,struct pdc_ring_alloc*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct pdc_state *VAR_11, int VAR_12)
{
 int VAR_13;
 int VAR_14 = VAR_8;
 struct dma64 *VAR_15;
 struct device *VAR_16 = &VAR_11->pdev->dev;
 struct pdc_ring_alloc VAR_17;
 struct pdc_ring_alloc VAR_18;


 VAR_17.vbase = FUNC_2(VAR_11->ring_pool, VAR_4, &VAR_17.dmabase);
 if (FUNC_6(!VAR_17.vbase)) {
  VAR_14 = -VAR_3;
  goto done;
 }


 VAR_18.vbase = FUNC_2(VAR_11->ring_pool, VAR_4, &VAR_18.dmabase);
 if (FUNC_6(!VAR_18.vbase)) {
  VAR_14 = -VAR_3;
  goto fail_dealloc;
 }

 FUNC_0(VAR_16, " - base DMA addr of tx ring      %pad", &VAR_17.dmabase);
 FUNC_0(VAR_16, " - base virtual addr of tx ring  %p", VAR_17.vbase);
 FUNC_0(VAR_16, " - base DMA addr of rx ring      %pad", &VAR_18.dmabase);
 FUNC_0(VAR_16, " - base virtual addr of rx ring  %p", VAR_18.vbase);

 FUNC_5(&VAR_11->tx_ring_alloc, &VAR_17, sizeof(VAR_17));
 FUNC_5(&VAR_11->rx_ring_alloc, &VAR_18, sizeof(VAR_18));

 VAR_11->rxin = 0;
 VAR_11->rx_msg_start = 0;
 VAR_11->last_rx_curr = 0;
 VAR_11->rxout = 0;
 VAR_11->txin = 0;
 VAR_11->tx_msg_start = 0;
 VAR_11->txout = 0;


 VAR_11->txd_64 = (struct dma64dd *)VAR_11->tx_ring_alloc.vbase;
 VAR_11->rxd_64 = (struct dma64dd *)VAR_11->rx_ring_alloc.vbase;


 VAR_15 = &VAR_11->regs->dmaregs[VAR_12];


 FUNC_3(VAR_9, &VAR_15->dmaxmt.control);
 FUNC_3((VAR_6 + (VAR_11->rx_status_len << 1)),
    &VAR_15->dmarcv.control);
 FUNC_3(0, &VAR_15->dmaxmt.ptr);
 FUNC_3(0, &VAR_15->dmarcv.ptr);


 FUNC_3(FUNC_4(VAR_11->tx_ring_alloc.dmabase),
    &VAR_15->dmaxmt.addrlow);
 FUNC_3(FUNC_7(VAR_11->tx_ring_alloc.dmabase),
    &VAR_15->dmaxmt.addrhigh);

 FUNC_3(FUNC_4(VAR_11->rx_ring_alloc.dmabase),
    &VAR_15->dmarcv.addrlow);
 FUNC_3(FUNC_7(VAR_11->rx_ring_alloc.dmabase),
    &VAR_15->dmarcv.addrhigh);


 FUNC_3(VAR_9 | VAR_10, &VAR_15->dmaxmt.control);
 FUNC_3((VAR_6 | VAR_7 | (VAR_11->rx_status_len << 1)),
    &VAR_15->dmarcv.control);


 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {

  if (VAR_13 != VAR_11->ntxpost) {
   FUNC_3(VAR_2 | VAR_0,
      &VAR_11->txd_64[VAR_13].ctrl1);
  } else {

   FUNC_3(VAR_2 | VAR_0 |
      VAR_1, &VAR_11->txd_64[VAR_13].ctrl1);
  }


  if (VAR_13 != VAR_11->nrxpost) {
   FUNC_3(VAR_2,
      &VAR_11->rxd_64[VAR_13].ctrl1);
  } else {

   FUNC_3(VAR_2 | VAR_1,
      &VAR_11->rxd_64[VAR_13].ctrl1);
  }
 }
 return VAR_8;

fail_dealloc:
 FUNC_1(VAR_11->ring_pool, VAR_17.vbase, VAR_17.dmabase);
done:
 return VAR_14;
}
