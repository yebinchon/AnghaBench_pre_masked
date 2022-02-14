
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {int dummy; } ;
struct desc_ptr {int dummy; } ;
struct TYPE_2__ {int (* get_gdt ) (int ,struct desc_ptr*) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,struct desc_ptr*) ;

__attribute__((used)) static void FUNC_2(struct x86_emulate_ctxt *VAR_1, struct desc_ptr *VAR_2)
{
 VAR_0->get_gdt(FUNC_0(VAR_1), VAR_2);
}
