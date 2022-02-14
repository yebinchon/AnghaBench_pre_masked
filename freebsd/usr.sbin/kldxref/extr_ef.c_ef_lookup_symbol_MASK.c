
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_6__ {scalar_t__ st_name; scalar_t__ st_shndx; scalar_t__ st_value; int st_info; } ;
struct TYPE_5__ {unsigned long* ef_buckets; unsigned long ef_nbuckets; unsigned long ef_nchains; char* ef_strtab; unsigned long* ef_chains; int ef_name; TYPE_2__* ef_symtab; } ;
typedef TYPE_2__ Elf_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(elf_file_t VAR_4, const char *VAR_5, Elf_Sym **VAR_6)
{
 unsigned long VAR_7, VAR_8;
 Elf_Sym *VAR_9;
 char *VAR_10;


 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = VAR_4->ef_buckets[VAR_7 % VAR_4->ef_nbuckets];

 while (VAR_8 != VAR_2) {
  if (VAR_8 >= VAR_4->ef_nchains) {
   FUNC_3("ef_lookup_symbol: file %s have corrupted symbol table\n",
       VAR_4->ef_name);
   return (VAR_0);
  }

  VAR_9 = VAR_4->ef_symtab + VAR_8;
  if (VAR_9->st_name == 0) {
   FUNC_3("ef_lookup_symbol: file %s have corrupted symbol table\n",
       VAR_4->ef_name);
   return (VAR_0);
  }

  VAR_10 = VAR_4->ef_strtab + VAR_9->st_name;

  if (FUNC_2(VAR_5, VAR_10) == 0) {
   if (VAR_9->st_shndx != VAR_1 ||
       (VAR_9->st_value != 0 &&
    FUNC_0(VAR_9->st_info) == VAR_3)) {
    *VAR_6 = VAR_9;
    return (0);
   } else
    return (VAR_0);
  }

  VAR_8 = VAR_4->ef_chains[VAR_8];
 }

 return (VAR_0);
}
