
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ide_hwif_t ;
struct TYPE_4__ {int pio_mode; int dma_mode; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(ide_hwif_t *VAR_0, ide_drive_t *VAR_1)
{
 VAR_1->dma_mode = VAR_1->pio_mode;
 FUNC_0(VAR_0, VAR_1);
}
