
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {scalar_t__ dispatch_tasks; scalar_t__ odn_edit_dpm_table; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct amdgpu_device*,int ,int *) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__,long*,scalar_t__) ;
 struct drm_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,int ,long*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (int *,scalar_t__,long*,scalar_t__) ;
 int FUNC_8 (char const*,char*,int) ;
 char* FUNC_9 (char**,char const*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_7,
  struct device_attribute *VAR_8,
  const char *VAR_9,
  size_t VAR_10)
{
 struct drm_device *VAR_11 = FUNC_2(VAR_7);
 struct amdgpu_device *VAR_12 = VAR_11->dev_private;
 int VAR_13;
 uint32_t VAR_14 = 0;
 long VAR_15[64];
 char VAR_16[128];
 char *VAR_17;
 char *VAR_18;
 const char VAR_19[3] = {' ', '\n', '\0'};
 uint32_t VAR_20;

 if (VAR_10 > 127)
  return -VAR_1;

 if (*VAR_9 == 's')
  VAR_20 = VAR_4;
 else if (*VAR_9 == 'm')
  VAR_20 = VAR_3;
 else if(*VAR_9 == 'r')
  VAR_20 = VAR_6;
 else if (*VAR_9 == 'c')
  VAR_20 = VAR_2;
 else if (!FUNC_8(VAR_9, "vc", 2))
  VAR_20 = VAR_5;
 else
  return -VAR_1;

 FUNC_6(VAR_16, VAR_9, VAR_10+1);

 VAR_17 = VAR_16;

 if (VAR_20 == VAR_5)
  VAR_17++;
 while (FUNC_4(*++VAR_17));

 while (VAR_17[0]) {
  VAR_18 = FUNC_9(&VAR_17, VAR_19);
  VAR_13 = FUNC_5(VAR_18, 0, &VAR_15[VAR_14]);
  if (VAR_13)
   return -VAR_1;
  VAR_14++;

  while (FUNC_4(*VAR_17))
   VAR_17++;
 }

 if (FUNC_3(VAR_12)) {
  VAR_13 = FUNC_7(&VAR_12->smu, VAR_20,
         VAR_15, VAR_14);

  if (VAR_13)
   return -VAR_1;
 } else {
  if (VAR_12->powerplay.pp_funcs->odn_edit_dpm_table) {
   VAR_13 = FUNC_1(VAR_12, VAR_20,
      VAR_15, VAR_14);
   if (VAR_13)
    return -VAR_1;
  }

  if (VAR_20 == VAR_2) {
   if (VAR_12->powerplay.pp_funcs->dispatch_tasks) {
    FUNC_0(VAR_12,
      VAR_0,
      ((void*)0));
    return VAR_10;
   } else {
    return -VAR_1;
   }
  }
 }

 return VAR_10;
}
