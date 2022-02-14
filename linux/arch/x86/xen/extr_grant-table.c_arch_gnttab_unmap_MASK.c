
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_6__ {int ** ptes; } ;
struct TYPE_5__ {int ** ptes; TYPE_1__* area; } ;
struct TYPE_4__ {void* addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long,int *,int ) ;

void FUNC_2(void *VAR_4, unsigned long VAR_5)
{
 pte_t **VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 if (VAR_4 == VAR_2.area->addr)
  VAR_6 = VAR_2.ptes;
 else
  VAR_6 = VAR_1.ptes;

 VAR_7 = (unsigned long)VAR_4;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_1(&VAR_3, VAR_7, VAR_6[VAR_8], FUNC_0(0));
  VAR_7 += VAR_0;
 }
}
