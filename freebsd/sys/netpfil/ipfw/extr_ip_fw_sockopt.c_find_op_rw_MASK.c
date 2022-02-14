
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct opcode_obj_rewrite {scalar_t__ (* classifier ) (TYPE_1__*,int *,int *) ;} ;
struct TYPE_4__ {int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 scalar_t__ FUNC_0 (int ,struct opcode_obj_rewrite**,struct opcode_obj_rewrite**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static struct opcode_obj_rewrite *
FUNC_2(ipfw_insn *VAR_0, uint16_t *VAR_1, uint8_t *VAR_2)
{
 struct opcode_obj_rewrite *VAR_3, *VAR_4, *VAR_5;
 uint16_t VAR_6;
 uint8_t VAR_7;

 if (FUNC_0(VAR_0->opcode, &VAR_4, &VAR_5) != 0)
  return (((void*)0));

 for (VAR_3 = VAR_4; VAR_3 <= VAR_5; VAR_3++) {
  if (VAR_3->classifier(VAR_0, &VAR_6, &VAR_7) == 0) {
   if (VAR_1 != ((void*)0))
    *VAR_1 = VAR_6;
   if (VAR_2 != ((void*)0))
    *VAR_2 = VAR_7;
   return (VAR_3);
  }
 }

 return (((void*)0));
}
