
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {int dummy; } ;
struct TYPE_2__ {int mm; } ;
struct operand {scalar_t__ type; TYPE_1__ addr; int mm_val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct x86_emulate_ctxt*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct x86_emulate_ctxt *VAR_1,
           struct operand *VAR_2)
{
 if (VAR_2->type == VAR_0)
  FUNC_0(VAR_1, &VAR_2->mm_val, VAR_2->addr.mm);
}
