
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_mhu_link {int irq; } ;
struct mbox_chan {struct platform_mhu_link* con_priv; } ;


 int FUNC_0 (int ,struct mbox_chan*) ;

__attribute__((used)) static void FUNC_1(struct mbox_chan *VAR_0)
{
 struct platform_mhu_link *VAR_1 = VAR_0->con_priv;

 FUNC_0(VAR_1->irq, VAR_0);
}
