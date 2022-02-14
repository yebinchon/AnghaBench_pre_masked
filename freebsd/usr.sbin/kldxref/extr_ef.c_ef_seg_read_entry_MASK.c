
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int elf_file_t ;
typedef int Elf_Off ;


 int FUNC_0 (int ,int ,size_t,void*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t) ;

__attribute__((used)) static int
FUNC_3(elf_file_t VAR_1, Elf_Off VAR_2, size_t VAR_3, void **VAR_4)
{
 int VAR_5;

 *VAR_4 = FUNC_2(VAR_3);
 if (*VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, *VAR_4);
 if (VAR_5 != 0)
  FUNC_1(*VAR_4);
 return (VAR_5);
}
