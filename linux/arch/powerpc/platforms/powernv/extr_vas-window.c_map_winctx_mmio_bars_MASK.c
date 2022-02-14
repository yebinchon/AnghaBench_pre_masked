
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vas_window {void* uwc_map; void* hvwc_map; } ;


 int FUNC_0 (struct vas_window*,int *,int*) ;
 int FUNC_1 (struct vas_window*,int *,int*) ;
 void* FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct vas_window*) ;

int FUNC_4(struct vas_window *VAR_0)
{
 int VAR_1;
 u64 VAR_2;

 FUNC_0(VAR_0, &VAR_2, &VAR_1);
 VAR_0->hvwc_map = FUNC_2("HVWCM_Window", VAR_2, VAR_1);

 FUNC_1(VAR_0, &VAR_2, &VAR_1);
 VAR_0->uwc_map = FUNC_2("UWCM_Window", VAR_2, VAR_1);

 if (!VAR_0->hvwc_map || !VAR_0->uwc_map) {
  FUNC_3(VAR_0);
  return -1;
 }

 return 0;
}
