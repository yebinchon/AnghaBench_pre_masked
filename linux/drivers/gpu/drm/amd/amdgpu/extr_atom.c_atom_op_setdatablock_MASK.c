
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int start; TYPE_1__* ctx; } ;
typedef TYPE_2__ atom_exec_context ;
struct TYPE_4__ {int data_block; scalar_t__ data_table; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(atom_exec_context *VAR_0, int *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_2(*VAR_1);
 (*VAR_1)++;
 FUNC_0("   block: %d\n", VAR_3);
 if (!VAR_3)
  VAR_0->ctx->data_block = 0;
 else if (VAR_3 == 255)
  VAR_0->ctx->data_block = VAR_0->start;
 else
  VAR_0->ctx->data_block = FUNC_1(VAR_0->ctx->data_table + 4 + 2 * VAR_3);
 FUNC_0("   base: 0x%04X\n", VAR_0->ctx->data_block);
}
