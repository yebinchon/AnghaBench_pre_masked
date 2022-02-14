
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox_device {int cfg_lock; int dev; } ;
struct omap_mbox {struct omap_mbox_device* parent; } ;
struct mbox_chan {int dummy; } ;


 struct omap_mbox* FUNC_0 (struct mbox_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct omap_mbox*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mbox_chan *VAR_0)
{
 struct omap_mbox *VAR_1 = FUNC_0(VAR_0);
 struct omap_mbox_device *VAR_2 = VAR_1->parent;
 int VAR_3 = 0;

 FUNC_1(&VAR_2->cfg_lock);
 FUNC_4(VAR_2->dev);
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  FUNC_5(VAR_2->dev);
 FUNC_2(&VAR_2->cfg_lock);
 return VAR_3;
}
