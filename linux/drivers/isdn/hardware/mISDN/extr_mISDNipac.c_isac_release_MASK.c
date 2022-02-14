
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * function; } ;
struct TYPE_3__ {scalar_t__ l1; TYPE_2__ timer; } ;
struct isac_hw {int type; TYPE_1__ dch; int * mon_tx; int * mon_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isac_hw*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(struct isac_hw *VAR_4)
{
 if (VAR_4->type & VAR_1)
  FUNC_0(VAR_4, VAR_2, 0xff);
 else
  FUNC_0(VAR_4, VAR_3, 0xff);
 if (VAR_4->dch.timer.function != ((void*)0)) {
  FUNC_1(&VAR_4->dch.timer);
  VAR_4->dch.timer.function = ((void*)0);
 }
 FUNC_2(VAR_4->mon_rx);
 VAR_4->mon_rx = ((void*)0);
 FUNC_2(VAR_4->mon_tx);
 VAR_4->mon_tx = ((void*)0);
 if (VAR_4->dch.l1)
  FUNC_3(VAR_4->dch.l1, VAR_0);
 FUNC_4(&VAR_4->dch);
}
