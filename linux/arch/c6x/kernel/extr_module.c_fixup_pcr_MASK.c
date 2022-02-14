
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ Elf32_Addr ;


 int FUNC_0 (char*,int,int*,void*,int) ;
 int FUNC_1 (char*,int,int*,void*) ;

__attribute__((used)) static inline int FUNC_2(u32 *VAR_0, Elf32_Addr VAR_1, u32 VAR_2, int VAR_3)
{
 u32 VAR_4;
 long VAR_5 = (long)VAR_0 & ~31;
 long VAR_6 = ((long)VAR_1 - VAR_5) >> 2;
 long VAR_7 = (1 << VAR_2) - 1;

 if ((VAR_6 >> (VAR_2 - 1)) == 0 ||
     (VAR_6 >> (VAR_2 - 1)) == -1) {
  VAR_4 = *VAR_0;
  VAR_4 &= ~(VAR_7 << VAR_3);
  VAR_4 |= ((VAR_6 & VAR_7) << VAR_3);
  *VAR_0 = VAR_4;

  FUNC_0("REL PCR_S%d[%p] dest[%p] opcode[%08x]\n",
    VAR_2, VAR_0, (void *)VAR_1, VAR_4);

  return 0;
 }
 FUNC_1("PCR_S%d reloc %p -> %p out of range!\n",
        VAR_2, VAR_0, (void *)VAR_1);

 return -1;
}
