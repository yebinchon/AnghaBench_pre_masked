
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bss_size; scalar_t__ image_size; scalar_t__ default_lma; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_1 ;

unsigned long FUNC_1(void)
{





 return FUNC_0(VAR_0 + VAR_1.image_size,
     VAR_1.default_lma + VAR_1.image_size + VAR_1.bss_size);
}
