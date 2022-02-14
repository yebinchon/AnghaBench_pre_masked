
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cdmm_device {int type; int rev; int cpu; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct mips_cdmm_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct mips_cdmm_device *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_1, "CDMM_CPU=%u", VAR_2->cpu);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, "CDMM_TYPE=0x%02x", VAR_2->type);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, "CDMM_REV=%u", VAR_2->rev);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, "MODALIAS=mipscdmm:t%02X", VAR_2->type);
 return VAR_3;
}
