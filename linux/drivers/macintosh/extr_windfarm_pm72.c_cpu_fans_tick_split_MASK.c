
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wf_cpu_pid_state {int target; } ;
typedef int s32 ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__** VAR_3 ;
 int FUNC_2 () ;
 struct wf_cpu_pid_state* VAR_4 ;
 TYPE_1__** VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int) ;
 int VAR_7 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,int*,int*) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (struct wf_cpu_pid_state*,int,int) ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_8, VAR_9;
 s32 VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 FUNC_0("* cpu fans_tick_split()\n");

 for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {
  struct wf_cpu_pid_state *VAR_14 = &VAR_4[VAR_9];


  FUNC_6(VAR_5[VAR_9], &VAR_14->target);

  FUNC_0("  CPU%d: cur_target = %d RPM\n", VAR_9, VAR_14->target);

  VAR_8 = FUNC_5(VAR_9, &VAR_11, &VAR_12);
  if (VAR_8) {
   VAR_6 |= VAR_2;
   FUNC_2();
   return;
  }


  VAR_13 = FUNC_3(VAR_13, VAR_11);


  if (FUNC_1(VAR_13))
   return;


  FUNC_8(VAR_14, VAR_12, VAR_11);

  FUNC_0("  CPU%d: target = %d RPM\n", VAR_9, VAR_14->target);


  VAR_8 = FUNC_7(VAR_5[VAR_9], VAR_14->target);
  if (VAR_8) {
   FUNC_4("wf_pm72: Fan %s reports error %d\n",
          VAR_5[VAR_9]->name, VAR_8);
   VAR_6 |= VAR_1;
   break;
  }


  VAR_10 = (VAR_14->target * VAR_0) >> 16;
  FUNC_0("  CPU%d: intake = %d RPM\n", VAR_9, VAR_10);
  VAR_8 = FUNC_7(VAR_3[VAR_9], VAR_10);
  if (VAR_8) {
   FUNC_4("wf_pm72: Fan %s reports error %d\n",
          VAR_3[VAR_9]->name, VAR_8);
   VAR_6 |= VAR_1;
   break;
  }
 }
}
