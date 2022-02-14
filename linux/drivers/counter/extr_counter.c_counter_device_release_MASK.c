
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct counter_device_state {int id; int num_groups; int groups_list; struct counter_device_state* const groups; } ;
struct counter_device {struct counter_device_state* device_state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct counter_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct counter_device_state* const) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct counter_device *const VAR_2 = FUNC_1(VAR_1);
 struct counter_device_state *const VAR_3 = VAR_2->device_state;

 FUNC_3(VAR_3->groups);
 FUNC_0(VAR_3->groups_list,
     VAR_3->num_groups);
 FUNC_2(&VAR_0, VAR_3->id);
 FUNC_3(VAR_3);
}
