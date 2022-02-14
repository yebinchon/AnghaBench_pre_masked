
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum aarch64_reloc_op { ____Placeholder_aarch64_reloc_op } aarch64_reloc_op ;
typedef int __le32 ;






 int FUNC_0 (char*,int) ;

__attribute__((used)) static u64 FUNC_1(enum aarch64_reloc_op VAR_0, __le32 *VAR_1, u64 VAR_2)
{
 switch (VAR_0) {
 case 131:
  return VAR_2;
 case 128:
  return VAR_2 - (u64)VAR_1;
 case 129:
  return (VAR_2 & ~0xfff) - ((u64)VAR_1 & ~0xfff);
 case 130:
  return 0;
 }

 FUNC_0("do_reloc: unknown relocation operation %d\n", VAR_0);
 return 0;
}
