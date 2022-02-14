
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce110_opp {int dummy; } ;
struct clamping_and_pixel_encoding_params {int clamping_level; } ;







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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int,int ,int) ;

void FUNC_1(
 struct dce110_opp *VAR_12,
 const struct clamping_and_pixel_encoding_params *VAR_13)
{
 FUNC_0(VAR_0, 0,
  VAR_5, 0,
  VAR_1, 0);

 switch (VAR_13->clamping_level) {
 case 132:
  break;
 case 129:
  FUNC_0(VAR_0, 0,
   VAR_5, 1,
   VAR_1, 1);
  break;
 case 131:
  FUNC_0(VAR_0, 0,
   VAR_5, 1,
   VAR_1, 2);
  break;
 case 130:
  FUNC_0(VAR_0, 0,
   VAR_5, 1,
   VAR_1, 3);
  break;
 case 128:

  FUNC_0(VAR_0, 0,
   VAR_5, 1,
   VAR_1, 7);


  FUNC_0(VAR_4, 0,
   VAR_8, 0x10,
   VAR_11, 0xFEF);

  FUNC_0(VAR_3, 0,
   VAR_7, 0x10,
   VAR_10, 0xFEF);

  FUNC_0(VAR_2, 0,
   VAR_6, 0x10,
   VAR_9, 0xFEF);
  break;
 default:
  break;
 }
}
