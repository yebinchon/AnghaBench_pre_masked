
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** monitor_pages; int * int_page; scalar_t__ work_queue; scalar_t__ handle_primary_chan_wq; scalar_t__ handle_sub_chan_wq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int) ;

void FUNC_3(void)
{



 FUNC_2(0);

 if (VAR_0.handle_sub_chan_wq)
  FUNC_0(VAR_0.handle_sub_chan_wq);

 if (VAR_0.handle_primary_chan_wq)
  FUNC_0(VAR_0.handle_primary_chan_wq);

 if (VAR_0.work_queue)
  FUNC_0(VAR_0.work_queue);

 if (VAR_0.int_page) {
  FUNC_1((unsigned long)VAR_0.int_page, 0);
  VAR_0.int_page = ((void*)0);
 }

 FUNC_1((unsigned long)VAR_0.monitor_pages[0], 0);
 FUNC_1((unsigned long)VAR_0.monitor_pages[1], 0);
 VAR_0.monitor_pages[0] = ((void*)0);
 VAR_0.monitor_pages[1] = ((void*)0);
}
