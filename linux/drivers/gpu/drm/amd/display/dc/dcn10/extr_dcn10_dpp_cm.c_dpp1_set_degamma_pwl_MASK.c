
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwl_params {int hw_points_num; int rgb_resulted; } ;
struct dpp {int dummy; } ;


 int FUNC_0 (struct dpp*,int*) ;
 int FUNC_1 (struct dpp*,int) ;
 int FUNC_2 (struct dpp*) ;
 int FUNC_3 (struct dpp*,int) ;
 int FUNC_4 (struct dpp*,int ,int ,int) ;
 int FUNC_5 (struct dpp*,struct pwl_params const*) ;
 int FUNC_6 (struct dpp*,struct pwl_params const*) ;

void FUNC_7(struct dpp *VAR_0,
         const struct pwl_params *VAR_1)
{
 bool VAR_2 = 1;

 FUNC_3(VAR_0, 1);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0, &VAR_2);
 if (VAR_2 == 1)
  FUNC_6(VAR_0, VAR_1);
 else
  FUNC_5(VAR_0, VAR_1);

 FUNC_4(VAR_0, VAR_1->rgb_resulted,
       VAR_1->hw_points_num, !VAR_2);
 FUNC_1(VAR_0, !VAR_2);
}
