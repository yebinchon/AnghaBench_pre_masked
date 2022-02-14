
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ptes; TYPE_1__* area; } ;
struct TYPE_3__ {void* addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *,unsigned long,int ,int ) ;

int FUNC_2(unsigned long *VAR_4, unsigned long VAR_5,
      unsigned long VAR_6,
      void **VAR_7)
{
 void *VAR_8 = *VAR_7;
 unsigned long VAR_9;
 unsigned long VAR_10;

 if (VAR_8 == ((void*)0))
  *VAR_7 = VAR_8 = VAR_2.area->addr;

 VAR_9 = (unsigned long)VAR_8;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_1(&VAR_3, VAR_9, VAR_2.ptes[VAR_10],
      FUNC_0(VAR_4[VAR_10], VAR_0));
  VAR_9 += VAR_1;
 }

 return 0;
}
