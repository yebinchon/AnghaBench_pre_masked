
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {TYPE_2__ dma; } ;
struct ata_dbdma_channel {int next_dma_slot; int dbdma_mtx; TYPE_1__ sc_ch; int dbdma; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct ata_dbdma_channel* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_1)
{
 struct ata_dbdma_channel *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(&VAR_2->dbdma_mtx);

 FUNC_2(VAR_2->dbdma);
 FUNC_0(VAR_2->dbdma, 0);
 VAR_2->next_dma_slot=1;
 FUNC_1(VAR_2->dbdma, 0);

 VAR_2->sc_ch.dma.flags &= ~VAR_0;

 FUNC_5(&VAR_2->dbdma_mtx);
}
