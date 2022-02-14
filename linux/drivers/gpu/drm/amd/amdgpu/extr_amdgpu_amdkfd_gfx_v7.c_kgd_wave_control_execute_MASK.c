
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int grbm_idx_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct amdgpu_device* FUNC_1 (struct kgd_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kgd_dev *VAR_5,
     uint32_t VAR_6,
     uint32_t VAR_7)
{
 struct amdgpu_device *VAR_8 = FUNC_1(VAR_5);
 uint32_t VAR_9;

 FUNC_2(&VAR_8->grbm_idx_mutex);

 FUNC_0(VAR_3, VAR_6);
 FUNC_0(VAR_4, VAR_7);



 VAR_9 = VAR_0 |
  VAR_2 |
  VAR_1;

 FUNC_0(VAR_3, VAR_9);

 FUNC_3(&VAR_8->grbm_idx_mutex);

 return 0;
}
