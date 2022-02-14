
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_14,
  struct PP_TemperatureRange *VAR_15)
{
 struct amdgpu_device *VAR_16 = VAR_14->adev;
 int VAR_17 = VAR_12 *
   VAR_4;
 int VAR_18 = VAR_11 *
   VAR_4;
 uint32_t VAR_19;

 if (VAR_17 < VAR_15->min)
  VAR_17 = VAR_15->min;
 if (VAR_18 > VAR_15->max)
  VAR_18 = VAR_15->max;

 if (VAR_17 > VAR_18)
  return -VAR_2;

 VAR_19 = FUNC_1(VAR_6, 0, VAR_13);

 VAR_19 = FUNC_0(VAR_19, VAR_7, VAR_3, 5);
 VAR_19 = FUNC_0(VAR_19, VAR_7, VAR_5, 1);
 VAR_19 = FUNC_0(VAR_19, VAR_7, VAR_0, (VAR_18 / VAR_4));
 VAR_19 = FUNC_0(VAR_19, VAR_7, VAR_1, (VAR_17 / VAR_4));
 VAR_19 &= (~VAR_10) &
   (~VAR_8) &
   (~VAR_9);

 FUNC_2(VAR_6, 0, VAR_13, VAR_19);

 return 0;
}
