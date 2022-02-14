
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kgd_dev*,scalar_t__,scalar_t__) ;
 struct amdgpu_device* FUNC_2 (struct kgd_dev*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct kgd_dev*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct kgd_dev *VAR_3, uint64_t VAR_4,
    uint32_t VAR_5, uint32_t VAR_6)
{
 struct amdgpu_device *VAR_7 = FUNC_2(VAR_3);
 uint32_t VAR_8;
 bool VAR_9 = 0;
 uint32_t VAR_10, VAR_11;

 FUNC_1(VAR_3, VAR_5, VAR_6);
 VAR_8 = FUNC_0(VAR_0);
 if (VAR_8) {
  VAR_10 = FUNC_3(VAR_4 >> 8);
  VAR_11 = FUNC_5(VAR_4 >> 8);

  if (VAR_10 == FUNC_0(VAR_1) &&
    VAR_11 == FUNC_0(VAR_2))
   VAR_9 = 1;
 }
 FUNC_4(VAR_3);
 return VAR_9;
}
