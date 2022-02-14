
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
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct amdgpu_device* FUNC_3 (struct kgd_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kgd_dev *VAR_7,
     uint32_t VAR_8,
     uint32_t VAR_9)
{
 struct amdgpu_device *VAR_10 = FUNC_3(VAR_7);
 uint32_t VAR_11 = 0;

 FUNC_4(&VAR_10->grbm_idx_mutex);

 FUNC_2(FUNC_1(VAR_0, 0, VAR_5), VAR_8);
 FUNC_2(FUNC_1(VAR_0, 0, VAR_6), VAR_9);

 VAR_11 = FUNC_0(VAR_11, VAR_1,
  VAR_2, 1);
 VAR_11 = FUNC_0(VAR_11, VAR_1,
  VAR_3, 1);
 VAR_11 = FUNC_0(VAR_11, VAR_1,
  VAR_4, 1);

 FUNC_2(FUNC_1(VAR_0, 0, VAR_5), VAR_11);
 FUNC_5(&VAR_10->grbm_idx_mutex);

 return 0;
}
