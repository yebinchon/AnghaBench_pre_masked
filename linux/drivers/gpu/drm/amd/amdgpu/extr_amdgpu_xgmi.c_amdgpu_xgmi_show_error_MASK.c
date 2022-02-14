
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amdgpu_device {TYPE_1__* df_funcs; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_fica ) (struct amdgpu_device*,int ) ;int (* set_fica ) (struct amdgpu_device*,int ,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,char*,unsigned int) ;
 int FUNC_4 (struct amdgpu_device*,int ) ;
 int FUNC_5 (struct amdgpu_device*,int ) ;
 int FUNC_6 (struct amdgpu_device*,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_1(VAR_1);
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;
 uint32_t VAR_6, VAR_7;
 uint64_t VAR_8;
 unsigned int VAR_9 = 0;

 VAR_6 = FUNC_0(0x200);
 VAR_7 = FUNC_0(0x208);

 VAR_8 = VAR_5->df_funcs->get_fica(VAR_5, VAR_6);
 if (VAR_8 != 0x1f)
  FUNC_2("xGMI error counters not enabled!\n");

 VAR_8 = VAR_5->df_funcs->get_fica(VAR_5, VAR_7);

 if ((VAR_8 & 0xffff) == 2)
  VAR_9 = ((VAR_8 >> 62) & 0x1) + (VAR_8 >> 63);

 VAR_5->df_funcs->set_fica(VAR_5, VAR_7, 0, 0);

 return FUNC_3(VAR_3, VAR_0, "%d\n", VAR_9);
}
