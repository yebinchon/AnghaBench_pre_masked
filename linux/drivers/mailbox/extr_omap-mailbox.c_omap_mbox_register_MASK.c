
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox_device {int controller; int dev; int elem; struct omap_mbox** mboxes; } ;
struct omap_mbox {int dev; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,struct omap_mbox*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct omap_mbox_device *VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct omap_mbox **VAR_7;

 if (!VAR_4 || !VAR_4->mboxes)
  return -VAR_0;

 VAR_7 = VAR_4->mboxes;
 for (VAR_6 = 0; VAR_7[VAR_6]; VAR_6++) {
  struct omap_mbox *VAR_8 = VAR_7[VAR_6];

  VAR_8->dev = FUNC_2(&VAR_1, VAR_4->dev,
     0, VAR_8, "%s", VAR_8->name);
  if (FUNC_0(VAR_8->dev)) {
   VAR_5 = FUNC_1(VAR_8->dev);
   goto err_out;
  }
 }

 FUNC_6(&VAR_3);
 FUNC_5(&VAR_4->elem, &VAR_2);
 FUNC_7(&VAR_3);

 VAR_5 = FUNC_4(VAR_4->dev, &VAR_4->controller);

err_out:
 if (VAR_5) {
  while (VAR_6--)
   FUNC_3(VAR_7[VAR_6]->dev);
 }
 return VAR_5;
}
