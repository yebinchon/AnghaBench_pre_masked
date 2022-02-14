
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcn10_opp {int dummy; } ;
struct clamping_and_pixel_encoding_params {int pixel_encoding; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(
 struct dcn10_opp *VAR_2,
 const struct clamping_and_pixel_encoding_params *VAR_3)
{
 switch (VAR_3->pixel_encoding) {

 case 131:
 case 128:
  FUNC_0(VAR_0, VAR_1, 0);
  break;
 case 129:
  FUNC_0(VAR_0, VAR_1, 1);
  break;
 case 130:
  FUNC_0(VAR_0, VAR_1, 2);
  break;
 default:
  break;
 }
}
