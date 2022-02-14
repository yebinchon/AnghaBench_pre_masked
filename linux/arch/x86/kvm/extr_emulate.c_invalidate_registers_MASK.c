
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {scalar_t__ regs_valid; scalar_t__ regs_dirty; } ;



__attribute__((used)) static void FUNC_0(struct x86_emulate_ctxt *VAR_0)
{
 VAR_0->regs_dirty = 0;
 VAR_0->regs_valid = 0;
}
