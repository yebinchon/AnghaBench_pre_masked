
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {int dummy; } ;
typedef enum cxd2880_dvbt2_plp_constell { ____Placeholder_cxd2880_dvbt2_plp_constell } cxd2880_dvbt2_plp_constell ;
typedef enum cxd2880_dvbt2_plp_code_rate { ____Placeholder_cxd2880_dvbt2_plp_code_rate } cxd2880_dvbt2_plp_code_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int ,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int ,int*) ;
 int** VAR_4 ;

__attribute__((used)) static int FUNC_2(struct cxd2880_tnrdmd *VAR_5,
     int VAR_6, u8 *VAR_7)
{
 enum cxd2880_dvbt2_plp_constell VAR_8;
 enum cxd2880_dvbt2_plp_code_rate VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 if (!VAR_5 || !VAR_7)
  return -VAR_3;

 VAR_12 =
     FUNC_1(VAR_5, VAR_0, &VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 =
     FUNC_0(VAR_5, VAR_0,
            &VAR_9);
 if (VAR_12)
  return VAR_12;

 if (VAR_9 > VAR_2 || VAR_8 > VAR_1)
  return -VAR_3;

 VAR_10 = VAR_6 - VAR_4[VAR_8][VAR_9];

 if (VAR_10 < -15000)
  VAR_11 = 0;
 else if (VAR_10 < 0)
  VAR_11 = ((2 * (VAR_10 + 15000)) + 1500) / 3000;
 else if (VAR_10 < 20000)
  VAR_11 = (((4 * VAR_10) + 500) / 1000) + 10;
 else if (VAR_10 < 35000)
  VAR_11 = (((2 * (VAR_10 - 20000)) + 1500) / 3000) + 90;
 else
  VAR_11 = 100;

 *VAR_7 = (VAR_11 > 100) ? 100 : (u8)VAR_11;

 return VAR_12;
}
