
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ u_int64_t ;
typedef size_t elf_member_t ;
struct TYPE_3__ {int* e_ident; } ;
typedef TYPE_1__ Elf32_Ehdr ;


 size_t VAR_0 ;



 size_t* VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static u_int64_t
FUNC_1(Elf32_Ehdr *VAR_3, void *VAR_4, elf_member_t VAR_5)
{
 u_int64_t VAR_6;

 VAR_6 = 0;
 switch (VAR_3->e_ident[VAR_0]) {
 case 130:
  VAR_6 = ((uint8_t *)VAR_4)[VAR_1[VAR_5]];
  break;
 case 129:
  VAR_6 = ((uint8_t *)VAR_4)[VAR_2[VAR_5]];
  break;
 case 128:
  FUNC_0(1, "invalid class");
 }

 return VAR_6;
}
