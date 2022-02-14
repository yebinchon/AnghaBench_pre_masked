
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_transform {int dummy; } ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;


 int FUNC_0 () ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(
 struct dce_transform *VAR_9,
 enum dc_color_depth VAR_10)
{
 int VAR_11 = 0;






 switch (VAR_10) {
 case 129:

  VAR_11 = 0x3F00;
  break;
 case 128:

  VAR_11 = 0x3FC0;
  break;
 case 131:

  VAR_11 = 0x3FFC;
  break;
 case 130:

  VAR_11 = 0x3FFF;
  break;
 default:
  VAR_11 = 0x3FC0;
  FUNC_0();
 }
 FUNC_1(VAR_0, 0,
   VAR_6, 0,
   VAR_3, VAR_11);

 FUNC_1(VAR_1, 0,
   VAR_7, 0,
   VAR_4, VAR_11);

 FUNC_1(VAR_2, 0,
   VAR_8, 0,
   VAR_5, VAR_11);
}
