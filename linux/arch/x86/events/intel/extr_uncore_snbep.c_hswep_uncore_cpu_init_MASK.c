
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int logical_proc_id; scalar_t__ x86_max_cores; } ;
struct TYPE_7__ {scalar_t__ num_boxes; } ;
struct TYPE_6__ {int num_boxes; } ;
struct TYPE_5__ {scalar_t__* dev; } ;


 size_t VAR_0 ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (scalar_t__,int,int*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

void FUNC_1(void)
{
 int VAR_7 = VAR_1.logical_proc_id;

 if (VAR_3.num_boxes > VAR_1.x86_max_cores)
  VAR_3.num_boxes = VAR_1.x86_max_cores;


 if (VAR_5[VAR_7].dev[VAR_0]) {
  u32 VAR_8;

  FUNC_0(VAR_5[VAR_7].dev[VAR_0],
          0x94, &VAR_8);
  if (((VAR_8 >> 6) & 0x3) == 0)
   VAR_4.num_boxes = 2;
 }

 VAR_6 = VAR_2;
}
