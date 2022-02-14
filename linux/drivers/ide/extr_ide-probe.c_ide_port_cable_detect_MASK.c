
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ide_port_ops {int (* cable_detect ) (TYPE_1__*) ;} ;
struct TYPE_4__ {int ultra_mask; int cbl; struct ide_port_ops* port_ops; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(ide_hwif_t *VAR_1)
{
 const struct ide_port_ops *VAR_2 = VAR_1->port_ops;

 if (VAR_2 && VAR_2->cable_detect && (VAR_1->ultra_mask & 0x78)) {
  if (VAR_1->cbl != VAR_0)
   VAR_1->cbl = VAR_2->cable_detect(VAR_1);
 }
}
