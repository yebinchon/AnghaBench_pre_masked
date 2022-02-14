
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ atom_exec_context ;
struct TYPE_6__ {int * divmul; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int ,int*,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(atom_exec_context *VAR_0, int *VAR_1, int VAR_2)
{
 uint64_t VAR_3;
 uint8_t VAR_4 = FUNC_1((*VAR_1)++);
 uint32_t VAR_5, VAR_6;
 FUNC_0("   src1: ");
 VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_4, VAR_1, ((void*)0), 1);
 FUNC_0("   src2: ");
 VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_1);
 VAR_3 = (uint64_t)VAR_5 * (uint64_t)VAR_6;
 VAR_0->ctx->divmul[0] = FUNC_4(VAR_3);
 VAR_0->ctx->divmul[1] = FUNC_5(VAR_3);
}
