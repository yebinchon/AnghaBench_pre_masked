
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int release; int parent; int * bus; } ;
struct mcb_device {int id; TYPE_2__ dev; int var; int group; int inst; int dma_dev; } ;
struct TYPE_5__ {int parent; } ;
struct mcb_bus {int bus_nr; int carrier; TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_2__*,char*,int ,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mcb_bus*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,int,int ,int) ;

int FUNC_5(struct mcb_bus *VAR_2, struct mcb_device *VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3->dev);
 FUNC_3(VAR_2);
 VAR_3->dev.bus = &VAR_0;
 VAR_3->dev.parent = VAR_2->dev.parent;
 VAR_3->dev.release = VAR_1;
 VAR_3->dma_dev = VAR_2->carrier;

 VAR_5 = VAR_3->id;
 FUNC_0(&VAR_3->dev, "mcb%d-16z%03d-%d:%d:%d",
  VAR_2->bus_nr, VAR_5, VAR_3->inst, VAR_3->group, VAR_3->var);

 VAR_4 = FUNC_1(&VAR_3->dev);
 if (VAR_4 < 0) {
  FUNC_4("Failed registering device 16z%03d on bus mcb%d (%d)\n",
   VAR_5, VAR_2->bus_nr, VAR_4);
  goto out;
 }

 return 0;

out:

 return VAR_4;
}
