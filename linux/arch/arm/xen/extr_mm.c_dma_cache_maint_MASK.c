
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev_bus_addr; } ;
struct gnttab_cache_flush {scalar_t__ offset; size_t length; TYPE_1__ a; int op; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gnttab_cache_flush*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(dma_addr_t VAR_3, size_t VAR_4, u32 VAR_5)
{
 struct gnttab_cache_flush VAR_6;

 VAR_6.a.dev_bus_addr = VAR_3 & VAR_1;
 VAR_6.offset = FUNC_1(VAR_3);
 VAR_6.op = VAR_5;

 do {
  if (VAR_4 + VAR_6.offset > VAR_2)
   VAR_6.length = VAR_2 - VAR_6.offset;
  else
   VAR_6.length = VAR_4;

  FUNC_0(VAR_0, &VAR_6, 1);

  VAR_6.offset = 0;
  VAR_6.a.dev_bus_addr += VAR_6.length;
  VAR_4 -= VAR_6.length;
 } while (VAR_4);
}
