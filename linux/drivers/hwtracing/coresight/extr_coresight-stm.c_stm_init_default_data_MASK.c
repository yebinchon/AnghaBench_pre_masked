
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int guaranteed; } ;
struct stm_drvdata {int stmspscr; int stmsper; int traceid; int numsp; TYPE_1__ chs; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct stm_drvdata *VAR_0)
{

 VAR_0->stmspscr = 0x0;





 VAR_0->stmsper = ~0x0;







 VAR_0->traceid = 0x1;


 FUNC_0(VAR_0->chs.guaranteed, 0, VAR_0->numsp);
}
