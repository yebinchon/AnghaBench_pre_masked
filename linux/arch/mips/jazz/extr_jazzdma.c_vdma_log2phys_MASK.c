
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long frame; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

unsigned long FUNC_0(unsigned long VAR_2)
{
 return VAR_1[VAR_2 >> 12].frame + (VAR_2 & (VAR_0 - 1));
}
