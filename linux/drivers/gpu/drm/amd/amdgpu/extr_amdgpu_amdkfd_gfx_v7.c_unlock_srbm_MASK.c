
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_dev {int dummy; } ;
struct amdgpu_device {int srbm_mutex; } ;


 int FUNC_0 (int ,int ) ;
 struct amdgpu_device* FUNC_1 (struct kgd_dev*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kgd_dev *VAR_1)
{
 struct amdgpu_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, 0);
 FUNC_2(&VAR_2->srbm_mutex);
}
