
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct perf_event {int dummy; } ;
typedef enum dbg_active_el { ____Placeholder_dbg_active_el } dbg_active_el ;
struct TYPE_3__ {int privilege; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 struct perf_event** FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static void FUNC_5(int VAR_4, enum dbg_active_el VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 struct perf_event **VAR_11;

 switch (VAR_4) {
 case 129:
  VAR_11 = FUNC_3(VAR_0);
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_11 = FUNC_3(VAR_3);
  VAR_8 = VAR_2;
  break;
 default:
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
  if (!VAR_11[VAR_7])
   continue;

  VAR_9 = FUNC_0(VAR_11[VAR_7])->ctrl.privilege;
  if (FUNC_1(VAR_9) != VAR_5)
   continue;

  VAR_10 = FUNC_2(VAR_4, VAR_7);
  if (VAR_6)
   VAR_10 |= 0x1;
  else
   VAR_10 &= ~0x1;
  FUNC_4(VAR_4, VAR_7, VAR_10);
 }
}
