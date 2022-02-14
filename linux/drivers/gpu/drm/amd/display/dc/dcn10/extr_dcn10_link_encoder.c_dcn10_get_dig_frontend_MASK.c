
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_encoder {int dummy; } ;
struct dcn10_link_encoder {int dummy; } ;
typedef int int32_t ;
typedef enum engine_id { ____Placeholder_engine_id } engine_id ;


 int FUNC_0 (int) ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int*) ;
 struct dcn10_link_encoder* FUNC_2 (struct link_encoder*) ;

unsigned int FUNC_3(struct link_encoder *VAR_10)
{
 struct dcn10_link_encoder *VAR_11 = FUNC_2(VAR_10);
 int32_t VAR_12;
 enum engine_id VAR_13;

 FUNC_1(VAR_0, VAR_1, &VAR_12);

 switch (VAR_12) {
 case 134:
  VAR_13 = VAR_2;
  break;
 case 133:
  VAR_13 = VAR_3;
  break;
 case 132:
  VAR_13 = VAR_4;
  break;
 case 131:
  VAR_13 = VAR_5;
  break;
 case 130:
  VAR_13 = VAR_6;
  break;
 case 129:
  VAR_13 = VAR_7;
  break;
 case 128:
  VAR_13 = VAR_8;
  break;
 default:

  FUNC_0(0);
  VAR_13 = VAR_9;
 }

 return VAR_13;

}
