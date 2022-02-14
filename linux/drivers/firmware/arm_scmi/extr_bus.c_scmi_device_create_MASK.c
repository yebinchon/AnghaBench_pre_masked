
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int release; int * bus; struct device_node* of_node; struct device* parent; } ;
struct scmi_device {int id; int protocol_id; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct scmi_device*) ;
 struct scmi_device* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct scmi_device *
FUNC_7(struct device_node *VAR_4, struct device *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 struct scmi_device *VAR_9;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_7 = FUNC_2(&VAR_1, 1, 0, VAR_0);
 if (VAR_7 < 0)
  goto free_mem;

 VAR_9->id = VAR_7;
 VAR_9->protocol_id = VAR_6;
 VAR_9->dev.parent = VAR_5;
 VAR_9->dev.of_node = VAR_4;
 VAR_9->dev.bus = &VAR_2;
 VAR_9->dev.release = VAR_3;
 FUNC_0(&VAR_9->dev, "scmi_dev.%d", VAR_7);

 VAR_8 = FUNC_1(&VAR_9->dev);
 if (VAR_8)
  goto put_dev;

 return VAR_9;
put_dev:
 FUNC_6(&VAR_9->dev);
 FUNC_3(&VAR_1, VAR_7);
free_mem:
 FUNC_4(VAR_9);
 return ((void*)0);
}
