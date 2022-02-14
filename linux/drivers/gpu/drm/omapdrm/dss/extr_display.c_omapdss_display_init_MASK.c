
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* dev; int * name; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int **) ;

void FUNC_3(struct omap_dss_device *VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_1(VAR_2->dev->of_node, "display");
 if (VAR_3 < 0)
  VAR_3 = VAR_1++;


 FUNC_2(VAR_2->dev->of_node, "label", &VAR_2->name);

 if (VAR_2->name == ((void*)0))
  VAR_2->name = FUNC_0(VAR_2->dev, VAR_0,
           "display%u", VAR_3);
}
