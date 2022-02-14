
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct dc_rgb* lut3; struct dc_rgb* lut2; struct dc_rgb* lut1; struct dc_rgb* lut0; } ;
struct TYPE_3__ {struct dc_rgb* lut3; struct dc_rgb* lut2; struct dc_rgb* lut1; struct dc_rgb* lut0; } ;
struct tetrahedral_params {int use_12bits; TYPE_2__ tetrahedral_9; TYPE_1__ tetrahedral_17; int use_tetrahedral_9; } ;
struct dpp {int dummy; } ;
struct dc_rgb {int dummy; } ;
typedef enum dc_lut_mode { ____Placeholder_dc_lut_mode } dc_lut_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dpp*,int,int) ;
 int FUNC_1 (struct dpp*,int) ;
 int FUNC_2 (struct dpp*,struct dc_rgb*,int) ;
 int FUNC_3 (struct dpp*,struct dc_rgb*,int) ;
 int FUNC_4 (struct dpp*,int,int,int) ;
 int FUNC_5 (struct dpp*,int*,int*) ;

bool FUNC_6(
  struct dpp *VAR_3,
  struct tetrahedral_params *VAR_4)
{
 enum dc_lut_mode VAR_5;
 bool VAR_6;
 bool VAR_7;
 struct dc_rgb *VAR_8;
 struct dc_rgb *VAR_9;
 struct dc_rgb *VAR_10;
 struct dc_rgb *VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_3, VAR_0, 0, 0);
  return 0;
 }
 VAR_5 = FUNC_5(VAR_3, &VAR_6, &VAR_7);

 if (VAR_5 == VAR_0 || VAR_5 == VAR_2)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_2;

 VAR_6 = !VAR_4->use_tetrahedral_9;
 VAR_7 = VAR_4->use_12bits;
 if (VAR_6) {
  VAR_8 = VAR_4->tetrahedral_17.lut0;
  VAR_9 = VAR_4->tetrahedral_17.lut1;
  VAR_10 = VAR_4->tetrahedral_17.lut2;
  VAR_11 = VAR_4->tetrahedral_17.lut3;
  VAR_12 = sizeof(VAR_4->tetrahedral_17.lut0)/
     sizeof(VAR_4->tetrahedral_17.lut0[0]);
  VAR_13 = sizeof(VAR_4->tetrahedral_17.lut1)/
     sizeof(VAR_4->tetrahedral_17.lut1[0]);
 } else {
  VAR_8 = VAR_4->tetrahedral_9.lut0;
  VAR_9 = VAR_4->tetrahedral_9.lut1;
  VAR_10 = VAR_4->tetrahedral_9.lut2;
  VAR_11 = VAR_4->tetrahedral_9.lut3;
  VAR_12 = sizeof(VAR_4->tetrahedral_9.lut0)/
    sizeof(VAR_4->tetrahedral_9.lut0[0]);
  VAR_13 = sizeof(VAR_4->tetrahedral_9.lut1)/
    sizeof(VAR_4->tetrahedral_9.lut1[0]);
  }

 FUNC_0(VAR_3, VAR_5,
    VAR_7);
 FUNC_1(VAR_3, 0x1);
 if (VAR_7)
  FUNC_3(VAR_3, VAR_8, VAR_12);
 else
  FUNC_2(VAR_3, VAR_8, VAR_12);

 FUNC_1(VAR_3, 0x2);
 if (VAR_7)
  FUNC_3(VAR_3, VAR_9, VAR_13);
 else
  FUNC_2(VAR_3, VAR_9, VAR_13);

 FUNC_1(VAR_3, 0x4);
 if (VAR_7)
  FUNC_3(VAR_3, VAR_10, VAR_13);
 else
  FUNC_2(VAR_3, VAR_10, VAR_13);

 FUNC_1(VAR_3, 0x8);
 if (VAR_7)
  FUNC_3(VAR_3, VAR_11, VAR_13);
 else
  FUNC_2(VAR_3, VAR_11, VAR_13);


 FUNC_4(VAR_3, VAR_5, VAR_7,
     VAR_6);

 return 1;
}
