
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 () ;
 struct amdgpu_device* FUNC_3 (struct kgd_dev*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct kgd_dev *VAR_4, unsigned int VAR_5,
     unsigned int VAR_6)
{
 struct amdgpu_device *VAR_7 = FUNC_3(VAR_4);







 uint32_t VAR_8 = (VAR_5 == 0) ? 0 : (uint32_t)VAR_5 |
   VAR_0;

 FUNC_1(VAR_1 + VAR_6, VAR_8);

 while (!(FUNC_0(VAR_2) & (1U << VAR_6)))
  FUNC_2();
 FUNC_1(VAR_2, 1U << VAR_6);


 FUNC_1(VAR_3 + VAR_6, VAR_8);

 return 0;
}
