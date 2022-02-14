
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox {int dummy; } ;
struct mbox_chan {int dummy; } ;
typedef int omap_mbox_irq_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct omap_mbox*,int ) ;
 struct omap_mbox* FUNC_2 (struct mbox_chan*) ;

void FUNC_3(struct mbox_chan *VAR_0, omap_mbox_irq_t VAR_1)
{
 struct omap_mbox *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_0(!VAR_2))
  return;

 FUNC_1(VAR_2, VAR_1);
}
