
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int of_node; TYPE_1__* parent; int * bus; int * type; } ;
struct counter_device_state {int id; int num_groups; int groups_list; struct counter_device_state* groups; TYPE_2__ dev; } ;
struct counter_device {TYPE_1__* parent; struct counter_device_state* device_state; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct counter_device* const) ;
 int FUNC_2 (struct counter_device_state*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,struct counter_device* const) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct counter_device_state*) ;
 struct counter_device_state* FUNC_10 (int,int ) ;

int FUNC_11(struct counter_device *const VAR_5)
{
 struct counter_device_state *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_10(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_5->device_state = VAR_6;


 VAR_6->id = FUNC_7(&VAR_4, 0, 0, VAR_1);
 if (VAR_6->id < 0) {
  VAR_7 = VAR_6->id;
  goto err_free_device_state;
 }


 VAR_6->dev.type = &VAR_3;
 VAR_6->dev.bus = &VAR_2;
 if (VAR_5->parent) {
  VAR_6->dev.parent = VAR_5->parent;
  VAR_6->dev.of_node = VAR_5->parent->of_node;
 }
 FUNC_4(&VAR_6->dev, "counter%d", VAR_6->id);
 FUNC_6(&VAR_6->dev);
 FUNC_3(&VAR_6->dev, VAR_5);


 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  goto err_free_id;


 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7)
  goto err_free_groups_list;


 VAR_7 = FUNC_5(&VAR_6->dev);
 if (VAR_7)
  goto err_free_groups;

 return 0;

err_free_groups:
 FUNC_9(VAR_6->groups);
err_free_groups_list:
 FUNC_0(VAR_6->groups_list,
     VAR_6->num_groups);
err_free_id:
 FUNC_8(&VAR_4, VAR_6->id);
err_free_device_state:
 FUNC_9(VAR_6);
 return VAR_7;
}
