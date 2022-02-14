
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_training_settings {int pattern_for_eq; int eq_pattern_time; int cr_pattern_time; } ;
struct dc_link_settings {int dummy; } ;
struct dc_link {int preferred_training_settings; } ;
typedef enum dc_dp_training_pattern { ____Placeholder_dc_dp_training_pattern } dc_dp_training_pattern ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dc_link*,struct link_training_settings*) ;
 int FUNC_1 (struct dc_link*,int ,int *,int ) ;
 int FUNC_2 (struct dc_link*,int) ;
 int FUNC_3 (struct dc_link*,struct dc_link_settings const*,int *,struct link_training_settings*) ;
 int FUNC_4 (struct dc_link*,struct link_training_settings*,int ) ;
 int FUNC_5 (struct dc_link*,int ) ;

bool FUNC_6(
 struct dc_link *VAR_3,
 const struct dc_link_settings *VAR_4)
{
 struct link_training_settings VAR_5;
 enum dc_dp_training_pattern VAR_6 = VAR_1;

 FUNC_3(
   VAR_3,
   VAR_4,
   &VAR_3->preferred_training_settings,
   &VAR_5);




 FUNC_2(VAR_3, VAR_6);


 FUNC_0(VAR_3, &VAR_5);


 FUNC_5(VAR_3, VAR_5.cr_pattern_time);




 FUNC_2(VAR_3, VAR_5.pattern_for_eq);


 FUNC_0(VAR_3, &VAR_5);


 FUNC_5(VAR_3, VAR_5.eq_pattern_time);




 FUNC_1(VAR_3, VAR_0, ((void*)0), 0);

 FUNC_4(VAR_3, &VAR_5, VAR_2);

 return 1;
}
