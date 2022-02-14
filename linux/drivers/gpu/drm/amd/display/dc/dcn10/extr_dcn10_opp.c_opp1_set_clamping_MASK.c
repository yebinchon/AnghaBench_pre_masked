
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcn10_opp {int dummy; } ;
struct clamping_and_pixel_encoding_params {int clamping_level; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_1(
 struct dcn10_opp *VAR_3,
 const struct clamping_and_pixel_encoding_params *VAR_4)
{
 FUNC_0(VAR_0,
   VAR_2, 0,
   VAR_1, 0);

 switch (VAR_4->clamping_level) {
 case 132:
  FUNC_0(VAR_0,
    VAR_2, 1,
    VAR_1, 0);
  break;
 case 129:
  FUNC_0(VAR_0,
    VAR_2, 1,
    VAR_1, 1);
  break;
 case 131:
  FUNC_0(VAR_0,
    VAR_2, 1,
    VAR_1, 2);

  break;
 case 130:
  FUNC_0(VAR_0,
    VAR_2, 1,
    VAR_1, 3);
  break;
 case 128:

 default:
  break;
 }

}
