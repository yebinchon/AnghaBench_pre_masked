
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct kfd_local_mem_info {scalar_t__ local_mem_size_public; scalar_t__ local_mem_size_private; } ;
struct kfd_dev {TYPE_1__* pdev; int kgd; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int devfn; int subsystem_vendor; int subsystem_device; int device; TYPE_2__* bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct kfd_local_mem_info*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_5(struct kfd_dev *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3[7];
 uint64_t VAR_4;
 int VAR_5;
 struct kfd_local_mem_info VAR_6;

 if (!VAR_1)
  return 0;

 FUNC_0(VAR_1->kgd, &VAR_6);

 VAR_4 = VAR_6.local_mem_size_private +
   VAR_6.local_mem_size_public;

 VAR_3[0] = VAR_1->pdev->devfn;
 VAR_3[1] = VAR_1->pdev->subsystem_vendor |
  (VAR_1->pdev->subsystem_device << 16);
 VAR_3[2] = FUNC_3(VAR_1->pdev->bus);
 VAR_3[3] = VAR_1->pdev->device;
 VAR_3[4] = VAR_1->pdev->bus->number;
 VAR_3[5] = FUNC_2(VAR_4);
 VAR_3[6] = FUNC_4(VAR_4);

 for (VAR_5 = 0, VAR_2 = 0; VAR_5 < 7; VAR_5++)
  VAR_2 ^= FUNC_1(VAR_3[VAR_5], VAR_0);

 return VAR_2;
}
