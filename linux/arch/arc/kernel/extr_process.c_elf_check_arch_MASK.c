
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_hdr {scalar_t__ e_machine; unsigned int e_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,...) ;

int FUNC_3(const struct elf32_hdr *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4->e_machine != VAR_2) {
  FUNC_2("ELF not built for %s ISA\n",
   FUNC_1() ? "ARCompact":"ARCv2");
  return 0;
 }

 VAR_5 = VAR_4->e_flags;
 if ((VAR_5 & VAR_1) != VAR_0) {
  FUNC_2("ABI mismatch - you need newer toolchain\n");
  FUNC_0(VAR_3);
  return 0;
 }

 return 1;
}
