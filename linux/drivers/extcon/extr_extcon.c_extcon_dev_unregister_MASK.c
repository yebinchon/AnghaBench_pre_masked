
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* groups; } ;
struct extcon_dev {int max_supported; int dev; TYPE_4__* cables; TYPE_3__ extcon_dev_type; TYPE_4__* attrs_muex; TYPE_4__* d_attrs_muex; scalar_t__* mutually_exclusive; int entry; } ;
struct TYPE_6__ {TYPE_4__* name; } ;
struct TYPE_5__ {TYPE_4__* name; } ;
struct TYPE_8__ {TYPE_2__ attr_g; TYPE_1__ attr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct extcon_dev *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 FUNC_7(&VAR_0);
 FUNC_6(&VAR_1->entry);
 FUNC_8(&VAR_0);

 if (FUNC_0(FUNC_4(&VAR_1->dev))) {
  FUNC_1(&VAR_1->dev, "Failed to unregister extcon_dev (%s)\n",
    FUNC_2(&VAR_1->dev));
  return;
 }

 FUNC_3(&VAR_1->dev);

 if (VAR_1->mutually_exclusive && VAR_1->max_supported) {
  for (VAR_2 = 0; VAR_1->mutually_exclusive[VAR_2];
    VAR_2++)
   FUNC_5(VAR_1->d_attrs_muex[VAR_2].attr.name);
  FUNC_5(VAR_1->d_attrs_muex);
  FUNC_5(VAR_1->attrs_muex);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->max_supported; VAR_2++)
  FUNC_5(VAR_1->cables[VAR_2].attr_g.name);

 if (VAR_1->max_supported) {
  FUNC_5(VAR_1->extcon_dev_type.groups);
  FUNC_5(VAR_1->cables);
 }

 FUNC_9(&VAR_1->dev);
}
