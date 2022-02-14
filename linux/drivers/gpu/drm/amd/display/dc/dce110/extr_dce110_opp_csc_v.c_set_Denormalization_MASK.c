
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct transform {int ctx; } ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct transform *VAR_4,
  enum dc_color_depth VAR_5)
{
 uint32_t VAR_6 = FUNC_0(VAR_4->ctx, VAR_3);

 switch (VAR_5) {
 case 128:

  FUNC_2(
   VAR_6,
   1,
   VAR_1,
   VAR_2);
  break;
 case 130:

  FUNC_2(
   VAR_6,
   2,
   VAR_1,
   VAR_2);
  break;
 case 129:

  FUNC_2(
   VAR_6,
   3,
   VAR_1,
   VAR_2);
  break;
 default:

  break;
 }

 FUNC_2(
  VAR_6,
  1,
  VAR_1,
  VAR_0);

 FUNC_1(VAR_4->ctx, VAR_3, VAR_6);
}
