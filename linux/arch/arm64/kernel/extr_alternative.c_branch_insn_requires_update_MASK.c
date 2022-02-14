
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alt_instr {unsigned long alt_len; } ;


 scalar_t__ FUNC_0 (struct alt_instr*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct alt_instr *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_2(VAR_1))
  return 1;

 VAR_2 = (unsigned long)FUNC_0(VAR_0);
 if (VAR_1 >= VAR_2 && VAR_1 <= (VAR_2 + VAR_0->alt_len))
  return 0;





 FUNC_1();
}
