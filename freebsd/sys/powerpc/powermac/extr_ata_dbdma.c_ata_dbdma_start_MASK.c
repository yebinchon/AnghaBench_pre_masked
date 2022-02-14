
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_request {int parent; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ dma; } ;
struct ata_dbdma_channel {int dbdma; TYPE_2__ sc_ch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ata_dbdma_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct ata_request *VAR_1)
{
 struct ata_dbdma_channel *VAR_2 = FUNC_1(VAR_1->parent);

 VAR_2->sc_ch.dma.flags |= VAR_0;
 FUNC_0(VAR_2->dbdma);
 return 0;
}
