
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {scalar_t__ in_gpu_reset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_3(struct kgd_dev *VAR_6, uint16_t VAR_7)
{
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *) VAR_6;
 int VAR_9;
 unsigned int VAR_10;

 if (VAR_8->in_gpu_reset)
  return -VAR_2;

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  if (!FUNC_2(VAR_8, VAR_9))
   continue;

  VAR_10 = FUNC_0(VAR_3 + VAR_9);
  if ((VAR_10 & VAR_1) &&
   (VAR_10 & VAR_0) == VAR_7) {
   FUNC_1(VAR_4, 1 << VAR_9);
   FUNC_0(VAR_5);
   break;
  }
 }

 return 0;
}
