
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_pat_mem_phys_mem_location {int dimm_slot; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct pdc_pat_mem_phys_mem_location*,unsigned long) ;
 int FUNC_2 (char*,unsigned long,char*,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct pdc_pat_mem_phys_mem_location VAR_4;
 unsigned long VAR_5;
 char VAR_6[32];

 VAR_5 = VAR_3 & VAR_1;


 if (FUNC_0()) {
  FUNC_1(&VAR_4, VAR_5);
  FUNC_3(VAR_6, "DIMM slot %02x, ", VAR_4.dimm_slot);
 } else
  VAR_6[0] = 0;

 FUNC_2("PDT: BAD MEMORY at 0x%08lx, %s%s%s-bit error.\n",
  VAR_5, VAR_6,
  VAR_3 & VAR_0 ? "permanent ":"",
  VAR_3 & VAR_2 ? "single":"multi");
}
