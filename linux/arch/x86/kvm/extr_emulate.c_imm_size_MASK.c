
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {int d; int op_bytes; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(struct x86_emulate_ctxt *VAR_1)
{
 unsigned VAR_2;

 VAR_2 = (VAR_1->d & VAR_0) ? 1 : VAR_1->op_bytes;
 if (VAR_2 == 8)
  VAR_2 = 4;
 return VAR_2;
}
