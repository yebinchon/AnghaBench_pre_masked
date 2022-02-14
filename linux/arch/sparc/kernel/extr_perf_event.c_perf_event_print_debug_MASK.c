
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* read_pic ) (int) ;int (* read_pcr ) (int) ;} ;
struct TYPE_3__ {int num_pcrs; int num_pic_regs; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

void FUNC_6(void)
{
 unsigned long VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_1)
  return;

 FUNC_1(VAR_2);

 VAR_3 = FUNC_3();

 FUNC_2("\n");
 for (VAR_4 = 0; VAR_4 < VAR_1->num_pcrs; VAR_4++)
  FUNC_2("CPU#%d: PCR%d[%016llx]\n",
   VAR_3, VAR_4, VAR_0->read_pcr(VAR_4));
 for (VAR_4 = 0; VAR_4 < VAR_1->num_pic_regs; VAR_4++)
  FUNC_2("CPU#%d: PIC%d[%016llx]\n",
   VAR_3, VAR_4, VAR_0->read_pic(VAR_4));

 FUNC_0(VAR_2);
}
