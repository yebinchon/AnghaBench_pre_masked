
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {int dummy; } ;
struct cxd2880_dvbt_tpsinfo {size_t constellation; size_t rate_hp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,struct cxd2880_dvbt_tpsinfo*) ;
 int** VAR_3 ;

__attribute__((used)) static int FUNC_1(struct cxd2880_tnrdmd *VAR_4,
    int VAR_5, u8 *VAR_6)
{
 struct cxd2880_dvbt_tpsinfo VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 if (!VAR_4 || !VAR_6)
  return -VAR_2;

 VAR_10 = FUNC_0(VAR_4, &VAR_7);
 if (VAR_10)
  return VAR_10;

 if (VAR_7.constellation >= VAR_1 ||
     VAR_7.rate_hp >= VAR_0)
  return -VAR_2;

 VAR_8 = VAR_5 - VAR_3[VAR_7.constellation][VAR_7.rate_hp];

 if (VAR_8 < -15000)
  VAR_9 = 0;
 else if (VAR_8 < 0)
  VAR_9 = ((2 * (VAR_8 + 15000)) + 1500) / 3000;
 else if (VAR_8 < 20000)
  VAR_9 = (((4 * VAR_8) + 500) / 1000) + 10;
 else if (VAR_8 < 35000)
  VAR_9 = (((2 * (VAR_8 - 20000)) + 1500) / 3000) + 90;
 else
  VAR_9 = 100;

 *VAR_6 = (VAR_9 > 100) ? 100 : (u8)VAR_9;

 return VAR_10;
}
