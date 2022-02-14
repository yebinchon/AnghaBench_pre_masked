
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct lima_vm {TYPE_1__* bts; } ;
struct TYPE_2__ {scalar_t__* cpu; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lima_vm *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = VAR_2; VAR_4 <= VAR_3; VAR_4 += VAR_0) {
  u32 VAR_5 = FUNC_1(VAR_4);
  u32 VAR_6 = FUNC_0(VAR_4);

  VAR_1->bts[VAR_5].cpu[VAR_6] = 0;
 }
}
