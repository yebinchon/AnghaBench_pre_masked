
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * release; int * type; int * bus; struct device* parent; } ;
struct mcb_bus {int bus_nr; TYPE_1__ dev; int carrier; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mcb_bus* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct mcb_bus*) ;
 struct mcb_bus* FUNC_7 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct device*) ;

struct mcb_bus *FUNC_9(struct device *VAR_6)
{
 struct mcb_bus *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(sizeof(struct mcb_bus), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_5(&VAR_5, 0, 0, VAR_1);
 if (VAR_8 < 0) {
  VAR_9 = VAR_8;
  goto err_free;
 }

 VAR_7->bus_nr = VAR_8;
 VAR_7->carrier = FUNC_4(VAR_6);

 FUNC_3(&VAR_7->dev);
 VAR_7->dev.parent = VAR_6;
 VAR_7->dev.bus = &VAR_2;
 VAR_7->dev.type = &VAR_3;
 VAR_7->dev.release = &VAR_4;

 FUNC_1(&VAR_7->dev, "mcb:%d", VAR_8);
 VAR_9 = FUNC_2(&VAR_7->dev);
 if (VAR_9)
  goto err_free;

 return VAR_7;
err_free:
 FUNC_8(VAR_6);
 FUNC_6(VAR_7);
 return FUNC_0(VAR_9);
}
