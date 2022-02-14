
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uleb128_t ;
struct unwind_state {TYPE_1__* regs; } ;
typedef enum item_location { ____Placeholder_item_location } item_location ;
struct TYPE_2__ {int where; size_t value; } ;


 size_t FUNC_0 (TYPE_1__*) ;




 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(uleb128_t VAR_0, enum item_location VAR_1, uleb128_t VAR_2,
       struct unwind_state *VAR_3)
{
 if (VAR_0 < FUNC_0(VAR_3->regs)) {
  VAR_3->regs[VAR_0].where = VAR_1;
  VAR_3->regs[VAR_0].value = VAR_2;
 }
}
