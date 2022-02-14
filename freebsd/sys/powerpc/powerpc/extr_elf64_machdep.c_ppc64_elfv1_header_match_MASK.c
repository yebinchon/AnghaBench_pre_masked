
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image_params {scalar_t__ image_header; } ;
typedef int boolean_t ;
struct TYPE_2__ {int e_flags; } ;
typedef TYPE_1__ Elf64_Ehdr ;



__attribute__((used)) static boolean_t
FUNC_0(struct image_params *VAR_0)
{
 const Elf64_Ehdr *VAR_1 = (const Elf64_Ehdr *)VAR_0->image_header;
 int VAR_2 = (VAR_1->e_flags & 3);

 return (VAR_2 == 0 || VAR_2 == 1);
}
