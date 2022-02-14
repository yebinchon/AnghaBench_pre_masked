
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; } ;
struct TYPE_4__ {int segsize; int reset; int load; int stop; int start; } ;
struct TYPE_6__ {TYPE_2__ hw; TYPE_1__ dma; } ;
struct ata_dbdma_channel {int next_dma_slot; int dbdma_mtx; TYPE_3__ sc_ch; int dbdma; int dbdma_offset; int dbdma_regs; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int) ;
 struct ata_dbdma_channel* FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int *,int ) ;

void
FUNC_7(device_t VAR_7)
{
 struct ata_dbdma_channel *VAR_8 = FUNC_5(VAR_7);
 int VAR_9;

 VAR_9 = FUNC_2(VAR_8->dbdma_regs, VAR_8->dbdma_offset,
     FUNC_1(VAR_7), 256, &VAR_8->dbdma);

 FUNC_4(VAR_8->dbdma,1 << 7, 1 << 7);

 FUNC_3(VAR_8->dbdma,0);
 VAR_8->next_dma_slot=1;

 VAR_8->sc_ch.dma.start = VAR_4;
 VAR_8->sc_ch.dma.stop = VAR_6;
 VAR_8->sc_ch.dma.load = VAR_2;
 VAR_8->sc_ch.dma.reset = VAR_3;





 VAR_8->sc_ch.dma.segsize = 126 * VAR_0;
 FUNC_0(VAR_7);

 VAR_8->sc_ch.hw.status = VAR_5;

 FUNC_6(&VAR_8->dbdma_mtx, "ATA DBDMA", ((void*)0), VAR_1);
}
