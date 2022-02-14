
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ address; int ef_name; scalar_t__ ef_verbose; } ;
typedef scalar_t__ Elf_Off ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,size_t) ;
 size_t FUNC_1 (scalar_t__,size_t) ;
 int FUNC_2 (char*,int ,long) ;

__attribute__((used)) static int
FUNC_3(elf_file_t VAR_1, Elf_Off VAR_2, size_t VAR_3, char *VAR_4)
{

 if (VAR_2 >= VAR_1->size) {
  if (VAR_1->ef_verbose)
   FUNC_2("ef_obj_seg_read_string(%s): bad offset (%lx)",
       VAR_1->ef_name, (long)VAR_2);
  return (VAR_0);
 }

 if (VAR_1->size - VAR_2 < VAR_3)
  VAR_3 = VAR_1->size - VAR_2;

 if (FUNC_1(VAR_1->address + VAR_2, VAR_3) == VAR_3)
  return (VAR_0);

 FUNC_0(VAR_4, VAR_1->address + VAR_2, VAR_3);
 return (0);
}
