
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union offset_union {int un; } ;
typedef int u32 ;
typedef int u16 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void *
FUNC_3(u32 *VAR_2, struct pt_regs *VAR_3,
       union offset_union *VAR_4)
{
 u32 VAR_5 = *VAR_2;
 u16 VAR_6 = (VAR_5 >> 16) & 0xffff;
 u16 VAR_7 = VAR_5 & 0xffff;

 switch (VAR_6 & 0xffe0) {

 case 0xe880:
 case 0xe8a0:
 case 0xe900:
 case 0xe920:

  return VAR_0;

 case 0xf840:
  if (FUNC_2(VAR_5) == 13 && (VAR_7 & 0x09ff) == 0x0904) {
   u32 VAR_8 = !!(FUNC_0(VAR_5));
   const u32 VAR_9[2] = {
    0xe92d0000,
    0xe8bd0000,
   };
   *VAR_2 = VAR_9[VAR_8] | (1<<FUNC_1(VAR_5));
   return VAR_0;
  }

  break;


 case 0xe860:
 case 0xe960:
 case 0xe8e0:
 case 0xe9e0:
  VAR_4->un = (VAR_7 & 0xff) << 2;


 case 0xe940:
 case 0xe9c0:
  return VAR_1;





 default:
  break;
 }
 return ((void*)0);
}
