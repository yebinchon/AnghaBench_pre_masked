
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pamu_mmap_regs {int olal; int olah; int obal; int obah; int splal; int splah; int spbal; int spbah; int pplal; int pplah; int ppbal; int ppbah; } ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_11, unsigned long VAR_12,
     phys_addr_t VAR_13, phys_addr_t VAR_14,
     phys_addr_t VAR_15)
{
 u32 *VAR_16;
 struct pamu_mmap_regs *VAR_17;

 VAR_16 = (u32 *) (VAR_11 + VAR_4);
 VAR_17 = (struct pamu_mmap_regs *)
  (VAR_11 + VAR_3);



 FUNC_1(&VAR_17->ppbah, FUNC_2(VAR_13));
 FUNC_1(&VAR_17->ppbal, FUNC_0(VAR_13));
 VAR_13 = VAR_13 + VAR_1;
 FUNC_1(&VAR_17->pplah, FUNC_2(VAR_13));
 FUNC_1(&VAR_17->pplal, FUNC_0(VAR_13));

 FUNC_1(&VAR_17->spbah, FUNC_2(VAR_14));
 FUNC_1(&VAR_17->spbal, FUNC_0(VAR_14));
 VAR_14 = VAR_14 + VAR_10;
 FUNC_1(&VAR_17->splah, FUNC_2(VAR_14));
 FUNC_1(&VAR_17->splal, FUNC_0(VAR_14));

 FUNC_1(&VAR_17->obah, FUNC_2(VAR_15));
 FUNC_1(&VAR_17->obal, FUNC_0(VAR_15));
 VAR_15 = VAR_15 + VAR_0;
 FUNC_1(&VAR_17->olah, FUNC_2(VAR_15));
 FUNC_1(&VAR_17->olal, FUNC_0(VAR_15));







 FUNC_1((u32 *)(VAR_11 + VAR_9),
   VAR_2);
 FUNC_1(VAR_16, VAR_6 | VAR_5 | VAR_8 | VAR_7);
 return 0;
}
