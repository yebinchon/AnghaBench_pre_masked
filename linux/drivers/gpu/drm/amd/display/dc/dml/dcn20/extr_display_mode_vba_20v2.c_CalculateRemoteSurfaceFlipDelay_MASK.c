
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_mode_lib {int dummy; } ;


 int FUNC_0 (char*,double) ;

__attribute__((used)) static double FUNC_1(
  struct display_mode_lib *VAR_0,
  double VAR_1,
  double VAR_2,
  double VAR_3,
  double VAR_4,
  double VAR_5,
  double VAR_6,
  double VAR_7,
  double VAR_8,
  double VAR_9,
  double VAR_10,
  double VAR_11,
  double VAR_12,
  double VAR_13,
  double *VAR_14,
  double *VAR_15,
  double *VAR_16)
{
 double VAR_17, VAR_18, VAR_19;

 *VAR_14 = VAR_1 * VAR_2 * VAR_3 / VAR_4;
 VAR_17 = VAR_5 + VAR_6 + VAR_7;
 *VAR_15 = VAR_8 / (1 + VAR_9 / 100);
 VAR_18 = *VAR_14 * (1 + VAR_9 / 100);
 *VAR_16 = VAR_10 / VAR_18;
 FUNC_0(
   "DML::CalculateRemoteSurfaceFlipDelay: SrcActiveDrainRate: %f\n",
   *VAR_14);
 FUNC_0("DML::CalculateRemoteSurfaceFlipDelay: TSlvSetup: %f\n", VAR_17);
 FUNC_0("DML::CalculateRemoteSurfaceFlipDelay: TInitXFill: %f\n", *VAR_15);
 FUNC_0("DML::CalculateRemoteSurfaceFlipDelay: AvgfillRate: %f\n", VAR_18);
 FUNC_0("DML::CalculateRemoteSurfaceFlipDelay: TslvChk: %f\n", *VAR_16);
 VAR_19 = 2 * VAR_11 + VAR_17 + VAR_12 + VAR_13 + *VAR_16 + *VAR_15;
 FUNC_0("DML::CalculateRemoteSurfaceFlipDelay: RemoteSurfaceFlipDelay: %f\n", VAR_19);
 return VAR_19;
}
