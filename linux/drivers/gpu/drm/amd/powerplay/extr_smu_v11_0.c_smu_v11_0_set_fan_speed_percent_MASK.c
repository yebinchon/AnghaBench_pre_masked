
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (struct smu_context*,int ) ;
 int FUNC_6 (struct smu_context*,int ) ;

__attribute__((used)) static int
FUNC_7(struct smu_context *VAR_9, uint32_t VAR_10)
{
 struct amdgpu_device *VAR_11 = VAR_9->adev;
 uint32_t VAR_12, VAR_13;
 uint64_t VAR_14;

 if (VAR_10 > 100)
  VAR_10 = 100;

 if (FUNC_5(VAR_9, 0))
  return -VAR_2;

 VAR_12 = FUNC_0(FUNC_2(VAR_6, 0, VAR_8),
    VAR_1, VAR_5);
 if (!VAR_12)
  return -VAR_2;

 VAR_14 = (uint64_t)VAR_10 * VAR_12;
 FUNC_4(VAR_14, 100);
 VAR_13 = (uint32_t)VAR_14;

 FUNC_3(VAR_6, 0, VAR_7,
       FUNC_1(FUNC_2(VAR_6, 0, VAR_7),
       VAR_0, VAR_4, VAR_13));

 return FUNC_6(VAR_9, VAR_3);
}
