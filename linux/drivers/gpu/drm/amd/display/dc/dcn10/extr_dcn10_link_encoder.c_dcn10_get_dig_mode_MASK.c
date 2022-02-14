
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct link_encoder {int dummy; } ;
struct dcn10_link_encoder {int dummy; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dcn10_link_encoder* FUNC_1 (struct link_encoder*) ;

enum signal_type FUNC_2(
 struct link_encoder *VAR_7)
{
 struct dcn10_link_encoder *VAR_8 = FUNC_1(VAR_7);
 uint32_t VAR_9;
 FUNC_0(VAR_0, VAR_1, &VAR_9);
 switch (VAR_9) {
 case 1:
  return VAR_2;
 case 2:
  return VAR_4;
 case 3:
  return VAR_5;
 case 5:
  return VAR_3;
 default:
  return VAR_6;
 }
 return VAR_6;
}
