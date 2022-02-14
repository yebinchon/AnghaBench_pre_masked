
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ide_port_ops {int (* set_pio_mode ) (TYPE_1__*,TYPE_2__*) ;} ;
struct TYPE_11__ {int host_flags; int lock; struct ide_port_ops* port_ops; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_12__ {int dev_flags; scalar_t__ pio_mode; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(ide_drive_t *VAR_6, int VAR_7)
{
 ide_hwif_t *VAR_8 = VAR_6->hwif;
 const struct ide_port_ops *VAR_9 = VAR_8->port_ops;

 if (VAR_7 < 0 || VAR_7 > 255)
  return -VAR_0;

 if (VAR_9 == ((void*)0) || VAR_9->set_pio_mode == ((void*)0) ||
     (VAR_8->host_flags & VAR_3))
  return -VAR_1;

 if (FUNC_2(VAR_6->hwif, VAR_7)) {
  VAR_6->pio_mode = VAR_7 + VAR_5;

  if (VAR_7 == 8 || VAR_7 == 9) {
   unsigned long VAR_10;


   FUNC_3(&VAR_8->lock, VAR_10);
   VAR_9->set_pio_mode(VAR_8, VAR_6);
   FUNC_4(&VAR_8->lock, VAR_10);
  } else
   VAR_9->set_pio_mode(VAR_8, VAR_6);
 } else {
  int VAR_11 = !!(VAR_6->dev_flags & VAR_2);

  FUNC_1(VAR_6, VAR_7);

  if (VAR_8->host_flags & VAR_4) {
   if (VAR_11)
    FUNC_0(VAR_6);
  }
 }

 return 0;
}
