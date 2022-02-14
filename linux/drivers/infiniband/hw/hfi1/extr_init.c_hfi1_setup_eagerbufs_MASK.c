
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_6__ {size_t group_size; } ;
struct hfi1_devdata {TYPE_2__* pcidev; TYPE_1__ rcv_entries; } ;
struct TYPE_10__ {size_t size; size_t rcvtid_size; size_t alloced; size_t count; size_t numbufs; TYPE_3__* buffers; TYPE_4__* rcvtids; int threshold; } ;
struct hfi1_ctxtdata {size_t rcv_array_groups; size_t expected_count; size_t expected_base; size_t eager_base; TYPE_5__ egrbufs; int ctxt; int flags; struct hfi1_devdata* dd; } ;
typedef int gfp_t ;
struct TYPE_9__ {scalar_t__ addr; scalar_t__ dma; } ;
struct TYPE_8__ {scalar_t__ dma; size_t len; scalar_t__ addr; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (struct hfi1_devdata*,char*,int ) ;
 int * FUNC_3 (int *,size_t,scalar_t__*,int) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,char*,int ,int,...) ;
 int VAR_9 ;
 int FUNC_6 (struct hfi1_devdata*,size_t,int ,scalar_t__,size_t) ;
 int FUNC_7 (int,int ,size_t*) ;
 size_t FUNC_8 (unsigned long,int ) ;
 int FUNC_9 (int) ;
 size_t FUNC_10 (int,size_t) ;
 size_t FUNC_11 (int ) ;

