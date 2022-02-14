
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slb_cache_ptr; unsigned long* slb_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_0))
  return;




 VAR_4 = VAR_2->slb_cache_ptr;
 if (VAR_4 < VAR_1) {




  VAR_2->slb_cache[VAR_4++] = VAR_3 >> 28;
  VAR_2->slb_cache_ptr++;
 } else {





  VAR_2->slb_cache_ptr = VAR_1 + 1;
 }
}
