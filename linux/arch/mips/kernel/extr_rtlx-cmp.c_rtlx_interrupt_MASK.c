
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtlx_info {int ap_int_pending; } ;
struct TYPE_2__ {int rt_queue; int lx_queue; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 () ;
 struct rtlx_info** FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_2;
 struct rtlx_info *VAR_3;
 struct rtlx_info **VAR_4 = FUNC_2(FUNC_0());

 if (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0))
  return;

 VAR_3 = *VAR_4;

 if (VAR_3->ap_int_pending == 1 && FUNC_1() == 0) {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   FUNC_3(&VAR_1[VAR_2].lx_queue);
   FUNC_3(&VAR_1[VAR_2].rt_queue);
  }
  VAR_3->ap_int_pending = 0;
 }
}
