
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
struct PP_TemperatureRange {int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_12,
  struct PP_TemperatureRange *VAR_13)
{
 struct amdgpu_device *VAR_14 = VAR_12->adev;
 int VAR_15 = VAR_10 *
   VAR_4;
 int VAR_16 = VAR_9 *
   VAR_4;
 uint32_t VAR_17;

 if (VAR_15 < VAR_13->min)
  VAR_15 = VAR_13->min;
 if (VAR_16 > VAR_13->max)
  VAR_16 = VAR_13->max;

 if (VAR_15 > VAR_16)
  return -VAR_2;

 VAR_17 = FUNC_1(VAR_6, 0, VAR_11);

 VAR_17 = FUNC_0(VAR_17, VAR_7, VAR_3, 5);
 VAR_17 = FUNC_0(VAR_17, VAR_7, VAR_5, 1);
 VAR_17 = FUNC_0(VAR_17, VAR_7, VAR_0, (VAR_16 / VAR_4));
 VAR_17 = FUNC_0(VAR_17, VAR_7, VAR_1, (VAR_15 / VAR_4));
 VAR_17 = VAR_17 & (~VAR_8);

 FUNC_2(VAR_6, 0, VAR_11, VAR_17);

 return 0;
}
