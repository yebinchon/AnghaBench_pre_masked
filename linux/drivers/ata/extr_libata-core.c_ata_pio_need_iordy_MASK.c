
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_device {scalar_t__ pio_mode; int id; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {int pflags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

unsigned int FUNC_2(const struct ata_device *VAR_5)
{




 if (VAR_5->link->ap->pflags & VAR_1)
  return 0;



 if (VAR_5->link->ap->flags & VAR_0)
  return 0;

 if (FUNC_1(VAR_5->id)
     && (VAR_5->pio_mode == VAR_3 || VAR_5->pio_mode == VAR_4))
  return 0;

 if (VAR_5->pio_mode > VAR_2)
  return 1;

 if (FUNC_0(VAR_5->id))
  return 1;
 return 0;
}
