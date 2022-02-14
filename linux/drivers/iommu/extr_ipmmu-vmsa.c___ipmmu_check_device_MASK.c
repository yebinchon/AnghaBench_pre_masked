
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {int dummy; } ;
struct device {int dummy; } ;


 struct ipmmu_vmsa_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct ipmmu_vmsa_device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct ipmmu_vmsa_device *VAR_2 = FUNC_0(VAR_0);
 struct ipmmu_vmsa_device **VAR_3 = VAR_1;

 if (FUNC_1(VAR_2))
  *VAR_3 = VAR_2;

 return 0;
}
