
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int r_info; scalar_t__ r_offset; } ;
typedef TYPE_1__ Elf32_Rel ;
typedef scalar_t__ Elf32_Addr ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;





 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(Elf32_Addr VAR_0, const Elf32_Rel *VAR_1)
{
 u32 *VAR_2 = (u32 *)(VAR_0 + VAR_1->r_offset);







 switch (FUNC_1(VAR_1->r_info)) {
  u16 VAR_3, VAR_4;

 case 129:
 case 128:
  VAR_3 = FUNC_3(((u16 *)VAR_2)[0]);
  VAR_4 = FUNC_3(((u16 *)VAR_2)[1]);

  return (VAR_3 & 0x7ff) == 0x7ff && (VAR_4 & 0x2fff) == 0x2ffe;

 case 132:
 case 130:
 case 131:
  return (FUNC_2(*VAR_2) & 0xffffff) == 0xfffffe;
 }
 FUNC_0();
}
