
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef int ssize_t ;
typedef int min_rpm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int ,void*,int*) ;
 struct amdgpu_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct amdgpu_device *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6 = 0;
 u32 VAR_7 = sizeof(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_0,
       (void *)&VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_2(VAR_4, VAR_1, "%d\n", VAR_6);
}
