
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vas_window {int * uwc_map; int * hvwc_map; } ;


 int FUNC_0 (struct vas_window*,int *,int*) ;
 int FUNC_1 (struct vas_window*,int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct vas_window *VAR_1)
{
 int VAR_2;
 void *VAR_3;
 void *VAR_4;
 u64 VAR_5;

 FUNC_2(&VAR_0);

 VAR_4 = VAR_1->hvwc_map;
 VAR_1->hvwc_map = ((void*)0);

 VAR_3 = VAR_1->uwc_map;
 VAR_1->uwc_map = ((void*)0);

 FUNC_3(&VAR_0);

 if (VAR_4) {
  FUNC_0(VAR_1, &VAR_5, &VAR_2);
  FUNC_4(VAR_4, VAR_5, VAR_2);
 }

 if (VAR_3) {
  FUNC_1(VAR_1, &VAR_5, &VAR_2);
  FUNC_4(VAR_3, VAR_5, VAR_2);
 }
}
