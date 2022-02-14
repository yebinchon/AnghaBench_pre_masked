
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {unsigned int num_ctx; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ipmmu_vmsa_device*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct ipmmu_vmsa_device *VAR_2)
{
 unsigned int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->num_ctx; ++VAR_3)
  FUNC_0(VAR_2, VAR_3 * VAR_1 + VAR_0, 0);
}
