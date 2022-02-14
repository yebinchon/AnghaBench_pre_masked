
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opcode_obj_rewrite {scalar_t__ classifier; int opcode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct opcode_obj_rewrite* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,struct opcode_obj_rewrite**,struct opcode_obj_rewrite**) ;
 int FUNC_3 (struct opcode_obj_rewrite*,int ) ;
 int FUNC_4 (struct opcode_obj_rewrite*,struct opcode_obj_rewrite*,size_t) ;

int
FUNC_5(struct opcode_obj_rewrite *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 struct opcode_obj_rewrite *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_0();

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (FUNC_2(VAR_3[VAR_10].opcode, &VAR_8, &VAR_9) != 0)
   continue;

  for (VAR_7 = VAR_8; VAR_7 <= VAR_9; VAR_7++) {
   if (VAR_7->classifier != VAR_3[VAR_10].classifier)
    continue;

   VAR_6 = VAR_1 + VAR_2;
   VAR_5 = (VAR_6 - (VAR_7 + 1)) * sizeof(*VAR_7);
   FUNC_4(VAR_7, VAR_7 + 1, VAR_5);
   VAR_2--;
   break;
  }

 }

 if (VAR_2 == 0) {
  if (VAR_1 != ((void*)0))
   FUNC_3(VAR_1, VAR_0);
  VAR_1 = ((void*)0);
 }

 FUNC_1();

 return (0);
}
