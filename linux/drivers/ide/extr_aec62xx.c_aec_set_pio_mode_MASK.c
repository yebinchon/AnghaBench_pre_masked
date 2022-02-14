
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* port_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_10__ {int pio_mode; int dma_mode; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_8__ {int (* set_dma_mode ) (TYPE_2__*,TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(ide_hwif_t *VAR_0, ide_drive_t *VAR_1)
{
 VAR_1->dma_mode = VAR_1->pio_mode;
 VAR_0->port_ops->set_dma_mode(VAR_0, VAR_1);
}
