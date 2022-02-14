
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_mbox {scalar_t__ send_no_irq; } ;
struct mbox_chan {int dummy; } ;


 int VAR_0 ;
 struct omap_mbox* FUNC_0 (struct mbox_chan*) ;
 int FUNC_1 (struct omap_mbox*,int ) ;
 int FUNC_2 (struct omap_mbox*,int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct mbox_chan *VAR_1, void *VAR_2)
{
 struct omap_mbox *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;
 u32 VAR_5 = FUNC_3(VAR_2);

 if (!VAR_3)
  return -VAR_0;

 if (VAR_3->send_no_irq)
  VAR_4 = FUNC_2(VAR_3, VAR_5);
 else
  VAR_4 = FUNC_1(VAR_3, VAR_5);

 return VAR_4;
}
