
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kimage {int dummy; } ;
struct TYPE_5__ {scalar_t__ e_type; scalar_t__* e_ident; size_t e_phnum; int e_phentsize; size_t e_ehsize; size_t e_phoff; } ;
struct TYPE_4__ {scalar_t__ p_type; unsigned long p_offset; size_t p_filesz; int p_align; } ;
typedef TYPE_1__ Elf_Phdr ;
typedef TYPE_2__ Elf_Ehdr ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__ const*) ;
 void* FUNC_3 (struct kimage*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void *FUNC_4(struct kimage *VAR_6,
      char *VAR_7, unsigned long VAR_8,
      char *VAR_9, unsigned long VAR_10,
      char *VAR_11, unsigned long VAR_12)
{
 const Elf_Ehdr *VAR_13;
 const Elf_Phdr *VAR_14;
 size_t VAR_15;
 int VAR_16;


 VAR_13 = (Elf_Ehdr *)VAR_7;

 if (VAR_13->e_type != VAR_3 ||
     VAR_13->e_ident[VAR_1] != VAR_2 ||
     !FUNC_2(VAR_13))
  return FUNC_1(-VAR_0);

 if (!VAR_13->e_phnum || VAR_13->e_phentsize != sizeof(Elf_Phdr))
  return FUNC_1(-VAR_0);

 VAR_15 = VAR_13->e_ehsize + VAR_13->e_phoff;
 VAR_15 += VAR_13->e_phentsize * VAR_13->e_phnum;
 if (VAR_15 > VAR_8)
  return FUNC_1(-VAR_0);

 VAR_14 = (void *)VAR_13 + VAR_13->e_phoff;
 VAR_15 = FUNC_0(VAR_15, VAR_14->p_align);
 for (VAR_16 = 0; VAR_16 < VAR_13->e_phnum; VAR_16++, VAR_14++) {
  if (VAR_14->p_type == VAR_4)
   return FUNC_1(-VAR_0);

  if (VAR_14->p_offset > VAR_8)
   return FUNC_1(-VAR_0);

  VAR_15 += FUNC_0(VAR_14->p_filesz, VAR_14->p_align);
 }

 if (VAR_15 > VAR_8)
  return FUNC_1(-VAR_0);

 return FUNC_3(VAR_6, VAR_5);
}
