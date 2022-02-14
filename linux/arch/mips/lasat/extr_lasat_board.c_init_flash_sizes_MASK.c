
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* li_flashpart_base; unsigned long* li_flashpart_size; int li_flash_base; int li_flash_size; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned long *VAR_7 = VAR_6.li_flashpart_base;
 unsigned long *VAR_8 = VAR_6.li_flashpart_size;
 int VAR_9;

 VAR_8[VAR_0] = 0x40000;
 VAR_8[VAR_5] = 0xC0000;
 VAR_8[VAR_4] = 0x100000;

 if (!FUNC_0()) {
  VAR_6.li_flash_base = 0x1e000000;

  VAR_7[VAR_0] = 0x1e400000;

  if (VAR_6.li_flash_size > 0x200000) {
   VAR_8[VAR_1] = 0x100000;
   VAR_8[VAR_2] = 0x500000;
  }
 } else {
  VAR_6.li_flash_base = 0x10000000;

  if (VAR_6.li_flash_size < 0x1000000) {
   VAR_7[VAR_0] = 0x10000000;
   VAR_8[VAR_1] = 0x100000;
   if (VAR_6.li_flash_size >= 0x400000)
    VAR_8[VAR_2] =
         VAR_6.li_flash_size - 0x300000;
  }
 }

 for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++)
  VAR_7[VAR_9] = VAR_7[VAR_9-1] + VAR_8[VAR_9-1];
}
