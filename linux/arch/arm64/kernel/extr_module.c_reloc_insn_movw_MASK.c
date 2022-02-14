
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int s64 ;
typedef enum aarch64_reloc_op { ____Placeholder_aarch64_reloc_op } aarch64_reloc_op ;
typedef enum aarch64_insn_movw_imm_type { ____Placeholder_aarch64_insn_movw_imm_type } aarch64_insn_movw_imm_type ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(enum aarch64_reloc_op VAR_4, __le32 *VAR_5, u64 VAR_6,
      int VAR_7, enum aarch64_insn_movw_imm_type VAR_8)
{
 u64 VAR_9;
 s64 VAR_10;
 u32 VAR_11 = FUNC_3(*VAR_5);

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6);
 VAR_9 = VAR_10 >> VAR_7;

 if (VAR_8 == VAR_1) {





  VAR_11 &= ~(3 << 29);
  if (VAR_10 >= 0) {

   VAR_11 |= 2 << 29;
  } else {






   VAR_9 = ~VAR_9;
  }
 }


 VAR_11 = FUNC_0(VAR_0, VAR_11, VAR_9);
 *VAR_5 = FUNC_1(VAR_11);

 if (VAR_9 > VAR_3)
  return -VAR_2;

 return 0;
}
