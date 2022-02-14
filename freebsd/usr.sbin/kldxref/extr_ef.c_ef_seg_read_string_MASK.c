
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ ssize_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_4__ {int ef_fd; int ef_name; scalar_t__ ef_verbose; } ;
typedef scalar_t__ Elf_Off ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*,size_t,scalar_t__) ;
 size_t FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(elf_file_t VAR_2, Elf_Off VAR_3, size_t VAR_4, char *VAR_5)
{
 Elf_Off VAR_6;
 ssize_t VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (VAR_6 == 0 || VAR_6 == (Elf_Off)-1) {
  if (VAR_2->ef_verbose)
   FUNC_3("ef_seg_read_string(%s): bad offset (%jx:%ju)",
       VAR_2->ef_name, (uintmax_t)VAR_3, (uintmax_t)VAR_6);
  return (VAR_0);
 }

 VAR_7 = FUNC_1(VAR_2->ef_fd, VAR_5, VAR_4, VAR_6);
 if (VAR_7 < 0)
  return (VAR_1);
 if (FUNC_2(VAR_5, VAR_4) == VAR_4)
  return (VAR_0);

 return (0);
}
