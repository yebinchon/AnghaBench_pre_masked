
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ hdr_type; } ;
struct hfi1_sdma_header {int pbc; TYPE_1__ hdr; } ;
struct verbs_txreq {int hdr_dwords; int txreq; scalar_t__ ss; struct hfi1_sdma_header phdr; } ;
struct sdma_engine {TYPE_2__* dd; } ;
struct hfi1_ahg_info {int * ahgdesc; int ahgcount; int ahgidx; int tx_flags; } ;
typedef int pbc ;
struct TYPE_5__ {int sdma_pad_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdma_engine*,int,struct verbs_txreq*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int) ;
 int FUNC_4 (TYPE_2__*,int *,struct hfi1_sdma_header*,int) ;
 int FUNC_5 (int *,int ,int,int ,int ,int *,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(
 struct sdma_engine *VAR_3,
 u32 VAR_4,
 struct verbs_txreq *VAR_5,
 struct hfi1_ahg_info *VAR_6,
 u64 VAR_7)
{
 int VAR_8 = 0;
 struct hfi1_sdma_header *VAR_9 = &VAR_5->phdr;
 u16 VAR_10 = (VAR_5->hdr_dwords + sizeof(VAR_7) / 4) << 2;
 u8 VAR_11 = 0;

 if (VAR_5->phdr.hdr.hdr_type) {




  VAR_11 = FUNC_2(VAR_10 - 8, VAR_4) +
         (VAR_0 << 2) + VAR_1;
 }
 if (!VAR_6->ahgcount) {
  VAR_8 = FUNC_5(
   &VAR_5->txreq,
   VAR_6->tx_flags,
   VAR_10 + VAR_4 +
   VAR_11,
   VAR_6->ahgidx,
   0,
   ((void*)0),
   0,
   VAR_2);
  if (VAR_8)
   goto bail_txadd;
  VAR_9->pbc = FUNC_1(VAR_7);
  VAR_8 = FUNC_4(
   VAR_3->dd,
   &VAR_5->txreq,
   VAR_9,
   VAR_10);
  if (VAR_8)
   goto bail_txadd;
 } else {
  VAR_8 = FUNC_5(
   &VAR_5->txreq,
   VAR_6->tx_flags,
   VAR_4,
   VAR_6->ahgidx,
   VAR_6->ahgcount,
   VAR_6->ahgdesc,
   VAR_10,
   VAR_2);
  if (VAR_8)
   goto bail_txadd;
 }

 if (VAR_5->ss) {
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5);
  if (VAR_8)
   goto bail_txadd;
 }


 if (VAR_11)
  VAR_8 = FUNC_3(VAR_3->dd, &VAR_5->txreq,
           VAR_3->dd->sdma_pad_phys, VAR_11);

bail_txadd:
 return VAR_8;
}
