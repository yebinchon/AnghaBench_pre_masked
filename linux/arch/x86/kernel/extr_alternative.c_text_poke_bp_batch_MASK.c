
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct text_poke_loc {char* addr; int len; char const* opcode; } ;
typedef int int3 ;
struct TYPE_2__ {unsigned int nr_entries; struct text_poke_loc* vec; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;

void FUNC_4(struct text_poke_loc *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;
 unsigned char VAR_6 = 0xcc;
 unsigned int VAR_7;

 FUNC_0(&VAR_2);

 VAR_0.vec = VAR_3;
 VAR_0.nr_entries = VAR_4;





 FUNC_2();




 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_3(VAR_3[VAR_7].addr, &VAR_6, sizeof(VAR_6));

 FUNC_1(VAR_1, ((void*)0), 1);




 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_3[VAR_7].len - sizeof(VAR_6) > 0) {
   FUNC_3((char *)VAR_3[VAR_7].addr + sizeof(VAR_6),
      (const char *)VAR_3[VAR_7].opcode + sizeof(VAR_6),
      VAR_3[VAR_7].len - sizeof(VAR_6));
   VAR_5++;
  }
 }

 if (VAR_5) {





  FUNC_1(VAR_1, ((void*)0), 1);
 }





 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_3(VAR_3[VAR_7].addr, VAR_3[VAR_7].opcode, sizeof(VAR_6));

 FUNC_1(VAR_1, ((void*)0), 1);




 VAR_0.vec = ((void*)0);
 VAR_0.nr_entries = 0;
}
