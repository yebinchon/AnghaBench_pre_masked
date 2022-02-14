
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int nsegs; int data_map; } ;
struct fsl_sata_slot {int ttl; TYPE_4__* ccb; TYPE_2__ dma; struct fsl_sata_channel* ch; } ;
struct fsl_sata_dma_prd {void* dwc_flg; void* dba; } ;
struct fsl_sata_cmd_tab {struct fsl_sata_dma_prd* prd_tab; } ;
struct TYPE_7__ {int data_tag; } ;
struct fsl_sata_channel {TYPE_1__ dma; int dev; } ;
struct TYPE_11__ {int ds_len; int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_3__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsl_sata_cmd_tab* FUNC_0 (struct fsl_sata_channel*,struct fsl_sata_slot*) ;
 int FUNC_1 (struct fsl_sata_channel*,struct fsl_sata_slot*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct fsl_sata_slot*,int ) ;
 int FUNC_7 (struct fsl_sata_slot*) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void
FUNC_10(void *VAR_9, bus_dma_segment_t *VAR_10, int VAR_11, int VAR_12)
{
 struct fsl_sata_slot *VAR_13 = VAR_9;
 struct fsl_sata_channel *VAR_14 = VAR_13->ch;
 struct fsl_sata_cmd_tab *VAR_15;
 struct fsl_sata_dma_prd *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 if (VAR_12) {
  FUNC_5(VAR_14->dev, "DMA load error %d\n", VAR_12);
  FUNC_6(VAR_13, VAR_3);
  return;
 }
 FUNC_3(VAR_11 <= VAR_8 - 1,
     ("too many DMA segment entries\n"));

 VAR_15 = FUNC_0(VAR_14, VAR_13);

 VAR_16 = &VAR_15->prd_tab[0];
 for (VAR_17 = 0, VAR_18 = 0; VAR_17 < VAR_11; VAR_17++, VAR_18++) {
  if (VAR_18 == VAR_5 &&
      VAR_6 < VAR_11) {
   VAR_16[VAR_18].dba = FUNC_8(FUNC_1(VAR_14, VAR_13) +
         FUNC_2(VAR_18+1));
   VAR_18++;
   VAR_20 = 0;
  }
  VAR_19 = VAR_10[VAR_17].ds_len;
  VAR_19 = FUNC_9(VAR_19, sizeof(uint32_t));
  VAR_16[VAR_18].dba = FUNC_8((uint32_t)VAR_10[VAR_17].ds_addr);
  VAR_16[VAR_18].dwc_flg = FUNC_8(VAR_7 | VAR_19);
  VAR_13->ttl += VAR_19;
  if (VAR_18 > VAR_6)
   VAR_20 += VAR_19;
 }
 VAR_13->dma.nsegs = VAR_18;
 if (VAR_18 > VAR_6)
  VAR_16[VAR_5].dwc_flg =
      FUNC_8(VAR_7 | VAR_4 | VAR_20);
 FUNC_4(VAR_14->dma.data_tag, VAR_13->dma.data_map,
     ((VAR_13->ccb->ccb_h.flags & VAR_2) ?
     VAR_0 : VAR_1));
 FUNC_7(VAR_13);
}
