
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vdso_elfinfo32 {TYPE_1__* hdr; } ;
struct TYPE_4__ {int sh_offset; int sh_name; unsigned long sh_size; } ;
struct TYPE_3__ {int e_shoff; size_t e_shstrndx; unsigned int e_shnum; } ;
typedef TYPE_2__ Elf32_Shdr ;


 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static void *FUNC_1(struct vdso_elfinfo32 *VAR_0, const char *VAR_1,
      unsigned long *VAR_2)
{
 const char *VAR_3;
 Elf32_Shdr *VAR_4;
 unsigned int VAR_5;

 VAR_4 = (void *)VAR_0->hdr + VAR_0->hdr->e_shoff;
 VAR_3 = (void *)VAR_0->hdr + VAR_4[VAR_0->hdr->e_shstrndx].sh_offset;
 for (VAR_5 = 1; VAR_5 < VAR_0->hdr->e_shnum; VAR_5++) {
  if (!FUNC_0(VAR_3+VAR_4[VAR_5].sh_name, VAR_1)) {
   if (VAR_2)
    *VAR_2 = VAR_4[VAR_5].sh_size;
   return (void *)VAR_0->hdr + VAR_4[VAR_5].sh_offset;
  }
 }
 return ((void*)0);
}
