
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int unregistration_work; int unreg_completion; int compat_devs_mutex; int compat_devs; int client_data_rwsem; int client_data; int unregistration_lock; int event_handler_lock; int event_handler_list; int coredev; int ** groups; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_device*) ;
 struct ib_device* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct ib_device*,int *) ;
 scalar_t__ FUNC_9 (struct ib_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;

struct ib_device *FUNC_12(size_t VAR_5)
{
 struct ib_device *VAR_6;

 if (FUNC_2(VAR_5 < sizeof(struct ib_device)))
  return ((void*)0);

 VAR_6 = FUNC_6(VAR_5, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_9(VAR_6)) {
  FUNC_5(VAR_6);
  return ((void*)0);
 }

 VAR_6->groups[0] = &VAR_2;
 FUNC_8(&VAR_6->coredev, VAR_6, &VAR_4);

 FUNC_0(&VAR_6->event_handler_list);
 FUNC_10(&VAR_6->event_handler_lock);
 FUNC_7(&VAR_6->unregistration_lock);




 FUNC_11(&VAR_6->client_data, VAR_1);
 FUNC_4(&VAR_6->client_data_rwsem);
 FUNC_11(&VAR_6->compat_devs, VAR_1);
 FUNC_7(&VAR_6->compat_devs_mutex);
 FUNC_3(&VAR_6->unreg_completion);
 FUNC_1(&VAR_6->unregistration_work, VAR_3);

 return VAR_6;
}
