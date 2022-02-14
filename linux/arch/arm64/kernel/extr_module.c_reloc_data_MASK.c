
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* s64 ;
typedef void* s32 ;
typedef void* s16 ;
typedef enum aarch64_reloc_op { ____Placeholder_aarch64_reloc_op } aarch64_reloc_op ;


 int VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* FUNC_0 (int,void*,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(enum aarch64_reloc_op VAR_7, void *VAR_8, u64 VAR_9, int VAR_10)
{
 s64 VAR_11 = FUNC_0(VAR_7, VAR_8, VAR_9);
 switch (VAR_10) {
 case 16:
  *(s16 *)VAR_8 = VAR_11;
  switch (VAR_7) {
  case 129:
   if (VAR_11 < 0 || VAR_11 > VAR_5)
    return -VAR_0;
   break;
  case 128:
   if (VAR_11 < VAR_2 || VAR_11 > VAR_1)
    return -VAR_0;
   break;
  default:
   FUNC_1("Invalid 16-bit data relocation (%d)\n", VAR_7);
   return 0;
  }
  break;
 case 32:
  *(s32 *)VAR_8 = VAR_11;
  switch (VAR_7) {
  case 129:
   if (VAR_11 < 0 || VAR_11 > VAR_6)
    return -VAR_0;
   break;
  case 128:
   if (VAR_11 < VAR_4 || VAR_11 > VAR_3)
    return -VAR_0;
   break;
  default:
   FUNC_1("Invalid 32-bit data relocation (%d)\n", VAR_7);
   return 0;
  }
  break;
 case 64:
  *(s64 *)VAR_8 = VAR_11;
  break;
 default:
  FUNC_1("Invalid length (%d) for data relocation\n", VAR_10);
  return 0;
 }
 return 0;
}
