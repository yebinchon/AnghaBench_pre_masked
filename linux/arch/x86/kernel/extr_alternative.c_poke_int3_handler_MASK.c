
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct text_poke_loc {void* addr; scalar_t__ detour; } ;
struct pt_regs {unsigned long ip; } ;
typedef int int3 ;
struct TYPE_2__ {int nr_entries; struct text_poke_loc* vec; } ;


 TYPE_1__ VAR_0 ;
 struct text_poke_loc* FUNC_0 (void*,struct text_poke_loc*,int,int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

int FUNC_5(struct pt_regs *VAR_2)
{
 struct text_poke_loc *VAR_3;
 unsigned char VAR_4 = 0xcc;
 void *VAR_5;
 FUNC_2();

 if (FUNC_1(!VAR_0.nr_entries))
  return 0;

 if (FUNC_4(VAR_2))
  return 0;




 VAR_5 = (void *) VAR_2->ip - sizeof(VAR_4);




 if (FUNC_3(VAR_0.nr_entries > 1)) {
  VAR_3 = FUNC_0(VAR_5, VAR_0.vec, VAR_0.nr_entries,
        sizeof(struct text_poke_loc),
        VAR_1);
  if (!VAR_3)
   return 0;
 } else {
  VAR_3 = VAR_0.vec;
  if (VAR_3->addr != VAR_5)
   return 0;
 }


 VAR_2->ip = (unsigned long) VAR_3->detour;

 return 1;
}
