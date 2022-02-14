
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ dma; } ;
struct ata_dbdma_channel {int dbdma; TYPE_2__ sc_ch; } ;
struct ata_channel {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct ata_dbdma_channel *VAR_5 = FUNC_3(VAR_4);
 struct ata_channel *VAR_6 = FUNC_3(VAR_4);

 if (VAR_5->sc_ch.dma.flags & VAR_1) {
  return (!(FUNC_2(VAR_5->dbdma) &
      VAR_3));
 }

 if (FUNC_0(VAR_6, VAR_0) & VAR_2) {
  FUNC_1(100);
  if (FUNC_0(VAR_6, VAR_0) & VAR_2)
   return 0;
 }
 return 1;
}
