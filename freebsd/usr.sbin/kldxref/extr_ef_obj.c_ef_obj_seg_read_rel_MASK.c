
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_4__* elf_file_t ;
struct TYPE_9__ {scalar_t__ size; char* address; int nprogtab; int nrel; int nrela; int ef_efile; TYPE_3__* relatab; TYPE_2__* reltab; TYPE_1__* progtab; int ef_name; scalar_t__ ef_verbose; } ;
struct TYPE_8__ {int sec; size_t nrela; int * rela; } ;
struct TYPE_7__ {int sec; size_t nrel; int * rel; } ;
struct TYPE_6__ {int size; int sec; int * addr; } ;
typedef int Elf_Rela ;
typedef int Elf_Rel ;
typedef scalar_t__ Elf_Off ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*,size_t) ;
 int FUNC_1 (int ,int *,int ,scalar_t__,scalar_t__,size_t,void*) ;
 int FUNC_2 (char*,int ,long,long) ;

__attribute__((used)) static int
FUNC_3(elf_file_t VAR_3, Elf_Off VAR_4, size_t VAR_5, void *VAR_6)
{
 char *VAR_7;
 Elf_Rel *VAR_8;
 Elf_Rela *VAR_9;
 Elf_Off VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_4 + VAR_5 > VAR_3->size) {
  if (VAR_3->ef_verbose)
   FUNC_2("ef_obj_seg_read_rel(%s): bad offset/len (%lx:%ld)",
       VAR_3->ef_name, (long)VAR_4, (long)VAR_5);
  return (VAR_0);
 }
 FUNC_0(VAR_3->address + VAR_4, VAR_6, VAR_5);


 VAR_7 = VAR_3->address + VAR_4;
 VAR_14 = -1;
 VAR_10 = VAR_11 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_3->nprogtab; VAR_13++) {
  if (VAR_3->progtab[VAR_13].addr == ((void*)0))
   continue;
  if (VAR_7 < (char *)VAR_3->progtab[VAR_13].addr || VAR_7 + VAR_5 >
       (char *)VAR_3->progtab[VAR_13].addr + VAR_3->progtab[VAR_13].size)
   continue;
  VAR_14 = VAR_3->progtab[VAR_13].sec;

  VAR_10 = (char *)VAR_3->progtab[VAR_13].addr - VAR_3->address;
  VAR_11 = VAR_7 - VAR_3->address;
  break;
 }

 if (VAR_14 == -1)
  return (VAR_0);


 for (VAR_13 = 0; VAR_13 < VAR_3->nrel; VAR_13++) {
  if (VAR_3->reltab[VAR_13].sec != VAR_14)
   continue;
  for (VAR_8 = VAR_3->reltab[VAR_13].rel;
       VAR_8 < &VAR_3->reltab[VAR_13].rel[VAR_3->reltab[VAR_13].nrel]; VAR_8++) {
   VAR_12 = FUNC_1(VAR_3->ef_efile, VAR_8, VAR_1, VAR_10,
       VAR_11, VAR_5, VAR_6);
   if (VAR_12 != 0)
    return (VAR_12);
  }
 }
 for (VAR_13 = 0; VAR_13 < VAR_3->nrela; VAR_13++) {
  if (VAR_3->relatab[VAR_13].sec != VAR_14)
   continue;
  for (VAR_9 = VAR_3->relatab[VAR_13].rela;
       VAR_9 < &VAR_3->relatab[VAR_13].rela[VAR_3->relatab[VAR_13].nrela]; VAR_9++) {
   VAR_12 = FUNC_1(VAR_3->ef_efile, VAR_9, VAR_2,
       VAR_10, VAR_11, VAR_5, VAR_6);
   if (VAR_12 != 0)
    return (VAR_12);
  }
 }
 return (0);
}
