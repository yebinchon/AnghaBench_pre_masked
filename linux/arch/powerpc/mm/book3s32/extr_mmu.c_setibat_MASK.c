
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_bat {unsigned long batu; int batl; } ;
typedef int phys_addr_t ;
typedef int pgprot_t ;


 struct ppc_bat** VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(int VAR_7, unsigned long VAR_8, phys_addr_t VAR_9,
      unsigned int VAR_10, pgprot_t VAR_11)
{
 unsigned int VAR_12 = (VAR_10 >> 17) - 1;
 int VAR_13;
 struct ppc_bat *VAR_14 = VAR_0[VAR_7];
 unsigned long VAR_15 = FUNC_2(VAR_11);

 if (!FUNC_1(VAR_3))
  VAR_15 &= ~VAR_4;

 VAR_13 = (VAR_15 & VAR_4) | (VAR_5 ? VAR_1 : VAR_2);
 VAR_14[0].batu = VAR_8 | (VAR_12 << 2) | 2;
 VAR_14[0].batl = FUNC_0(VAR_9) | VAR_13;
 if (VAR_15 & VAR_6)
  VAR_14[0].batu |= 1;
}
