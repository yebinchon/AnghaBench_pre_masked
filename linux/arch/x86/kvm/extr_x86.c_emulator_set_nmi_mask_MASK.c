
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {int dummy; } ;
struct TYPE_2__ {int (* set_nmi_mask ) (int ,int) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct x86_emulate_ctxt *VAR_1, bool VAR_2)
{
 VAR_0->set_nmi_mask(FUNC_0(VAR_1), VAR_2);
}
