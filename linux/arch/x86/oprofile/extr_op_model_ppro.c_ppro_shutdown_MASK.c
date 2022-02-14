
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_msrs {TYPE_1__* counters; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct op_msrs const * const VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  if (!VAR_3->counters[VAR_4].addr)
   continue;
  FUNC_1(VAR_1 + VAR_4);
  FUNC_0(VAR_0 + VAR_4);
 }
}
