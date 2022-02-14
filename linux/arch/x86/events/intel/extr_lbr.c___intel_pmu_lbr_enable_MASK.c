
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cpu_hw_events {TYPE_1__* lbr_sel; } ;
struct TYPE_4__ {int version; int lbr_sel_mask; } ;
struct TYPE_3__ {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void FUNC_3(bool VAR_7)
{
 struct cpu_hw_events *VAR_8 = FUNC_1(&VAR_5);
 u64 VAR_9, VAR_10 = 0, VAR_11;





 if (VAR_7 && VAR_6.version >= 4)
  return;





 if (VAR_8->lbr_sel)
  VAR_10 = VAR_8->lbr_sel->config & VAR_6.lbr_sel_mask;
 if (!VAR_7 && VAR_8->lbr_sel)
  FUNC_2(VAR_4, VAR_10);

 FUNC_0(VAR_3, VAR_9);
 VAR_11 = VAR_9;
 VAR_9 |= VAR_1;





 if (!(VAR_10 & VAR_2))
  VAR_9 |= VAR_0;
 if (VAR_11 != VAR_9)
  FUNC_2(VAR_3, VAR_9);
}
