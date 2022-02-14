
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* chipset_flush ) () ;int (* write_entry ) (int ,unsigned int,unsigned int) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 () ;

void FUNC_2(dma_addr_t VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3)
{
 VAR_0.driver->write_entry(VAR_1, VAR_2, VAR_3);
 if (VAR_0.driver->chipset_flush)
  VAR_0.driver->chipset_flush();
}
