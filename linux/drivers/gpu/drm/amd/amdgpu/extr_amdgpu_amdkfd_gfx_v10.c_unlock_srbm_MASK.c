
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_dev {int dummy; } ;
struct amdgpu_device {int srbm_mutex; } ;


 struct amdgpu_device* FUNC_0 (struct kgd_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct kgd_dev *VAR_0)
{
 struct amdgpu_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, 0, 0, 0, 0);
 FUNC_1(&VAR_1->srbm_mutex);
}
