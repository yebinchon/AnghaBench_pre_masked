
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_emulate_ctxt {int dummy; } ;
struct TYPE_3__ {int halt_request; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 TYPE_2__* FUNC_0 (struct x86_emulate_ctxt*) ;

__attribute__((used)) static void FUNC_1(struct x86_emulate_ctxt *VAR_0)
{
 FUNC_0(VAR_0)->arch.halt_request = 1;
}
