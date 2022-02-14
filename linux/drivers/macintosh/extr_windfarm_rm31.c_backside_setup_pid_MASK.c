
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_pid_param {int max; int min; } ;
typedef int s32 ;


 int VAR_0 ;
 struct wf_pid_param VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wf_pid_param VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct wf_pid_param*) ;

__attribute__((used)) static void FUNC_6(void)
{

 s32 VAR_6 = FUNC_4(VAR_0);
 s32 VAR_7 = FUNC_3(VAR_0);
 struct wf_pid_param VAR_8;

 VAR_8 = VAR_1;
 VAR_8.min = FUNC_0(VAR_8.min, VAR_6);
 VAR_8.max = FUNC_1(VAR_8.max, VAR_7);
 FUNC_5(&VAR_2, &VAR_8);

 VAR_8 = VAR_4;
 FUNC_5(&VAR_5, &VAR_8);

 VAR_3 = 1;

 FUNC_2("wf_rm31: Backside control loop started.\n");
}
