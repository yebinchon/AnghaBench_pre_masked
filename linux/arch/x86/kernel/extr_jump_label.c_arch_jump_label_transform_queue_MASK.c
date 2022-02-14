
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union jump_code_union {int dummy; } jump_code_union ;
struct text_poke_loc {void* addr; int len; void* detour; int opcode; } ;
struct jump_entry {int dummy; } ;
typedef enum jump_label_type { ____Placeholder_jump_label_type } jump_label_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct jump_entry*,int,union jump_code_union*,int ) ;
 int FUNC_2 (struct jump_entry*,int) ;
 scalar_t__ FUNC_3 (struct jump_entry*) ;
 scalar_t__ VAR_3 ;
 struct text_poke_loc* VAR_4 ;
 size_t VAR_5 ;

bool FUNC_4(struct jump_entry *VAR_6,
         enum jump_label_type VAR_7)
{
 struct text_poke_loc *VAR_8;
 void *VAR_9;

 if (VAR_3 == VAR_1) {



  FUNC_2(VAR_6, VAR_7);
  return 1;
 }





 if (VAR_5 == VAR_2)
  return 0;

 VAR_8 = &VAR_4[VAR_5];

 VAR_9 = (void *)FUNC_3(VAR_6);
 if (VAR_5 > 0) {
  int VAR_10 = VAR_5 - 1;
  struct text_poke_loc *VAR_11 = &VAR_4[VAR_10];

  if (FUNC_0(VAR_11->addr > VAR_9))
   return 0;
 }

 FUNC_1(VAR_6, VAR_7,
       (union jump_code_union *) &VAR_8->opcode, 0);

 VAR_8->addr = VAR_9;
 VAR_8->detour = VAR_9 + VAR_0;
 VAR_8->len = VAR_0;

 VAR_5++;

 return 1;
}
