
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {int mutex; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct smu_context*,int ) ;
 int FUNC_7 (struct smu_context*,int ) ;

__attribute__((used)) static int FUNC_8(struct smu_context *VAR_6,
           uint32_t VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_6->adev;
 int VAR_9;
 uint32_t VAR_10, VAR_11;

 if (!VAR_7)
  return -VAR_1;

 FUNC_4(&(VAR_6->mutex));
 VAR_9 = FUNC_6(VAR_6, 0);
 if (VAR_9)
  goto set_fan_speed_rpm_failed;

 VAR_11 = FUNC_3(VAR_8);
 VAR_10 = 60 * VAR_11 * 10000 / (8 * VAR_7);
 FUNC_2(VAR_4, 0, VAR_5,
       FUNC_0(FUNC_1(VAR_4, 0, VAR_5),
       VAR_0, VAR_3,
       VAR_10));

 VAR_9 = FUNC_7(VAR_6, VAR_2);

set_fan_speed_rpm_failed:
 FUNC_5(&(VAR_6->mutex));
 return VAR_9;
}
