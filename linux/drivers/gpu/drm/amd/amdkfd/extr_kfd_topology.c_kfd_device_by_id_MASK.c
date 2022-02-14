
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kfd_topology_device {struct kfd_dev* gpu; } ;
struct kfd_dev {int dummy; } ;


 struct kfd_topology_device* FUNC_0 (int ) ;

struct kfd_dev *FUNC_1(uint32_t VAR_0)
{
 struct kfd_topology_device *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return VAR_1->gpu;
}
