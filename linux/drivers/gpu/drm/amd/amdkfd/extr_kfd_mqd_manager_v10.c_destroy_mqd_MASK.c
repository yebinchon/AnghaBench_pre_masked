
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mqd_manager {TYPE_2__* dev; } ;
typedef enum kfd_preempt_type { ____Placeholder_kfd_preempt_type } kfd_preempt_type ;
struct TYPE_4__ {int kgd; TYPE_1__* kfd2kgd; } ;
struct TYPE_3__ {int (* hqd_destroy ) (int ,void*,int,unsigned int,int ,int ) ;} ;


 int FUNC_0 (int ,void*,int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mqd_manager *VAR_0, void *VAR_1,
         enum kfd_preempt_type VAR_2,
         unsigned int VAR_3, uint32_t VAR_4,
         uint32_t VAR_5)
{
 return VAR_0->dev->kfd2kgd->hqd_destroy
  (VAR_0->dev->kgd, VAR_1, VAR_2, VAR_3,
   VAR_4, VAR_5);
}
