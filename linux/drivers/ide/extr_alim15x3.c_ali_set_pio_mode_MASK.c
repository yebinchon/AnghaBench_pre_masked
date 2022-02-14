
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct ide_timing {int dummy; } ;
typedef int ide_hwif_t ;
struct TYPE_8__ {scalar_t__ media; scalar_t__ dma_mode; scalar_t__ pio_mode; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,TYPE_1__*,struct ide_timing*,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,struct ide_timing*,unsigned long,int) ;
 int FUNC_4 (struct ide_timing*,struct ide_timing*,struct ide_timing*,int) ;

__attribute__((used)) static void FUNC_5(ide_hwif_t *VAR_4, ide_drive_t *VAR_5)
{
 ide_drive_t *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = VAR_3 ? VAR_3 : 33;
 unsigned long VAR_8 = 1000000 / VAR_7;
 struct ide_timing VAR_9;

 FUNC_3(VAR_5, VAR_5->pio_mode, &VAR_9, VAR_8, 1);
 if (VAR_6) {
  struct ide_timing VAR_10;

  FUNC_3(VAR_6, VAR_6->pio_mode, &VAR_10, VAR_8, 1);
  FUNC_4(&VAR_10, &VAR_9, &VAR_9,
   VAR_1 | VAR_0);
  if (VAR_6->dma_mode) {
   FUNC_3(VAR_6, VAR_6->dma_mode, &VAR_10, VAR_8, 1);
   FUNC_4(&VAR_10, &VAR_9, &VAR_9,
    VAR_1 | VAR_0);
  }
 }




 FUNC_0(VAR_4, VAR_5, (VAR_5->media == VAR_2) ? 0x05 : 0x00);

 FUNC_1(VAR_4, VAR_5, &VAR_9, 0);
}
