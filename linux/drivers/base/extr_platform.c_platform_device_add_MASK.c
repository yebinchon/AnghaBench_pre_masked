
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {struct resource* parent; int * name; } ;
struct TYPE_6__ {struct TYPE_6__* parent; int * bus; } ;
struct platform_device {int id; int id_auto; int num_resources; struct resource* resource; TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_0 (TYPE_1__*,char*,int,struct resource*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct resource*,struct resource*) ;
 struct resource VAR_4 ;
 struct resource VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,int *,int *) ;
 int FUNC_8 (struct resource*) ;
 scalar_t__ FUNC_9 (struct resource*) ;

int FUNC_10(struct platform_device *VAR_9)
{
 int VAR_10, VAR_11;

 if (!VAR_9)
  return -VAR_0;

 if (!VAR_9->dev.parent)
  VAR_9->dev.parent = &VAR_6;

 VAR_9->dev.bus = &VAR_7;

 switch (VAR_9->id) {
 default:
  FUNC_2(&VAR_9->dev, "%s.%d", VAR_9->name, VAR_9->id);
  break;
 case 128:
  FUNC_2(&VAR_9->dev, "%s", VAR_9->name);
  break;
 case 129:





  VAR_11 = FUNC_4(&VAR_8, 0, 0, VAR_1);
  if (VAR_11 < 0)
   goto err_out;
  VAR_9->id = VAR_11;
  VAR_9->id_auto = 1;
  FUNC_2(&VAR_9->dev, "%s.%d.auto", VAR_9->name, VAR_9->id);
  break;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->num_resources; VAR_10++) {
  struct resource *VAR_12, *VAR_13 = &VAR_9->resource[VAR_10];

  if (VAR_13->name == ((void*)0))
   VAR_13->name = FUNC_1(&VAR_9->dev);

  VAR_12 = VAR_13->parent;
  if (!VAR_12) {
   if (FUNC_9(VAR_13) == VAR_3)
    VAR_12 = &VAR_4;
   else if (FUNC_9(VAR_13) == VAR_2)
    VAR_12 = &VAR_5;
  }

  if (VAR_12) {
   VAR_11 = FUNC_6(VAR_12, VAR_13);
   if (VAR_11) {
    FUNC_0(&VAR_9->dev, "failed to claim resource %d: %pR\n", VAR_10, VAR_13);
    goto failed;
   }
  }
 }

 FUNC_7("Registering platform device '%s'. Parent at %s\n",
   FUNC_1(&VAR_9->dev), FUNC_1(VAR_9->dev.parent));

 VAR_11 = FUNC_3(&VAR_9->dev);
 if (VAR_11 == 0)
  return VAR_11;

 failed:
 if (VAR_9->id_auto) {
  FUNC_5(&VAR_8, VAR_9->id);
  VAR_9->id = 129;
 }

 while (--VAR_10 >= 0) {
  struct resource *VAR_14 = &VAR_9->resource[VAR_10];
  if (VAR_14->parent)
   FUNC_8(VAR_14);
 }

 err_out:
 return VAR_11;
}
