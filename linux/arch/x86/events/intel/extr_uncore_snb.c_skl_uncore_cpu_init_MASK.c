
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ x86_max_cores; } ;
struct TYPE_5__ {scalar_t__ num_boxes; } ;
struct TYPE_4__ {int * ops; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

void FUNC_0(void)
{
 VAR_5 = VAR_1;
 if (VAR_2.num_boxes > VAR_0.x86_max_cores)
  VAR_2.num_boxes = VAR_0.x86_max_cores;
 VAR_4.ops = &VAR_3;
}
