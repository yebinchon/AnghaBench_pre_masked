
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int s64 ;
typedef enum aarch64_reloc_op { ____Placeholder_aarch64_reloc_op } aarch64_reloc_op ;
typedef enum aarch64_insn_imm_type { ____Placeholder_aarch64_insn_imm_type } aarch64_insn_imm_type ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(enum aarch64_reloc_op VAR_1, __le32 *VAR_2, u64 VAR_3,
     int VAR_4, int VAR_5, enum aarch64_insn_imm_type VAR_6)
{
 u64 VAR_7, VAR_8;
 s64 VAR_9;
 u32 VAR_10 = FUNC_4(*VAR_2);


 VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3);
 VAR_9 >>= VAR_4;


 VAR_8 = (FUNC_0(VAR_4 + VAR_5) - 1) >> VAR_4;
 VAR_7 = VAR_9 & VAR_8;


 VAR_10 = FUNC_1(VAR_6, VAR_10, VAR_7);
 *VAR_2 = FUNC_2(VAR_10);





 VAR_9 = (s64)(VAR_9 & ~(VAR_8 >> 1)) >> (VAR_5 - 1);





 if ((u64)(VAR_9 + 1) >= 2)
  return -VAR_0;

 return 0;
}
