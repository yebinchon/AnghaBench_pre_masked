
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct x86_emulate_ctxt {int regs_valid; int * _regs; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_gpr ) (struct x86_emulate_ctxt*,unsigned int) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*,unsigned int) ;

__attribute__((used)) static ulong FUNC_1(struct x86_emulate_ctxt *VAR_0, unsigned VAR_1)
{
 if (!(VAR_0->regs_valid & (1 << VAR_1))) {
  VAR_0->regs_valid |= 1 << VAR_1;
  VAR_0->_regs[VAR_1] = VAR_0->ops->read_gpr(VAR_0, VAR_1);
 }
 return VAR_0->_regs[VAR_1];
}
