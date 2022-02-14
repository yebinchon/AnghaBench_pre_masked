
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_xor; int max_pq; int cap_mask; int device_prep_dma_interrupt; int device_prep_dma_xor_val; int device_prep_dma_pq_val; int device_prep_dma_pq; int device_prep_dma_xor; int device_prep_dma_memcpy; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; } ;
struct ppc440spe_adma_device {int id; TYPE_1__ common; int dev; } ;
struct dma_cdb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (char*,int ,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_5(struct ppc440spe_adma_device *VAR_19)
{
 switch (VAR_19->id) {
 case 130:
 case 129:
  FUNC_1(VAR_3, VAR_19->common.cap_mask);
  FUNC_1(VAR_2, VAR_19->common.cap_mask);
  FUNC_1(VAR_4, VAR_19->common.cap_mask);
  FUNC_1(VAR_5, VAR_19->common.cap_mask);
  FUNC_1(VAR_7, VAR_19->common.cap_mask);
  break;
 case 128:
  FUNC_1(VAR_6, VAR_19->common.cap_mask);
  FUNC_1(VAR_4, VAR_19->common.cap_mask);
  FUNC_1(VAR_2, VAR_19->common.cap_mask);
  VAR_19->common.cap_mask = VAR_19->common.cap_mask;
  break;
 }


 VAR_19->common.device_alloc_chan_resources =
    VAR_9;
 VAR_19->common.device_free_chan_resources =
    VAR_10;
 VAR_19->common.device_tx_status = VAR_18;
 VAR_19->common.device_issue_pending = VAR_11;


 if (FUNC_2(VAR_3, VAR_19->common.cap_mask)) {
  VAR_19->common.device_prep_dma_memcpy =
   VAR_13;
 }
 if (FUNC_2(VAR_6, VAR_19->common.cap_mask)) {
  VAR_19->common.max_xor = VAR_8;
  VAR_19->common.device_prep_dma_xor =
   VAR_16;
 }
 if (FUNC_2(VAR_4, VAR_19->common.cap_mask)) {
  switch (VAR_19->id) {
  case 130:
   FUNC_3(&VAR_19->common,
    VAR_0 / sizeof(struct dma_cdb), 0);
   break;
  case 129:
   FUNC_3(&VAR_19->common,
    VAR_1 / sizeof(struct dma_cdb), 0);
   break;
  case 128:
   VAR_19->common.max_pq = VAR_8 * 3;
   break;
  }
  VAR_19->common.device_prep_dma_pq =
   VAR_14;
 }
 if (FUNC_2(VAR_5, VAR_19->common.cap_mask)) {
  switch (VAR_19->id) {
  case 130:
   VAR_19->common.max_pq = VAR_0 /
      sizeof(struct dma_cdb);
   break;
  case 129:
   VAR_19->common.max_pq = VAR_1 /
      sizeof(struct dma_cdb);
   break;
  }
  VAR_19->common.device_prep_dma_pq_val =
   VAR_15;
 }
 if (FUNC_2(VAR_7, VAR_19->common.cap_mask)) {
  switch (VAR_19->id) {
  case 130:
   VAR_19->common.max_xor = VAR_0 /
      sizeof(struct dma_cdb);
   break;
  case 129:
   VAR_19->common.max_xor = VAR_1 /
      sizeof(struct dma_cdb);
   break;
  }
  VAR_19->common.device_prep_dma_xor_val =
   VAR_17;
 }
 if (FUNC_2(VAR_2, VAR_19->common.cap_mask)) {
  VAR_19->common.device_prep_dma_interrupt =
   VAR_12;
 }
 FUNC_4("%s: AMCC(R) PPC440SP(E) ADMA Engine: "
   "( %s%s%s%s%s%s)\n",
   FUNC_0(VAR_19->dev),
   FUNC_2(VAR_4, VAR_19->common.cap_mask) ? "pq " : "",
   FUNC_2(VAR_5, VAR_19->common.cap_mask) ? "pq_val " : "",
   FUNC_2(VAR_6, VAR_19->common.cap_mask) ? "xor " : "",
   FUNC_2(VAR_7, VAR_19->common.cap_mask) ? "xor_val " : "",
   FUNC_2(VAR_3, VAR_19->common.cap_mask) ? "memcpy " : "",
   FUNC_2(VAR_2, VAR_19->common.cap_mask) ? "intr " : "");
}
