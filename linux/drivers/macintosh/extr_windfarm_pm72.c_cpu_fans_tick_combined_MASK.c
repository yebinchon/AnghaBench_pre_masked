
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wf_cpu_pid_state {int target; } ;
struct wf_control {int name; } ;
typedef int s32 ;
struct TYPE_2__ {int rmaxn_exhaust_fan; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 struct wf_control** VAR_3 ;
 int FUNC_2 () ;
 TYPE_1__** VAR_4 ;
 struct wf_cpu_pid_state* VAR_5 ;
 struct wf_control** VAR_6 ;
 struct wf_control** VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int) ;
 int VAR_9 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,int*,int*) ;
 int FUNC_6 (struct wf_control*,int*) ;
 int FUNC_7 (struct wf_control*) ;
 int FUNC_8 (struct wf_control*,int) ;
 int FUNC_9 (struct wf_cpu_pid_state*,int,int) ;

__attribute__((used)) static void FUNC_10(void)
{
 s32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 s32 VAR_15, VAR_16, VAR_17, VAR_18;
 struct wf_control *VAR_19, *VAR_20;
 struct wf_cpu_pid_state *VAR_21 = &VAR_5[0];
 int VAR_22, VAR_23;

 FUNC_0("* cpu fans_tick_combined()\n");


 FUNC_6(VAR_7[0], &VAR_21->target);

 FUNC_0("  CPUs: cur_target = %d RPM\n", VAR_21->target);


 VAR_22 = FUNC_5(0, &VAR_10, &VAR_11);
 if (VAR_22) {
  VAR_8 |= VAR_2;
  FUNC_2();
  return;
 }
 VAR_22 = FUNC_5(1, &VAR_12, &VAR_13);
 if (VAR_22) {
  VAR_8 |= VAR_2;
  FUNC_2();
  return;
 }


 VAR_14 = FUNC_3(VAR_14, FUNC_3(VAR_10, VAR_12));


 if (FUNC_1(VAR_14))
  return;


 VAR_15 = FUNC_3(VAR_10, VAR_12);
 VAR_16 = FUNC_3(VAR_11, VAR_13);


 FUNC_9(VAR_21, VAR_16, VAR_15);


 VAR_17 = (VAR_21->target * VAR_0) >> 16;


 VAR_19 = VAR_6[0];
 VAR_20 = VAR_6[1];
 if (!VAR_19) {
  VAR_19 = VAR_20;
  VAR_20 = ((void*)0);
 }
 VAR_18 = (VAR_21->target * FUNC_7(VAR_19)) /
  VAR_4[0]->rmaxn_exhaust_fan;

 FUNC_0("  CPUs: target = %d RPM\n", VAR_21->target);
 FUNC_0("  CPUs: intake = %d RPM\n", VAR_17);
 FUNC_0("  CPUs: pump   = %d RPM\n", VAR_18);

 for (VAR_23 = 0; VAR_23 < VAR_9; VAR_23++) {
  VAR_22 = FUNC_8(VAR_7[VAR_23], VAR_21->target);
  if (VAR_22) {
   FUNC_4("wf_pm72: Fan %s reports error %d\n",
       VAR_7[VAR_23]->name, VAR_22);
   VAR_8 |= VAR_1;
  }
  VAR_22 = FUNC_8(VAR_3[VAR_23], VAR_17);
  if (VAR_22) {
   FUNC_4("wf_pm72: Fan %s reports error %d\n",
       VAR_3[VAR_23]->name, VAR_22);
   VAR_8 |= VAR_1;
  }
  VAR_22 = 0;
  if (VAR_6[VAR_23])
   VAR_22 = FUNC_8(VAR_6[VAR_23], VAR_18);
  if (VAR_22) {
   FUNC_4("wf_pm72: Pump %s reports error %d\n",
       VAR_6[VAR_23]->name, VAR_22);
   VAR_8 |= VAR_1;
  }
 }
}
