
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhdr {int e_phoff; int e_ehsize; int e_phentsize; scalar_t__ e_shstrndx; scalar_t__ e_shnum; scalar_t__ e_shentsize; scalar_t__ e_phnum; scalar_t__ e_flags; scalar_t__ e_shoff; scalar_t__ e_entry; void* e_version; int e_machine; int e_type; void** e_ident; } ;
struct elf_phdr {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (void**,int ,int ) ;
 int FUNC_1 (void**,int ,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_15)
{
 struct elfhdr *VAR_16;

 VAR_16 = (struct elfhdr *) VAR_15;
 VAR_15 += sizeof(struct elfhdr);
 FUNC_0(VAR_16->e_ident, VAR_6, VAR_13);
 VAR_16->e_ident[VAR_0] = VAR_8;
 VAR_16->e_ident[VAR_1] = VAR_9;
 VAR_16->e_ident[VAR_5] = VAR_12;
 VAR_16->e_ident[VAR_3] = VAR_10;
 FUNC_1(VAR_16->e_ident+VAR_4, 0, VAR_2-VAR_4);
 VAR_16->e_type = VAR_11;
 VAR_16->e_machine = VAR_7;
 VAR_16->e_version = VAR_12;
 VAR_16->e_entry = 0;
 VAR_16->e_phoff = sizeof(struct elfhdr);
 VAR_16->e_shoff = 0;



 VAR_16->e_flags = 0;

 VAR_16->e_ehsize = sizeof(struct elfhdr);
 VAR_16->e_phentsize = sizeof(struct elf_phdr);
 VAR_16->e_phnum = 0;
 VAR_16->e_shentsize = 0;
 VAR_16->e_shnum = 0;
 VAR_16->e_shstrndx = 0;

 return 0;
}
