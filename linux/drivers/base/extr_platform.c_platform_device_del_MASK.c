
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ parent; } ;
struct platform_device {int num_resources; struct resource* resource; int id; scalar_t__ id_auto; int dev; } ;


 int FUNC_0 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct resource*) ;

void FUNC_4(struct platform_device *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_2)) {
  FUNC_1(&VAR_2->dev);

  if (VAR_2->id_auto) {
   FUNC_2(&VAR_1, VAR_2->id);
   VAR_2->id = VAR_0;
  }

  for (VAR_3 = 0; VAR_3 < VAR_2->num_resources; VAR_3++) {
   struct resource *VAR_4 = &VAR_2->resource[VAR_3];
   if (VAR_4->parent)
    FUNC_3(VAR_4);
  }
 }
}
