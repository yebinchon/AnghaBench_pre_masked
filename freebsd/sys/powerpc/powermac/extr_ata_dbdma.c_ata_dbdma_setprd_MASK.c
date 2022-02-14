
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ata_dbdma_dmaload_args {int nsegs; scalar_t__ write; struct ata_dbdma_channel* sc; } ;
struct ata_dbdma_channel {int next_dma_slot; int dbdma_mtx; int dbdma; } ;
struct TYPE_3__ {int ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int,int,int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_8, bus_dma_segment_t *VAR_9, int VAR_10, int VAR_11)
{
 struct ata_dbdma_dmaload_args *VAR_12 = VAR_8;
 struct ata_dbdma_channel *VAR_13 = VAR_12->sc;
 int VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_5(&VAR_13->dbdma_mtx);

 VAR_16 = VAR_13->next_dma_slot-1;
 if (VAR_16 < 0)
  VAR_16 = 0xff;

 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {

  if (VAR_13->next_dma_slot == 0xff)
   VAR_14 = VAR_1;
  else
   VAR_14 = VAR_4;

  if (VAR_12->write) {
   VAR_15 = (VAR_17 + 1 < VAR_10) ? VAR_7 :
       VAR_6;
  } else {
   VAR_15 = (VAR_17 + 1 < VAR_10) ? VAR_3 :
       VAR_2;
  }

  FUNC_1(VAR_13->dbdma, VAR_13->next_dma_slot++,
      VAR_15, 0, VAR_9[VAR_17].ds_addr, VAR_9[VAR_17].ds_len,
      VAR_4, VAR_14, VAR_4, 0);

  if (VAR_14 == VAR_1)
   VAR_13->next_dma_slot = 0;
 }





 if (VAR_13->next_dma_slot == 0xff) {
  FUNC_0(VAR_13->dbdma, VAR_13->next_dma_slot, 0);
  VAR_13->next_dma_slot = 0;
 }





 FUNC_3(VAR_13->dbdma, VAR_13->next_dma_slot++);
 FUNC_2(VAR_13->dbdma, VAR_16);

 FUNC_4(VAR_13->dbdma, VAR_0);

 FUNC_6(&VAR_13->dbdma_mtx);

 VAR_12->nsegs = VAR_10;
}
