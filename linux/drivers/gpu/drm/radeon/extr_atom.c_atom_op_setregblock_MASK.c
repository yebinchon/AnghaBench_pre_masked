
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ atom_exec_context ;
struct TYPE_4__ {int reg_block; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(atom_exec_context *VAR_0, int *VAR_1, int VAR_2)
{
 VAR_0->ctx->reg_block = FUNC_1(*VAR_1);
 (*VAR_1) += 2;
 FUNC_0("   base: 0x%04X\n", VAR_0->ctx->reg_block);
}
