
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {int invalidate_other; TYPE_1__* ctxs; int loaded_mm_asid; } ;
struct TYPE_3__ {int ctx_id; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(void)
{
 u16 VAR_3;





 if (!FUNC_1(VAR_1)) {
  FUNC_0(1);
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  if (VAR_3 == FUNC_2(VAR_2.loaded_mm_asid))
   continue;




  FUNC_3(VAR_2.ctxs[VAR_3].ctx_id, 0);
 }
 FUNC_3(VAR_2.invalidate_other, 0);
}
