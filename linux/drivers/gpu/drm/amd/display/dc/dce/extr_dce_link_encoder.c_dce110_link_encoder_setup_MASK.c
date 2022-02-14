
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_encoder {int dummy; } ;
struct dce110_link_encoder {int dummy; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;







 struct dce110_link_encoder* FUNC_2 (struct link_encoder*) ;

void FUNC_3(
 struct link_encoder *VAR_2,
 enum signal_type VAR_3)
{
 struct dce110_link_encoder *VAR_4 = FUNC_2(VAR_2);

 switch (VAR_3) {
 case 130:
 case 134:

  FUNC_1(VAR_0, VAR_1, 0);
  break;
 case 128:

  FUNC_1(VAR_0, VAR_1, 1);
  break;
 case 131:
 case 132:

  FUNC_1(VAR_0, VAR_1, 2);
  break;
 case 129:

  FUNC_1(VAR_0, VAR_1, 3);
  break;
 case 133:

  FUNC_1(VAR_0, VAR_1, 5);
  break;
 default:
  FUNC_0(0);

  break;
 }

}
