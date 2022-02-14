
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct amdgpu_device* FUNC_2 (struct kgd_dev*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,scalar_t__,scalar_t__) ;
 scalar_t__** FUNC_4 (int,int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_5(struct kgd_dev *VAR_11,
        uint32_t VAR_12, uint32_t VAR_13,
        uint32_t (**VAR_14)[2], uint32_t *VAR_15)
{
 struct amdgpu_device *VAR_16 = FUNC_2(VAR_11);
 uint32_t VAR_17 = FUNC_3(VAR_16, VAR_12, VAR_13);
 uint32_t VAR_18 = 0, VAR_19;



 *VAR_14 = FUNC_4((19+6+7+10) * 2, sizeof(uint32_t), VAR_1);
 if (*VAR_14 == ((void*)0))
  return -VAR_0;

 for (VAR_19 = VAR_9; VAR_19 <= VAR_4; VAR_19++)
  FUNC_0(VAR_17 + VAR_19);
 for (VAR_19 = VAR_10; VAR_19 <= VAR_3; VAR_19++)
  FUNC_0(VAR_17 + VAR_19);
 for (VAR_19 = VAR_5;
      VAR_19 <= VAR_8; VAR_19++)
  FUNC_0(VAR_17 + VAR_19);
 for (VAR_19 = VAR_7;
      VAR_19 <= VAR_6; VAR_19++)
  FUNC_0(VAR_17 + VAR_19);

 FUNC_1(VAR_18 != (19+6+7+10));
 *VAR_15 = VAR_18;

 return 0;
}
