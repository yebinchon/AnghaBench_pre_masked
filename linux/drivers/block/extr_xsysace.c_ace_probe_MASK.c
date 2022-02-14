
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {int num_resources; TYPE_2__ dev; TYPE_1__* resource; scalar_t__ id; } ;
typedef int resource_size_t ;
struct TYPE_4__ {int flags; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int,int,int) ;
 int FUNC_1 (TYPE_2__*,char*,struct platform_device*) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 resource_size_t VAR_5 = 0;
 int VAR_6 = VAR_0;
 u32 VAR_7 = VAR_4->id;
 int VAR_8 = 0;
 int VAR_9;

 FUNC_1(&VAR_4->dev, "ace_probe(%p)\n", VAR_4);


 if (FUNC_3(VAR_4->dev.of_node, "port-number", &VAR_7))
  VAR_7 = 0;
 if (FUNC_2(VAR_4->dev.of_node, "8-bit", ((void*)0)))
  VAR_6 = VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_4->num_resources; VAR_9++) {
  if (VAR_4->resource[VAR_9].flags & VAR_3)
   VAR_5 = VAR_4->resource[VAR_9].start;
  if (VAR_4->resource[VAR_9].flags & VAR_2)
   VAR_8 = VAR_4->resource[VAR_9].start;
 }


 return FUNC_0(&VAR_4->dev, VAR_7, VAR_5, VAR_8, VAR_6);
}
