
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kobj; int release; struct device* parent; int * class; } ;
struct stm_source_device {TYPE_1__ dev; struct stm_source_data* data; int link_entry; int link_lock; int output; } ;
struct stm_source_data {struct stm_source_device* src; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*,int ) ;
 struct stm_source_device* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_10(struct device *VAR_6,
          struct stm_source_data *VAR_7)
{
 struct stm_source_device *VAR_8;
 int VAR_9;

 if (!VAR_3)
  return -VAR_1;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(&VAR_8->dev);
 VAR_8->dev.class = &VAR_4;
 VAR_8->dev.parent = VAR_6;
 VAR_8->dev.release = VAR_5;

 VAR_9 = FUNC_3(&VAR_8->dev.kobj, "%s", VAR_7->name);
 if (VAR_9)
  goto err;

 FUNC_6(&VAR_8->dev);
 FUNC_5(&VAR_8->dev);

 VAR_9 = FUNC_1(&VAR_8->dev);
 if (VAR_9)
  goto err;

 FUNC_9(&VAR_8->output);
 FUNC_8(&VAR_8->link_lock);
 FUNC_0(&VAR_8->link_entry);
 VAR_8->data = VAR_7;
 VAR_7->src = VAR_8;

 return 0;

err:
 FUNC_7(&VAR_8->dev);

 return VAR_9;
}
