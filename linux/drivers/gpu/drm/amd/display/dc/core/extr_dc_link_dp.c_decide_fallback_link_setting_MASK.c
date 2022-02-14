
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link_settings {void* link_rate; void* lane_count; } ;
typedef enum link_training_result { ____Placeholder_link_training_result } link_training_result ;


 void* VAR_0 ;
 void* VAR_1 ;






 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static bool FUNC_4(
  struct dc_link_settings VAR_2,
  struct dc_link_settings *VAR_3,
  enum link_training_result VAR_4)
{
 if (!VAR_3)
  return 0;

 switch (VAR_4) {
 case 133:
 case 132:
 case 131:
 case 128:
 {
  if (!FUNC_1
    (VAR_3->link_rate)) {
   VAR_3->link_rate =
    FUNC_3(
     VAR_3->link_rate);
  } else if (!FUNC_0
    (VAR_3->lane_count)) {
   VAR_3->link_rate =
    VAR_2.link_rate;
   if (VAR_4 == 133)
    return 0;
   else if (VAR_4 == 132)
    VAR_3->lane_count =
      VAR_0;
   else if (VAR_4 ==
     131)
    VAR_3->lane_count =
      VAR_1;
   else
    VAR_3->lane_count =
     FUNC_2(
     VAR_3->lane_count);
  } else {
   return 0;
  }
  break;
 }
 case 129:
 {
  if (!FUNC_0
    (VAR_3->lane_count)) {
   VAR_3->lane_count =
    FUNC_2(
     VAR_3->lane_count);
  } else if (!FUNC_1
    (VAR_3->link_rate)) {
   VAR_3->link_rate =
    FUNC_3(
     VAR_3->link_rate);
  } else {
   return 0;
  }
  break;
 }
 case 130:
 {
  if (!FUNC_1
    (VAR_3->link_rate)) {
   VAR_3->link_rate =
    FUNC_3(
     VAR_3->link_rate);
  } else {
   return 0;
  }
  break;
 }
 default:
  return 0;
 }
 return 1;
}
