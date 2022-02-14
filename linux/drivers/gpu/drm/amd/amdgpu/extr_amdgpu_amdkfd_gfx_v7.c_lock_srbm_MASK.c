
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int srbm_mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 struct amdgpu_device* FUNC_5 (struct kgd_dev*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct kgd_dev *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
   uint32_t VAR_4, uint32_t VAR_5)
{
 struct amdgpu_device *VAR_6 = FUNC_5(VAR_1);
 uint32_t VAR_7 = FUNC_1(VAR_3) | FUNC_0(VAR_2) | FUNC_3(VAR_5) | FUNC_2(VAR_4);

 FUNC_6(&VAR_6->srbm_mutex);
 FUNC_4(VAR_0, VAR_7);
}
