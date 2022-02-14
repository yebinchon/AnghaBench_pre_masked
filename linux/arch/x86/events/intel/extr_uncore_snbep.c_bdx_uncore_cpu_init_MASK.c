
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_8__ {scalar_t__ num_boxes; } ;
struct TYPE_7__ {scalar_t__ x86_max_cores; int x86_model; int phys_proc_id; } ;
struct TYPE_6__ {int constraints; } ;
struct TYPE_5__ {struct pci_dev** dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int ** VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_7 ;
 int ** VAR_8 ;

void FUNC_2(void)
{
 int VAR_9 = FUNC_1(VAR_5.phys_proc_id);

 if (VAR_3.num_boxes > VAR_5.x86_max_cores)
  VAR_3.num_boxes = VAR_5.x86_max_cores;
 VAR_8 = VAR_2;


 if (VAR_5.x86_model == 86) {
  VAR_8[VAR_0] = ((void*)0);

 } else if (VAR_7[VAR_9].dev[VAR_1]) {
  struct pci_dev *VAR_10;
  u32 VAR_11;

  VAR_10 = VAR_7[VAR_9].dev[VAR_1];
  FUNC_0(VAR_10, 0x94, &VAR_11);
  if (((VAR_11 >> 6) & 0x3) == 0)
   VAR_2[VAR_0] = ((void*)0);
 }
 VAR_6.constraints = VAR_4;
}
