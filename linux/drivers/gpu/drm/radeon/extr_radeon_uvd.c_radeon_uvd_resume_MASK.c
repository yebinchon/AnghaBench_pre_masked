
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* cpu_addr; int * vcpu_bo; } ;
struct radeon_device {TYPE_2__* uvd_fw; TYPE_1__ uvd; } ;
struct TYPE_4__ {unsigned int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,unsigned int) ;
 int FUNC_1 (void*,int ,unsigned int) ;
 unsigned int FUNC_2 (int *) ;

int FUNC_3(struct radeon_device *VAR_1)
{
 unsigned VAR_2;
 void *VAR_3;

 if (VAR_1->uvd.vcpu_bo == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_1->uvd.cpu_addr, VAR_1->uvd_fw->data, VAR_1->uvd_fw->size);

 VAR_2 = FUNC_2(VAR_1->uvd.vcpu_bo);
 VAR_2 -= VAR_1->uvd_fw->size;

 VAR_3 = VAR_1->uvd.cpu_addr;
 VAR_3 += VAR_1->uvd_fw->size;

 FUNC_1(VAR_3, 0, VAR_2);

 return 0;
}
