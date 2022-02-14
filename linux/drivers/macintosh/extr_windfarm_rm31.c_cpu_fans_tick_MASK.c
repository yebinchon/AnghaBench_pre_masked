
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wf_cpu_pid_state {int target; } ;
typedef int s32 ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__*** VAR_2 ;
 int FUNC_2 () ;
 struct wf_cpu_pid_state* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,int *,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (struct wf_cpu_pid_state*,int ,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_7, VAR_8, VAR_9;
 s32 VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 FUNC_0("* cpu fans_tick_split()\n");

 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
  struct wf_cpu_pid_state *VAR_14 = &VAR_3[VAR_8];


  FUNC_6(VAR_2[VAR_8][0], &VAR_14->target);

  VAR_7 = FUNC_5(VAR_8, &VAR_11, &VAR_12);
  if (VAR_7) {
   VAR_5 |= VAR_1;
   FUNC_2();
   return;
  }


  VAR_13 = FUNC_3(VAR_13, VAR_11);


  if (FUNC_1(VAR_13))
   return;


  FUNC_8(VAR_14, VAR_12, VAR_11);

  FUNC_0("  CPU%d: target = %d RPM\n", VAR_8, VAR_14->target);


  VAR_10 = FUNC_3(VAR_14->target, VAR_4);


  for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
   VAR_7 = FUNC_7(VAR_2[VAR_8][VAR_9], VAR_10);
   if (VAR_7) {
    FUNC_4("wf_rm31: Fan %s reports error %d\n",
        VAR_2[VAR_8][VAR_9]->name, VAR_7);
    VAR_5 |= VAR_0;
   }
  }
 }
}
