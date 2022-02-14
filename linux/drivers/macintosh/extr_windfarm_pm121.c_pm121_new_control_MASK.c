
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct wf_control*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct wf_control *VAR_5)
{
 int VAR_6 = 1;

 if (VAR_4)
  return;

 VAR_6 = FUNC_0(VAR_5, "optical-drive-fan", VAR_3) && VAR_6;
 VAR_6 = FUNC_0(VAR_5, "hard-drive-fan", VAR_2) && VAR_6;
 VAR_6 = FUNC_0(VAR_5, "cpu-fan", VAR_1) && VAR_6;
 VAR_6 = FUNC_0(VAR_5, "cpufreq-clamp", VAR_0) && VAR_6;

 if (VAR_6)
  VAR_4 = 1;
}
