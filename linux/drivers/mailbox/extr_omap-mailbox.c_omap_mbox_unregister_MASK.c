
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox_device {struct omap_mbox** mboxes; int elem; } ;
struct omap_mbox {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct omap_mbox_device *VAR_2)
{
 int VAR_3;
 struct omap_mbox **VAR_4;

 if (!VAR_2 || !VAR_2->mboxes)
  return -VAR_0;

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_2->elem);
 FUNC_3(&VAR_1);

 VAR_4 = VAR_2->mboxes;
 for (VAR_3 = 0; VAR_4[VAR_3]; VAR_3++)
  FUNC_0(VAR_4[VAR_3]->dev);
 return 0;
}
