
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_cpu_pid_param {int dummy; } ;
struct wf_cpu_pid_state {int first; struct wf_cpu_pid_param param; } ;


 int FUNC_0 (struct wf_cpu_pid_state*,int ,int) ;

void FUNC_1(struct wf_cpu_pid_state *VAR_0,
       struct wf_cpu_pid_param *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(struct wf_cpu_pid_state));
 VAR_0->param = *VAR_1;
 VAR_0->first = 1;
}
