
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int channel; int master; } ;
struct stm_source_device {TYPE_3__ output; TYPE_2__* data; int link_lock; int link; int link_entry; } ;
struct stm_device {TYPE_1__* data; int link_lock; int dev; int link_mutex; } ;
struct TYPE_5__ {int (* unlink ) (TYPE_2__*) ;} ;
struct TYPE_4__ {int (* unlink ) (TYPE_1__*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct stm_device* FUNC_7 (int ,int *,int) ;
 int FUNC_8 (struct stm_device*,TYPE_3__*) ;
 int FUNC_9 (struct stm_device*) ;
 int VAR_1 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct stm_source_device *VAR_2,
      struct stm_device *VAR_3)
{
 struct stm_device *VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_3->link_mutex);


 FUNC_5(&VAR_3->link_lock);
 FUNC_5(&VAR_2->link_lock);
 VAR_4 = FUNC_7(VAR_2->link, &VAR_1, 1);






 if (VAR_4 != VAR_3) {
  VAR_5 = -VAR_0;
  goto unlock;
 }

 FUNC_8(VAR_4, &VAR_2->output);
 FUNC_0(&VAR_2->link_entry);
 FUNC_2(&VAR_4->dev);
 FUNC_3(&VAR_4->dev);

 FUNC_9(VAR_4);
 FUNC_4(VAR_2->link, ((void*)0));

unlock:
 FUNC_6(&VAR_2->link_lock);
 FUNC_6(&VAR_3->link_lock);





 if (!VAR_5) {
  if (VAR_2->data->unlink)
   VAR_2->data->unlink(VAR_2->data);

  if (VAR_3->data->unlink)
   VAR_3->data->unlink(VAR_3->data, VAR_2->output.master,
       VAR_2->output.channel);
 }

 return VAR_5;
}
