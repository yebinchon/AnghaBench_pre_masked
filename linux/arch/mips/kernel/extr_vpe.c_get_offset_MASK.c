
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long sh_size; scalar_t__ sh_addralign; } ;
typedef TYPE_1__ Elf_Shdr ;


 long FUNC_0 (unsigned long,int) ;

__attribute__((used)) static long FUNC_1(unsigned long *VAR_0, Elf_Shdr *VAR_1)
{
 long VAR_2;

 VAR_2 = FUNC_0(*VAR_0, VAR_1->sh_addralign ? : 1);
 *VAR_0 = VAR_2 + VAR_1->sh_size;
 return VAR_2;
}
