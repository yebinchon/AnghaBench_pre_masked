
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct device_node {int dummy; } ;
struct cpuidle_state {int dummy; } ;
struct cpuidle_driver {unsigned int state_count; struct cpuidle_state* states; int cpumask; } ;
typedef int cpumask_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct device_node*,int,int const*) ;
 int FUNC_2 (struct cpuidle_state*,struct of_device_id const*,struct device_node*) ;
 struct device_node* FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;
 struct of_device_id* FUNC_5 (struct of_device_id const*,struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*,char*,int) ;
 int FUNC_8 (char*,struct device_node*,int) ;
 int FUNC_9 (char*,...) ;

int FUNC_10(struct cpuidle_driver *VAR_4,
   const struct of_device_id *VAR_5,
   unsigned int VAR_6)
{
 struct cpuidle_state *VAR_7;
 struct device_node *VAR_8, *VAR_9;
 const struct of_device_id *VAR_10;
 int VAR_11, VAR_12 = 0;
 const cpumask_t *VAR_13;
 unsigned int VAR_14 = VAR_6;

 if (VAR_14 >= VAR_0)
  return -VAR_1;






 VAR_13 = VAR_4->cpumask ? : VAR_3;
 VAR_9 = FUNC_3(FUNC_0(VAR_13));

 for (VAR_11 = 0; ; VAR_11++) {
  VAR_8 = FUNC_7(VAR_9, "cpu-idle-states", VAR_11);
  if (!VAR_8)
   break;

  VAR_10 = FUNC_5(VAR_5, VAR_8);
  if (!VAR_10) {
   VAR_12 = -VAR_2;
   break;
  }

  if (!FUNC_4(VAR_8)) {
   FUNC_6(VAR_8);
   continue;
  }

  if (!FUNC_1(VAR_8, VAR_11, VAR_13)) {
   FUNC_9("%pOF idle state not valid, bailing out\n",
    VAR_8);
   VAR_12 = -VAR_1;
   break;
  }

  if (VAR_14 == VAR_0) {
   FUNC_9("State index reached static CPU idle driver states array size\n");
   break;
  }

  VAR_7 = &VAR_4->states[VAR_14++];
  VAR_12 = FUNC_2(VAR_7, VAR_10, VAR_8);
  if (VAR_12) {
   FUNC_8("Parsing idle state node %pOF failed with err %d\n",
          VAR_8, VAR_12);
   VAR_12 = -VAR_1;
   break;
  }
  FUNC_6(VAR_8);
 }

 FUNC_6(VAR_8);
 FUNC_6(VAR_9);
 if (VAR_12)
  return VAR_12;




 if (VAR_11)
  VAR_4->state_count = VAR_14;






 return VAR_11;
}
