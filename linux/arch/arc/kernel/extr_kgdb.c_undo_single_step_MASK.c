
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {scalar_t__ armed; scalar_t__* address; int * opcode; scalar_t__ is_branch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (void*,int *,scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_2)
{
 if (VAR_1.armed) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < (VAR_1.is_branch ? 2 : 1); VAR_3++) {
   FUNC_1((void *) VAR_1.address[VAR_3],
    &VAR_1.opcode[VAR_3],
    VAR_0);

   FUNC_0(VAR_1.address[VAR_3],
    VAR_1.address[VAR_3] +
    VAR_0);
  }
  VAR_1.armed = 0;
 }
}
