
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ address; int ef_name; scalar_t__ ef_verbose; } ;
typedef scalar_t__ Elf_Off ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*,size_t) ;
 int FUNC_1 (char*,int ,long,long) ;

__attribute__((used)) static int
FUNC_2(elf_file_t VAR_1, Elf_Off VAR_2, size_t VAR_3, void *VAR_4)
{

 if (VAR_2 + VAR_3 > VAR_1->size) {
  if (VAR_1->ef_verbose)
   FUNC_1("ef_obj_seg_read(%s): bad offset/len (%lx:%ld)",
       VAR_1->ef_name, (long)VAR_2, (long)VAR_3);
  return (VAR_0);
 }
 FUNC_0(VAR_1->address + VAR_2, VAR_4, VAR_3);
 return (0);
}
