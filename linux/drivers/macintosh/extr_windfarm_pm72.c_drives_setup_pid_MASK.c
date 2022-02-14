
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct wf_pid_param*) ;

__attribute__((used)) static void FUNC_6(void)
{

 s32 VAR_4 = FUNC_4(VAR_0);
 s32 VAR_5 = FUNC_3(VAR_0);
 struct wf_pid_param VAR_6 = VAR_1;

 VAR_6.min = FUNC_0(VAR_6.min, VAR_4);
 VAR_6.max = FUNC_1(VAR_6.max, VAR_5);
 FUNC_5(&VAR_2, &VAR_6);
 VAR_3 = 1;

 FUNC_2("wf_pm72: Drive bay control loop started.\n");
}
