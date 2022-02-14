
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opcode_obj_rewrite {scalar_t__ opcode; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct opcode_obj_rewrite *VAR_2, *VAR_3;

 VAR_2 = (const struct opcode_obj_rewrite *)VAR_0;
 VAR_3 = (const struct opcode_obj_rewrite *)VAR_1;

 if (VAR_2->opcode < VAR_3->opcode)
  return (-1);
 else if (VAR_2->opcode > VAR_3->opcode)
  return (1);

 return (0);
}
