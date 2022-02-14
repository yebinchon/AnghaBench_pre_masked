
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct hidpp_ff_work_data {int effect_id; int work; int params; void* size; void* command; struct hidpp_ff_private_data* data; } ;
struct hidpp_ff_private_data {TYPE_1__* hidpp; int workqueue_size; int wq; } ;
struct TYPE_2__ {int hid_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;
 struct hidpp_ff_work_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,void**,void*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct hidpp_ff_private_data *VAR_3, int VAR_4, u8 VAR_5, u8 *VAR_6, u8 VAR_7)
{
 struct hidpp_ff_work_data *VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 int VAR_9;

 if (!VAR_8)
  return -VAR_0;

 FUNC_0(&VAR_8->work, VAR_2);

 VAR_8->data = VAR_3;
 VAR_8->effect_id = VAR_4;
 VAR_8->command = VAR_5;
 VAR_8->size = VAR_7;
 FUNC_5(VAR_8->params, VAR_6, VAR_7);

 FUNC_1(&VAR_3->workqueue_size);
 FUNC_6(VAR_3->wq, &VAR_8->work);


 VAR_9 = FUNC_2(&VAR_3->workqueue_size);
 if (VAR_9 >= 20 && VAR_9 % 20 == 0)
  FUNC_3(VAR_3->hidpp->hid_dev, "Force feedback command queue contains %d commands, causing substantial delays!", VAR_9);

 return 0;
}
