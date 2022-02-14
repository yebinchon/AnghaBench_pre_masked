
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ide_port_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ extra_base; scalar_t__ dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(ide_hwif_t *VAR_1, const struct ide_port_info *VAR_2)
{
 VAR_1->dma_base =
  VAR_1->extra_base + FUNC_1(VAR_0);




 return FUNC_0(VAR_1);
}
