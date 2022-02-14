
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int linker_file_t ;
typedef int (* elf_lookup_fn ) (int ,scalar_t__,int,int*) ;
struct TYPE_2__ {int r_offset; int r_addend; int r_info; } ;
typedef int Elf_Word ;
typedef scalar_t__ Elf_Size ;
typedef TYPE_1__ Elf_Rela ;
typedef int Elf_Addr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,scalar_t__) ;
 int VAR_8 ;

int
FUNC_14(linker_file_t VAR_9, Elf_Addr VAR_10, const void *VAR_11, int VAR_12,
    elf_lookup_fn VAR_13)
{
 const Elf_Rela *VAR_14;
 Elf_Word *VAR_15;
 Elf_Addr *VAR_16;
 Elf_Size VAR_17, VAR_18;
 Elf_Addr VAR_19;
 Elf_Addr VAR_20;
 Elf_Addr VAR_21;
 int VAR_22;

 if (VAR_12 != VAR_0)
  return (-1);

 VAR_14 = (const Elf_Rela *)VAR_11;
 VAR_16 = (Elf_Addr *)(VAR_10 + VAR_14->r_offset);
 VAR_15 = (Elf_Word *)VAR_16;
 VAR_17 = FUNC_1(VAR_14->r_info);
 VAR_18 = FUNC_2(VAR_14->r_info);

 if (VAR_17 == VAR_5 || VAR_17 == VAR_7)
  return (0);

 if (VAR_17 == VAR_3 || VAR_17 == VAR_1 ||
     VAR_17 >= FUNC_12(VAR_8)) {
  FUNC_13("kldload: unexpected relocation type %ld\n", VAR_17);
  return (-1);
 }

 if (FUNC_8(VAR_17)) {
  FUNC_13("kldload: unaligned relocation type %ld\n", VAR_17);
  return (-1);
 }

 VAR_19 = VAR_14->r_addend;

 if (FUNC_6(VAR_17)) {
  VAR_22 = VAR_13(VAR_9, VAR_18, 1, &VAR_21);
  if (VAR_22 != 0)
   return (-1);
  VAR_19 += VAR_21;
  if (FUNC_3(VAR_17))
   VAR_19 = FUNC_11(VAR_9, VAR_19);
 }

 if (VAR_17 == VAR_6)
  VAR_19 = (VAR_19 & 0x3ff) + FUNC_0(VAR_14->r_info);

 if (VAR_17 == VAR_2)
  VAR_19 ^= 0xffffffffffffffff;

 if (FUNC_5(VAR_17))
  VAR_19 -= (Elf_Addr)VAR_16;

 if (FUNC_4(VAR_17))
  VAR_19 = FUNC_11(VAR_9, VAR_19 + VAR_10);

 VAR_20 = FUNC_9(VAR_17);
 VAR_19 >>= FUNC_10(VAR_17);
 VAR_19 &= VAR_20;

 if (VAR_17 == VAR_4)
  VAR_19 |= 0x1c00;

 if (FUNC_7(VAR_17) > 32) {
  *VAR_16 &= ~VAR_20;
  *VAR_16 |= VAR_19;
 } else {
  *VAR_15 &= ~VAR_20;
  *VAR_15 |= VAR_19;
 }

 return (0);
}
