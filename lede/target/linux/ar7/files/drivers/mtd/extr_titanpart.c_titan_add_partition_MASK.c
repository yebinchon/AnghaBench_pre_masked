
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; unsigned int offset; unsigned int size; int mask_flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(char * VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
  VAR_2[VAR_1].name = VAR_3;
  VAR_2[VAR_1].offset = VAR_4;
  VAR_2[VAR_1].size = VAR_5-VAR_4;
  VAR_2[VAR_1].mask_flags = (FUNC_0(VAR_3, "bootloader")==0||
   FUNC_0(VAR_3, "boot_env")==0 ||
   FUNC_0(VAR_3, "full_image")==0 )?VAR_0:0;
  VAR_1++;

}
