
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_5__ {int ef_name; scalar_t__ ef_verbose; } ;
typedef scalar_t__ Elf_Off ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,size_t,void*) ;
 int FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(elf_file_t VAR_1, Elf_Off VAR_2, size_t VAR_3, void *VAR_4)
{
 Elf_Off VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 == 0) {
  if (VAR_1->ef_verbose)
   FUNC_2("ef_seg_read(%s): zero offset (%jx:%ju)",
       VAR_1->ef_name, (uintmax_t)VAR_2, (uintmax_t)VAR_5);
  return (VAR_0);
 }
 return (FUNC_1(VAR_1, VAR_5, VAR_3, VAR_4));
}
