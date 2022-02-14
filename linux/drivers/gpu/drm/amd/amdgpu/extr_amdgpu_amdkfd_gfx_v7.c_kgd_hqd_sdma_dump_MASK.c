
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

__attribute__((used)) static int FUNC_4(struct kgd_dev *VAR_9,
        uint32_t VAR_10, uint32_t VAR_11,
        uint32_t (**VAR_12)[2], uint32_t *VAR_13)
{
 struct amdgpu_device *VAR_14 = FUNC_2(VAR_9);
 uint32_t VAR_15 = VAR_10 * VAR_4 +
  VAR_11 * VAR_3;
 uint32_t VAR_16 = 0, VAR_17;



 *VAR_12 = FUNC_3((19+4) * 2, sizeof(uint32_t), VAR_1);
 if (*VAR_12 == ((void*)0))
  return -VAR_0;

 for (VAR_17 = VAR_6; VAR_17 <= VAR_5; VAR_17++)
  FUNC_0(VAR_15 + VAR_17);
 for (VAR_17 = VAR_7; VAR_17 <= VAR_8;
      VAR_17++)
  FUNC_0(VAR_15 + VAR_17);

 FUNC_1(VAR_16 != (19+4));
 *VAR_13 = VAR_16;

 return 0;
}
