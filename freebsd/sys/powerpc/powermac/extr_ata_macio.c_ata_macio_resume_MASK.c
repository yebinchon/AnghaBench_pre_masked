
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attached; } ;
struct ata_dbdma_channel {int dbdma; TYPE_1__ sc_ch; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ata_dbdma_channel* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct ata_dbdma_channel *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (!VAR_1->sc_ch.attached)
  return (0);

 FUNC_1(VAR_1->dbdma);
 VAR_2 = FUNC_0(VAR_0);

 return (VAR_2);
}
