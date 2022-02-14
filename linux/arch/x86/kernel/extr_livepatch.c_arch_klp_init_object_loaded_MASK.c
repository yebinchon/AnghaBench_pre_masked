
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct klp_patch {TYPE_1__* mod; } ;
struct klp_object {char* name; } ;
struct TYPE_5__ {int e_shnum; } ;
struct klp_modinfo {scalar_t__ secstrings; TYPE_2__ hdr; TYPE_3__* sechdrs; } ;
struct TYPE_6__ {int sh_size; scalar_t__ sh_addr; scalar_t__ sh_name; } ;
struct TYPE_4__ {struct klp_modinfo* klp_info; } ;
typedef TYPE_3__ Elf_Shdr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (scalar_t__,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

void FUNC_5(struct klp_patch *VAR_2,
     struct klp_object *VAR_3)
{
 int VAR_4;
 struct klp_modinfo *VAR_5;
 Elf_Shdr *VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 void *VAR_9, *VAR_10;
 const char *VAR_11;
 char VAR_12[VAR_1];
 char VAR_13[VAR_0];

 VAR_5 = VAR_2->mod->klp_info;
 VAR_11 = VAR_3->name ? VAR_3->name : "vmlinux";


 FUNC_0(VAR_1 < 56 || VAR_0 != 128);

 for (VAR_6 = VAR_5->sechdrs; VAR_6 < VAR_5->sechdrs + VAR_5->hdr.e_shnum; VAR_6++) {

  VAR_4 = FUNC_3(VAR_5->secstrings + VAR_6->sh_name,
        ".klp.arch.%55[^.].%127s",
        VAR_12, VAR_13);
  if (VAR_4 != 2)
   continue;
  if (FUNC_4(VAR_12, VAR_11))
   continue;
  if (!FUNC_4(".altinstructions", VAR_13))
   VAR_7 = VAR_6;
  if (!FUNC_4(".parainstructions", VAR_13))
   VAR_8 = VAR_6;
 }

 if (VAR_7) {
  VAR_9 = (void *) VAR_7->sh_addr;
  FUNC_1(VAR_9, VAR_9 + VAR_7->sh_size);
 }

 if (VAR_8) {
  VAR_10 = (void *) VAR_8->sh_addr;
  FUNC_2(VAR_10, VAR_10 + VAR_8->sh_size);
 }
}
