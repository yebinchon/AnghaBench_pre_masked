
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct mqd_manager {TYPE_2__* dev; } ;
struct TYPE_4__ {int kgd; TYPE_1__* kfd2kgd; } ;
struct TYPE_3__ {int (* hqd_sdma_is_occupied ) (int ,void*) ;} ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static bool FUNC_1(struct mqd_manager *VAR_0, void *VAR_1,
   uint64_t VAR_2, uint32_t VAR_3,
   uint32_t VAR_4)
{
 return VAR_0->dev->kfd2kgd->hqd_sdma_is_occupied(VAR_0->dev->kgd, VAR_1);
}
