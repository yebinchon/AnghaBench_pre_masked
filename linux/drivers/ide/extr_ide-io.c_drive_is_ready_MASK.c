
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {scalar_t__ ctl_addr; } ;
struct TYPE_13__ {int host_flags; TYPE_1__* tp_ops; TYPE_3__ io_ports; TYPE_2__* dma_ops; } ;
typedef TYPE_4__ ide_hwif_t ;
struct TYPE_14__ {scalar_t__ waiting_for_dma; TYPE_4__* hwif; } ;
typedef TYPE_5__ ide_drive_t ;
struct TYPE_11__ {int (* dma_test_irq ) (TYPE_5__*) ;} ;
struct TYPE_10__ {int (* read_altstatus ) (TYPE_4__*) ;int (* read_status ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 u8 VAR_4 = 0;

 if (VAR_2->waiting_for_dma)
  return VAR_3->dma_ops->dma_test_irq(VAR_2);

 if (VAR_3->io_ports.ctl_addr &&
     (VAR_3->host_flags & VAR_1) == 0)
  VAR_4 = VAR_3->tp_ops->read_altstatus(VAR_3);
 else

  VAR_4 = VAR_3->tp_ops->read_status(VAR_3);

 if (VAR_4 & VAR_0)

  return 0;


 return 1;
}
