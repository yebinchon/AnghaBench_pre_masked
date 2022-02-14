
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct op_msrs {TYPE_1__* controls; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct op_msrs const * const VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (!VAR_2[FUNC_1(VAR_5)])
   continue;
  FUNC_2(VAR_3->controls[VAR_5].addr, VAR_4);
  VAR_4 |= VAR_0;
  FUNC_3(VAR_3->controls[VAR_5].addr, VAR_4);
 }

 FUNC_0();
}
