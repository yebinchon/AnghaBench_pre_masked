
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opcode_obj_rewrite {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct opcode_obj_rewrite* VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (struct opcode_obj_rewrite*,int ) ;
 struct opcode_obj_rewrite* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct opcode_obj_rewrite*,struct opcode_obj_rewrite*,size_t) ;
 int FUNC_5 (struct opcode_obj_rewrite*,size_t,int,int ) ;

void
FUNC_6(struct opcode_obj_rewrite *VAR_6, size_t VAR_7)
{
 size_t VAR_8;
 struct opcode_obj_rewrite *VAR_9;

 FUNC_0();

 for (;;) {
  VAR_8 = VAR_5 + VAR_7;
  FUNC_1();
  VAR_9 = FUNC_3(sizeof(*VAR_6) * VAR_8, VAR_0, VAR_1 | VAR_2);
  FUNC_0();
  if (VAR_5 + VAR_7 <= VAR_8)
   break;


  FUNC_2(VAR_9, VAR_0);
 }


 VAR_8 = VAR_5 + VAR_7;
 FUNC_4(VAR_9, VAR_4, VAR_5 * sizeof(*VAR_6));
 FUNC_4(&VAR_9[VAR_5], VAR_6, VAR_7 * sizeof(*VAR_6));
 FUNC_5(VAR_9, VAR_8, sizeof(*VAR_6), VAR_3);

 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_4, VAR_0);
 VAR_4 = VAR_9;
 VAR_5 = VAR_8;

 FUNC_1();
}
