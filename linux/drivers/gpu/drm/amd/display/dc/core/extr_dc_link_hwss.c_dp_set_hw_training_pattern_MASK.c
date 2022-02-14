
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link {int dummy; } ;
typedef enum dp_test_pattern { ____Placeholder_dp_test_pattern } dp_test_pattern ;
typedef enum dc_dp_training_pattern { ____Placeholder_dc_dp_training_pattern } dc_dp_training_pattern ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct dc_link*,int,int *,int ) ;

bool FUNC_1(
 struct dc_link *VAR_5,
 enum dc_dp_training_pattern VAR_6)
{
 enum dp_test_pattern VAR_7 = VAR_4;

 switch (VAR_6) {
 case 131:
  VAR_7 = VAR_0;
  break;
 case 130:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_3;
  break;
 default:
  break;
 }

 FUNC_0(VAR_5, VAR_7, ((void*)0), 0);

 return 1;
}
