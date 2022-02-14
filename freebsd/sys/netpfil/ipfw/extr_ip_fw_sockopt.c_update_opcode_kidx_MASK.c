
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct opcode_obj_rewrite {int (* update ) (TYPE_1__*,int ) ;} ;
struct TYPE_5__ {int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int FUNC_0 (int ,char*) ;
 struct opcode_obj_rewrite* FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void
FUNC_3(ipfw_insn *VAR_0, uint16_t VAR_1)
{
 struct opcode_obj_rewrite *VAR_2;

 VAR_2 = FUNC_1(VAR_0, ((void*)0), ((void*)0));
 FUNC_0(VAR_2 != ((void*)0), ("No handler to update opcode %d", VAR_0->opcode));
 VAR_2->update(VAR_0, VAR_1);
}
