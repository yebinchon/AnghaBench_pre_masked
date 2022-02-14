
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_temperature_range {int min; int max; } ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_14,
           struct smu_temperature_range VAR_15)
{
 struct amdgpu_device *VAR_16 = VAR_14->adev;
 int VAR_17 = VAR_6;
 int VAR_18 = VAR_5;
 uint32_t VAR_19;

 VAR_17 = FUNC_3(VAR_6,
   VAR_15.min / VAR_4);
 VAR_18 = FUNC_4(VAR_5,
   VAR_15.max / VAR_4);

 if (VAR_17 > VAR_18)
  return -VAR_2;

 VAR_19 = FUNC_1(VAR_10, 0, VAR_13);
 VAR_19 = FUNC_0(VAR_19, VAR_11, VAR_3, 5);
 VAR_19 = FUNC_0(VAR_19, VAR_11, VAR_7, 1);
 VAR_19 = FUNC_0(VAR_19, VAR_11, VAR_8, 0);
 VAR_19 = FUNC_0(VAR_19, VAR_11, VAR_9, 0);
 VAR_19 = FUNC_0(VAR_19, VAR_11, VAR_0, (VAR_18 & 0xff));
 VAR_19 = FUNC_0(VAR_19, VAR_11, VAR_1, (VAR_17 & 0xff));
 VAR_19 = VAR_19 & (~VAR_12);

 FUNC_2(VAR_10, 0, VAR_13, VAR_19);

 return 0;
}
