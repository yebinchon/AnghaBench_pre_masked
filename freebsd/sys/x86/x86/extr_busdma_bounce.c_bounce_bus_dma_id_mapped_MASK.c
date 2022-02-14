
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int bus_size_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_4__ {int bounce_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;

__attribute__((used)) static bool
FUNC_1(bus_dma_tag_t VAR_1, vm_paddr_t VAR_2, bus_size_t VAR_3)
{

 if ((VAR_1->bounce_flags & VAR_0) == 0)
  return (1);
 return (!FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0)));
}
