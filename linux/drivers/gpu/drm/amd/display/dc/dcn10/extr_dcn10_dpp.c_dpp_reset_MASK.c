
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn10_dpp {int pwl_data; int scl_data; int * filter_v; int * filter_h; int * filter_v_c; int * filter_h_c; } ;


 struct dcn10_dpp* FUNC_0 (struct dpp*) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct dpp *VAR_0)
{
 struct dcn10_dpp *VAR_1 = FUNC_0(VAR_0);

 VAR_1->filter_h_c = ((void*)0);
 VAR_1->filter_v_c = ((void*)0);
 VAR_1->filter_h = ((void*)0);
 VAR_1->filter_v = ((void*)0);

 FUNC_1(&VAR_1->scl_data, 0, sizeof(VAR_1->scl_data));
 FUNC_1(&VAR_1->pwl_data, 0, sizeof(VAR_1->pwl_data));
}
