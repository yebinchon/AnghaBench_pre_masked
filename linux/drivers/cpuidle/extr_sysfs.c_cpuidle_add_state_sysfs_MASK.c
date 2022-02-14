
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_state_kobj {int kobj; int kobj_unregister; struct cpuidle_device* device; int * state_usage; int * state; } ;
struct cpuidle_driver {int state_count; int * states; } ;
struct cpuidle_device_kobj {int kobj; } ;
struct cpuidle_device {struct cpuidle_state_kobj** kobjs; int * states_usage; struct cpuidle_device_kobj* kobj_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpuidle_state_kobj*) ;
 int FUNC_1 (struct cpuidle_device*,int) ;
 struct cpuidle_driver* FUNC_2 (struct cpuidle_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cpuidle_state_kobj*) ;
 int FUNC_5 (int *,int *,int *,char*,int) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;
 struct cpuidle_state_kobj* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct cpuidle_device *VAR_4)
{
 int VAR_5, VAR_6 = -VAR_0;
 struct cpuidle_state_kobj *VAR_7;
 struct cpuidle_device_kobj *VAR_8 = VAR_4->kobj_dev;
 struct cpuidle_driver *VAR_9 = FUNC_2(VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_9->state_count; VAR_5++) {
  VAR_7 = FUNC_7(sizeof(struct cpuidle_state_kobj), VAR_1);
  if (!VAR_7) {
   VAR_6 = -VAR_0;
   goto error_state;
  }
  VAR_7->state = &VAR_9->states[VAR_5];
  VAR_7->state_usage = &VAR_4->states_usage[VAR_5];
  VAR_7->device = VAR_4;
  FUNC_3(&VAR_7->kobj_unregister);

  VAR_6 = FUNC_5(&VAR_7->kobj, &VAR_3,
        &VAR_8->kobj, "state%d", VAR_5);
  if (VAR_6) {
   FUNC_4(VAR_7);
   goto error_state;
  }
  FUNC_0(VAR_7);
  FUNC_6(&VAR_7->kobj, VAR_2);
  VAR_4->kobjs[VAR_5] = VAR_7;
 }

 return 0;

error_state:
 for (VAR_5 = VAR_5 - 1; VAR_5 >= 0; VAR_5--)
  FUNC_1(VAR_4, VAR_5);
 return VAR_6;
}
