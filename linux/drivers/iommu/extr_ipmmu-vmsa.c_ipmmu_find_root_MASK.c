
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmmu_vmsa_device {int dummy; } ;
struct TYPE_2__ {int driver; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,struct ipmmu_vmsa_device**,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct ipmmu_vmsa_device *FUNC_1(void)
{
 struct ipmmu_vmsa_device *VAR_2 = ((void*)0);

 return FUNC_0(&VAR_1.driver, ((void*)0), &VAR_2,
          VAR_0) == 0 ? VAR_2 : ((void*)0);
}
