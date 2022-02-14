
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_hdr {scalar_t__ e_machine; int e_entry; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(const struct elf32_hdr *VAR_1)
{

 if (VAR_1->e_machine != VAR_0)
  return 0;


 if (VAR_1->e_entry & 3)
  return 0;

 return 1;
}
