
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ide_port_ops {int (* pre_reset ) (TYPE_2__*) ;} ;
struct TYPE_9__ {scalar_t__ media; int dev_flags; int current_speed; int desired_speed; scalar_t__ io_32bit; scalar_t__ crc_count; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_8__ {struct ide_port_ops* port_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_5)
{
 const struct ide_port_ops *VAR_6 = VAR_5->hwif->port_ops;

 if (VAR_5->media == VAR_4)
  FUNC_1(VAR_5);
 else
  VAR_5->dev_flags |= VAR_1;

 if (VAR_5->dev_flags & VAR_3) {
  if (VAR_5->crc_count)
   FUNC_0(VAR_5);
  else
   FUNC_2(VAR_5);
 }

 if ((VAR_5->dev_flags & VAR_0) == 0) {
  if ((VAR_5->dev_flags & VAR_3) == 0) {
   VAR_5->dev_flags &= ~VAR_2;
   VAR_5->io_32bit = 0;
  }
  return;
 }

 if (VAR_6 && VAR_6->pre_reset)
  VAR_6->pre_reset(VAR_5);

 if (VAR_5->current_speed != 0xff)
  VAR_5->desired_speed = VAR_5->current_speed;
 VAR_5->current_speed = 0xff;
}
