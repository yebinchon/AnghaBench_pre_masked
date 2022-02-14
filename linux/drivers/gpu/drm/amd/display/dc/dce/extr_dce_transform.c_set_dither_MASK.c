
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_transform {int dummy; } ;
typedef enum dcp_spatial_dither_mode { ____Placeholder_dcp_spatial_dither_mode } dcp_spatial_dither_mode ;
typedef enum dcp_spatial_dither_depth { ____Placeholder_dcp_spatial_dither_depth } dcp_spatial_dither_depth ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;




 int FUNC_1 (int ,int ,int ,int,int ,int,int ,int,int ,int,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_2(
 struct dce_transform *VAR_7,
 bool VAR_8,
 enum dcp_spatial_dither_mode VAR_9,
 enum dcp_spatial_dither_depth VAR_10,
 bool VAR_11,
 bool VAR_12,
 bool VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = 0;

 switch (VAR_9) {
 case 131:
  VAR_15 = 0;
  break;
 case 128:
  VAR_15 = 1;
  break;
 case 130:
  VAR_15 = 2;
  break;
 case 129:
  VAR_15 = 3;
  break;
 default:

  FUNC_0();
 }

 switch (VAR_10) {
 case 132:
  VAR_14 = 0;
  break;
 case 133:
  VAR_14 = 1;
  break;
 default:

  FUNC_0();
 }


 FUNC_1(VAR_3, 0,
   VAR_5, VAR_8,
   VAR_6, VAR_15,
   VAR_4, VAR_14,
   VAR_0, VAR_11,
   VAR_2, VAR_12,
   VAR_1, VAR_13);
}
