
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_plt_entry {int* jump; } ;
typedef int Elf32_Addr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(struct ppc_plt_entry *VAR_3, Elf32_Addr VAR_4)
{
 if (VAR_3->jump[0] != (VAR_1 | FUNC_3(VAR_2) | FUNC_0(VAR_4)))
  return 0;
 if (VAR_3->jump[1] != (VAR_0 | FUNC_3(VAR_2) | FUNC_2(VAR_2) |
          FUNC_1(VAR_4)))
  return 0;
 return 1;
}
