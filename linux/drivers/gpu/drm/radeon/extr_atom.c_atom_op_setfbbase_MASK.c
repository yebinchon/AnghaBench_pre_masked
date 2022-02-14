
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ atom_exec_context ;
struct TYPE_5__ {int fb_base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int*) ;

__attribute__((used)) static void FUNC_3(atom_exec_context *VAR_0, int *VAR_1, int VAR_2)
{
 uint8_t VAR_3 = FUNC_1((*VAR_1)++);
 FUNC_0("   fb_base: ");
 VAR_0->ctx->fb_base = FUNC_2(VAR_0, VAR_3, VAR_1);
}
