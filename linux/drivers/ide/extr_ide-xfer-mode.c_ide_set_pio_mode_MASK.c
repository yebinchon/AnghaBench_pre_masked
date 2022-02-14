
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct ide_port_ops {int (* set_pio_mode ) (TYPE_1__*,TYPE_2__*) ;int * set_dma_mode; } ;
struct TYPE_11__ {int host_flags; struct ide_port_ops* port_ops; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_12__ {int pio_mode; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int const) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

int FUNC_4(ide_drive_t *VAR_2, const u8 VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 const struct ide_port_ops *VAR_5 = VAR_4->port_ops;

 if (VAR_4->host_flags & VAR_0)
  return 0;

 if (VAR_5 == ((void*)0) || VAR_5->set_pio_mode == ((void*)0))
  return -1;





 if (VAR_5->set_dma_mode == ((void*)0)) {
  VAR_2->pio_mode = VAR_3;
  VAR_5->set_pio_mode(VAR_4, VAR_2);
  return 0;
 }

 if (VAR_4->host_flags & VAR_1) {
  if (FUNC_0(VAR_2, VAR_3))
   return -1;
  VAR_2->pio_mode = VAR_3;
  VAR_5->set_pio_mode(VAR_4, VAR_2);
  return 0;
 } else {
  VAR_2->pio_mode = VAR_3;
  VAR_5->set_pio_mode(VAR_4, VAR_2);
  return FUNC_0(VAR_2, VAR_3);
 }
}
