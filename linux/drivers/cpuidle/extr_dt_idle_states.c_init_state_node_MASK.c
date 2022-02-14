
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct of_device_id {int data; } ;
struct device_node {char* name; } ;
struct cpuidle_state {int desc; int name; int flags; scalar_t__ target_residency; scalar_t__ exit_latency; int enter_s2idle; int enter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,char const**) ;
 int FUNC_2 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_3 (char*,struct device_node*) ;
 int FUNC_4 (int ,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct cpuidle_state *VAR_4,
      const struct of_device_id *VAR_5,
      struct device_node *VAR_6)
{
 int VAR_7;
 const char *VAR_8;






 VAR_4->enter = VAR_5->data;





 VAR_4->enter_s2idle = VAR_5->data;

 VAR_7 = FUNC_2(VAR_6, "wakeup-latency-us",
       &VAR_4->exit_latency);
 if (VAR_7) {
  u32 VAR_9, VAR_10;

  VAR_7 = FUNC_2(VAR_6, "entry-latency-us",
        &VAR_9);
  if (VAR_7) {
   FUNC_3(" * %pOF missing entry-latency-us property\n",
     VAR_6);
   return -VAR_3;
  }

  VAR_7 = FUNC_2(VAR_6, "exit-latency-us",
        &VAR_10);
  if (VAR_7) {
   FUNC_3(" * %pOF missing exit-latency-us property\n",
     VAR_6);
   return -VAR_3;
  }




  VAR_4->exit_latency = VAR_9 + VAR_10;
 }

 VAR_7 = FUNC_2(VAR_6, "min-residency-us",
       &VAR_4->target_residency);
 if (VAR_7) {
  FUNC_3(" * %pOF missing min-residency-us property\n",
        VAR_6);
  return -VAR_3;
 }

 VAR_7 = FUNC_1(VAR_6, "idle-state-name", &VAR_8);
 if (VAR_7)
  VAR_8 = VAR_6->name;

 VAR_4->flags = 0;
 if (FUNC_0(VAR_6, "local-timer-stop"))
  VAR_4->flags |= VAR_1;





 FUNC_4(VAR_4->name, VAR_6->name, VAR_2 - 1);
 FUNC_4(VAR_4->desc, VAR_8, VAR_0 - 1);
 return 0;
}
