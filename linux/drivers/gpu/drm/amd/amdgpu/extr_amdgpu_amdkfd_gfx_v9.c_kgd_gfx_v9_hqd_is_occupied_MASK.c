
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct kgd_dev*,scalar_t__,scalar_t__) ;
 struct amdgpu_device* FUNC_3 (struct kgd_dev*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct kgd_dev*) ;
 scalar_t__ FUNC_6 (int) ;

bool FUNC_7(struct kgd_dev *VAR_4, uint64_t VAR_5,
    uint32_t VAR_6, uint32_t VAR_7)
{
 struct amdgpu_device *VAR_8 = FUNC_3(VAR_4);
 uint32_t VAR_9;
 bool VAR_10 = 0;
 uint32_t VAR_11, VAR_12;

 FUNC_2(VAR_4, VAR_6, VAR_7);
 VAR_9 = FUNC_0(FUNC_1(VAR_0, 0, VAR_1));
 if (VAR_9) {
  VAR_11 = FUNC_4(VAR_5 >> 8);
  VAR_12 = FUNC_6(VAR_5 >> 8);

  if (VAR_11 == FUNC_0(FUNC_1(VAR_0, 0, VAR_2)) &&
     VAR_12 == FUNC_0(FUNC_1(VAR_0, 0, VAR_3)))
   VAR_10 = 1;
 }
 FUNC_5(VAR_4);
 return VAR_10;
}
