
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_poke_loc {void* detour; void* addr; size_t len; scalar_t__ opcode; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (void*,void const*,size_t) ;
 int FUNC_2 (struct text_poke_loc*,int) ;

void FUNC_3(void *VAR_1, const void *VAR_2, size_t VAR_3, void *VAR_4)
{
 struct text_poke_loc VAR_5 = {
  .detour = VAR_4,
  .addr = VAR_1,
  .len = VAR_3,
 };

 if (VAR_3 > VAR_0) {
  FUNC_0(1, "len is larger than %d\n", VAR_0);
  return;
 }

 FUNC_1((void *)VAR_5.opcode, VAR_2, VAR_3);

 FUNC_2(&VAR_5, 1);
}
