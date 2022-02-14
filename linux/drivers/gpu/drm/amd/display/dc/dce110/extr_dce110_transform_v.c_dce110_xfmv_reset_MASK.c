
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transform {int dummy; } ;
struct dce_transform {int * filter_v_c; int * filter_h_c; int * filter_v; int * filter_h; } ;


 struct dce_transform* FUNC_0 (struct transform*) ;

__attribute__((used)) static void FUNC_1(struct transform *VAR_0)
{
 struct dce_transform *VAR_1 = FUNC_0(VAR_0);

 VAR_1->filter_h = ((void*)0);
 VAR_1->filter_v = ((void*)0);
 VAR_1->filter_h_c = ((void*)0);
 VAR_1->filter_v_c = ((void*)0);
}
