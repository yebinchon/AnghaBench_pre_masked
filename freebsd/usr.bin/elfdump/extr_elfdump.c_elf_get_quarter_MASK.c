
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef size_t elf_member_t ;
struct TYPE_3__ {int* e_ident; } ;
typedef TYPE_1__ Elf32_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;






 scalar_t__ FUNC_0 (void*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static u_int64_t
FUNC_3(Elf32_Ehdr *VAR_4, void *VAR_5, elf_member_t VAR_6)
{
 u_int64_t VAR_7;

 VAR_7 = 0;
 switch (VAR_4->e_ident[VAR_0]) {
 case 133:
  VAR_5 = (char *)VAR_5 + VAR_2[VAR_6];
  switch (VAR_4->e_ident[VAR_1]) {
  case 129:
   VAR_7 = FUNC_0(VAR_5);
   break;
  case 130:
   VAR_7 = FUNC_2(VAR_5);
   break;
  case 128:
   FUNC_1(1, "invalid data format");
  }
  break;
 case 132:
  VAR_5 = (char *)VAR_5 + VAR_3[VAR_6];
  switch (VAR_4->e_ident[VAR_1]) {
  case 129:
   VAR_7 = FUNC_0(VAR_5);
   break;
  case 130:
   VAR_7 = FUNC_2(VAR_5);
   break;
  case 128:
   FUNC_1(1, "invalid data format");
  }
  break;
 case 131:
  FUNC_1(1, "invalid class");
 }

 return VAR_7;
}
