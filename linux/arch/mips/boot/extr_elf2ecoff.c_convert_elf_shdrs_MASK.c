
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* sh_entsize; void* sh_addralign; void* sh_info; void* sh_link; void* sh_size; void* sh_offset; void* sh_addr; void* sh_flags; void* sh_type; void* sh_name; } ;
typedef TYPE_1__ Elf32_Shdr ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(Elf32_Shdr * VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_0++) {
  VAR_0->sh_name = FUNC_0(VAR_0->sh_name);
  VAR_0->sh_type = FUNC_0(VAR_0->sh_type);
  VAR_0->sh_flags = FUNC_0(VAR_0->sh_flags);
  VAR_0->sh_addr = FUNC_0(VAR_0->sh_addr);
  VAR_0->sh_offset = FUNC_0(VAR_0->sh_offset);
  VAR_0->sh_size = FUNC_0(VAR_0->sh_size);
  VAR_0->sh_link = FUNC_0(VAR_0->sh_link);
  VAR_0->sh_info = FUNC_0(VAR_0->sh_info);
  VAR_0->sh_addralign = FUNC_0(VAR_0->sh_addralign);
  VAR_0->sh_entsize = FUNC_0(VAR_0->sh_entsize);
 }
}
