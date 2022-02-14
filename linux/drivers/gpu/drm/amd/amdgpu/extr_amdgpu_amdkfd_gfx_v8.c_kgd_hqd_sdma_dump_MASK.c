
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 struct amdgpu_device* FUNC_2 (struct kgd_dev*) ;
 scalar_t__** FUNC_3 (int,int,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int FUNC_4(struct kgd_dev *VAR_15,
        uint32_t VAR_16, uint32_t VAR_17,
        uint32_t (**VAR_18)[2], uint32_t *VAR_19)
{
 struct amdgpu_device *VAR_20 = FUNC_2(VAR_15);
 uint32_t VAR_21 = VAR_16 * VAR_4 +
  VAR_17 * VAR_3;
 uint32_t VAR_22 = 0, VAR_23;



 *VAR_18 = FUNC_3((19+4+2+3+7) * 2, sizeof(uint32_t), VAR_1);
 if (*VAR_18 == ((void*)0))
  return -VAR_0;

 for (VAR_23 = VAR_12; VAR_23 <= VAR_7; VAR_23++)
  FUNC_0(VAR_21 + VAR_23);
 for (VAR_23 = VAR_13; VAR_23 <= VAR_14;
      VAR_23++)
  FUNC_0(VAR_21 + VAR_23);
 for (VAR_23 = VAR_6; VAR_23 <= VAR_5;
      VAR_23++)
  FUNC_0(VAR_21 + VAR_23);
 for (VAR_23 = VAR_9; VAR_23 <= VAR_8;
      VAR_23++)
  FUNC_0(VAR_21 + VAR_23);
 for (VAR_23 = VAR_11; VAR_23 <= VAR_10;
      VAR_23++)
  FUNC_0(VAR_21 + VAR_23);

 FUNC_1(VAR_22 != (19+4+2+3+7));
 *VAR_19 = VAR_22;

 return 0;
}