int FUNC_12(struct hfi1_ctxtdata *VAR_10)
{
 struct hfi1_devdata *VAR_11 = VAR_10->dd;
 u32 VAR_12, VAR_13, VAR_14 = 0;
 gfp_t VAR_15;
 u16 VAR_16, VAR_17 = 0;
 int VAR_18 = 0;
 u16 VAR_19 = FUNC_11(VAR_9);







 VAR_15 = VAR_8 | VAR_7 | VAR_6;
 if (VAR_10->egrbufs.size < (VAR_19 * VAR_11->rcv_entries.group_size))
  VAR_10->egrbufs.size = VAR_19 * VAR_11->rcv_entries.group_size;




 if (!FUNC_0(VAR_10->flags, VAR_3))
  VAR_10->egrbufs.rcvtid_size = VAR_19;





 if (VAR_10->egrbufs.size <= (1 << 20))
  VAR_10->egrbufs.rcvtid_size = FUNC_8((unsigned long)VAR_19,
   FUNC_9(VAR_10->egrbufs.size / 8));

 while (VAR_14 < VAR_10->egrbufs.size &&
        VAR_10->egrbufs.alloced < VAR_10->egrbufs.count) {
  VAR_10->egrbufs.buffers[VAR_17].addr =
   FUNC_3(&VAR_11->pcidev->dev,
        VAR_10->egrbufs.rcvtid_size,
        &VAR_10->egrbufs.buffers[VAR_17].dma,
        VAR_15);
  if (VAR_10->egrbufs.buffers[VAR_17].addr) {
   VAR_10->egrbufs.buffers[VAR_17].len =
    VAR_10->egrbufs.rcvtid_size;
   VAR_10->egrbufs.rcvtids[VAR_10->egrbufs.alloced].addr =
    VAR_10->egrbufs.buffers[VAR_17].addr;
   VAR_10->egrbufs.rcvtids[VAR_10->egrbufs.alloced].dma =
    VAR_10->egrbufs.buffers[VAR_17].dma;
   VAR_10->egrbufs.alloced++;
   VAR_14 += VAR_10->egrbufs.rcvtid_size;
   VAR_17++;
  } else {
   u32 VAR_20, VAR_21, VAR_22;
   u64 VAR_23 = 0;







   if (VAR_10->egrbufs.rcvtid_size == VAR_19 ||
       !FUNC_0(VAR_10->flags, VAR_3)) {
    FUNC_2(VAR_11, "ctxt%u: Failed to allocate eager buffers\n",
        VAR_10->ctxt);
    VAR_18 = -VAR_1;
    goto bail_rcvegrbuf_phys;
   }

   VAR_20 = VAR_10->egrbufs.rcvtid_size / 2;






   if (VAR_17 == 0) {
    VAR_10->egrbufs.rcvtid_size = VAR_20;
    continue;
   }





   VAR_10->egrbufs.alloced = 0;
   for (VAR_21 = 0, VAR_22 = 0, VAR_23 = 0; VAR_22 < VAR_17; VAR_21++) {
    if (VAR_21 >= VAR_10->egrbufs.count)
     break;
    VAR_10->egrbufs.rcvtids[VAR_21].dma =
     VAR_10->egrbufs.buffers[VAR_22].dma + VAR_23;
    VAR_10->egrbufs.rcvtids[VAR_21].addr =
     VAR_10->egrbufs.buffers[VAR_22].addr + VAR_23;
    VAR_10->egrbufs.alloced++;
    if ((VAR_10->egrbufs.buffers[VAR_22].dma + VAR_23 +
         VAR_20) ==
        (VAR_10->egrbufs.buffers[VAR_22].dma +
         VAR_10->egrbufs.buffers[VAR_22].len)) {
     VAR_22++;
     VAR_23 = 0;
    } else {
     VAR_23 += VAR_20;
    }
   }
   VAR_10->egrbufs.rcvtid_size = VAR_20;
  }
 }
 VAR_10->egrbufs.numbufs = VAR_17;
 VAR_10->egrbufs.size = VAR_14;

 FUNC_5(VAR_4,
    "ctxt%u: Alloced %u rcv tid entries @ %uKB, total %uKB\n",
    VAR_10->ctxt, VAR_10->egrbufs.alloced,
    VAR_10->egrbufs.rcvtid_size / 1024, VAR_10->egrbufs.size / 1024);






 VAR_10->egrbufs.threshold =
  FUNC_9(VAR_10->egrbufs.alloced / 2);





 VAR_12 = VAR_10->rcv_array_groups * VAR_11->rcv_entries.group_size;
 VAR_13 = FUNC_10(VAR_10->egrbufs.alloced, VAR_11->rcv_entries.group_size);
 VAR_10->expected_count = VAR_12 - VAR_13;
 if (VAR_10->expected_count > VAR_2 * 2)
  VAR_10->expected_count = VAR_2 * 2;

 VAR_10->expected_base = VAR_10->eager_base + VAR_13;
 FUNC_5(VAR_4, "ctxt%u: eager:%u, exp:%u, egrbase:%u, expbase:%u\n",
    VAR_10->ctxt, VAR_10->egrbufs.alloced, VAR_10->expected_count,
    VAR_10->eager_base, VAR_10->expected_base);

 if (!FUNC_7(VAR_10->egrbufs.rcvtid_size, VAR_5, &VAR_16)) {
  FUNC_5(VAR_4,
     "ctxt%u: current Eager buffer size is invalid %u\n",
     VAR_10->ctxt, VAR_10->egrbufs.rcvtid_size);
  VAR_18 = -VAR_0;
  goto bail_rcvegrbuf_phys;
 }

 for (VAR_17 = 0; VAR_17 < VAR_10->egrbufs.alloced; VAR_17++) {
  FUNC_6(VAR_11, VAR_10->eager_base + VAR_17, VAR_5,
        VAR_10->egrbufs.rcvtids[VAR_17].dma, VAR_16);
  FUNC_1();
 }

 return 0;

bail_rcvegrbuf_phys:
 for (VAR_17 = 0; VAR_17 < VAR_10->egrbufs.alloced &&
      VAR_10->egrbufs.buffers[VAR_17].addr;
      VAR_17++) {
  FUNC_4(&VAR_11->pcidev->dev,
      VAR_10->egrbufs.buffers[VAR_17].len,
      VAR_10->egrbufs.buffers[VAR_17].addr,
      VAR_10->egrbufs.buffers[VAR_17].dma);
  VAR_10->egrbufs.buffers[VAR_17].addr = ((void*)0);
  VAR_10->egrbufs.buffers[VAR_17].dma = 0;
  VAR_10->egrbufs.buffers[VAR_17].len = 0;
 }

 return VAR_18;
}
