
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wf_pid_param {int max; int min; } ;
struct device_node {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wf_pid_param VAR_3 ;
 struct wf_pid_param VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct device_node* FUNC_2 (char*) ;
 int* FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct wf_pid_param*) ;

__attribute__((used)) static void FUNC_9(void)
{

 s32 VAR_5 = FUNC_7(VAR_0);
 s32 VAR_6 = FUNC_6(VAR_0);
 struct wf_pid_param VAR_7;
 struct device_node *VAR_8;
 int VAR_9 = 1;

 VAR_8 = FUNC_2("/u3@0,f8000000");
 if (VAR_8 != ((void*)0)) {
  const u32 *VAR_10 = FUNC_3(VAR_8, "device-rev", ((void*)0));
  if (VAR_10)
   if (((*VAR_10) & 0x3f) < 0x34)
    VAR_9 = 0;
  FUNC_4(VAR_8);
 }

 VAR_7 = VAR_9 ? VAR_4 : VAR_3;

 VAR_7.min = FUNC_0(VAR_7.min, VAR_5);
 VAR_7.max = FUNC_1(VAR_7.max, VAR_6);
 FUNC_8(&VAR_1, &VAR_7);
 VAR_2 = 1;

 FUNC_5("wf_pm72: Backside control loop started.\n");
}
