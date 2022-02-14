
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_5__ {size_t ef_relsz; size_t ef_relasz; int ef_efile; int const* ef_rela; int const* ef_rel; int ef_name; scalar_t__ ef_verbose; } ;
typedef int const Elf_Rela ;
typedef int const Elf_Rel ;
typedef scalar_t__ Elf_Off ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,size_t,void*) ;
 int FUNC_2 (int ,int const*,int ,int ,scalar_t__,size_t,void*) ;
 int FUNC_3 (char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(elf_file_t VAR_3, Elf_Off VAR_4, size_t VAR_5, void *VAR_6)
{
 Elf_Off VAR_7;
 const Elf_Rela *VAR_8;
 const Elf_Rel *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_0(VAR_3, VAR_4);
 if (VAR_7 == 0) {
  if (VAR_3->ef_verbose)
   FUNC_3("ef_seg_read_rel(%s): zero offset (%jx:%ju)",
       VAR_3->ef_name, (uintmax_t)VAR_4, (uintmax_t)VAR_7);
  return (VAR_0);
 }
 if ((VAR_10 = FUNC_1(VAR_3, VAR_7, VAR_5, VAR_6)) != 0)
  return (VAR_10);

 for (VAR_9 = VAR_3->ef_rel; VAR_9 < &VAR_3->ef_rel[VAR_3->ef_relsz]; VAR_9++) {
  VAR_10 = FUNC_2(VAR_3->ef_efile, VAR_9, VAR_1, 0, VAR_4, VAR_5,
      VAR_6);
  if (VAR_10 != 0)
   return (VAR_10);
 }
 for (VAR_8 = VAR_3->ef_rela; VAR_8 < &VAR_3->ef_rela[VAR_3->ef_relasz]; VAR_8++) {
  VAR_10 = FUNC_2(VAR_3->ef_efile, VAR_8, VAR_2, 0, VAR_4, VAR_5,
      VAR_6);
  if (VAR_10 != 0)
   return (VAR_10);
 }
 return (0);
}
