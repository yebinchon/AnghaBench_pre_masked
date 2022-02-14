
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct ata_request {int parent; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ dma; } ;
struct ata_dbdma_channel {TYPE_2__ sc_ch; int dbdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ata_dbdma_channel* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct ata_request *VAR_5)
{
 struct ata_dbdma_channel *VAR_6 = FUNC_3(VAR_5->parent);

 uint16_t VAR_7;

 VAR_7 = FUNC_1(VAR_6->dbdma);

 FUNC_2(VAR_6->dbdma);
 VAR_6->sc_ch.dma.flags &= ~VAR_0;

 if (VAR_7 & VAR_3) {
  FUNC_4(VAR_5->parent,"DBDMA dead, resetting "
      "channel...\n");
  FUNC_0(VAR_5->parent);
  return VAR_1;
 }

 if (!(VAR_7 & VAR_4)) {
  FUNC_4(VAR_5->parent,"DBDMA confused, stop called "
      "when channel is not running!\n");
  return VAR_1;
 }

 if (VAR_7 & VAR_2) {
  FUNC_4(VAR_5->parent,"DBDMA channel stopped "
      "prematurely\n");
  return VAR_1;
 }
 return 0;
}
