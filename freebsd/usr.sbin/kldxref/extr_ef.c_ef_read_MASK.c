
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_3__ {int ef_fd; } ;
typedef scalar_t__ Elf_Off ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static int
FUNC_2(elf_file_t VAR_2, Elf_Off VAR_3, size_t VAR_4, void *VAR_5)
{
 ssize_t VAR_6;

 if (VAR_3 != (Elf_Off)-1) {
  if (FUNC_0(VAR_2->ef_fd, VAR_3, VAR_1) == -1)
   return (VAR_0);
 }

 VAR_6 = FUNC_1(VAR_2->ef_fd, VAR_5, VAR_4);
 if (VAR_6 != -1 && (size_t)VAR_6 == VAR_4)
  return (0);
 else
  return (VAR_0);
}
