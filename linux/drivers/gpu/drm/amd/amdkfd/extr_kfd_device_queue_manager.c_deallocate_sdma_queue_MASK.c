
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct queue {unsigned long long sdma_id; TYPE_1__ properties; } ;
struct device_queue_manager {unsigned long long sdma_bitmap; unsigned long long xgmi_sdma_bitmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long FUNC_0 (struct device_queue_manager*) ;
 unsigned long long FUNC_1 (struct device_queue_manager*) ;

__attribute__((used)) static void FUNC_2(struct device_queue_manager *VAR_2,
    struct queue *VAR_3)
{
 if (VAR_3->properties.type == VAR_0) {
  if (VAR_3->sdma_id >= FUNC_0(VAR_2))
   return;
  VAR_2->sdma_bitmap |= (1ULL << VAR_3->sdma_id);
 } else if (VAR_3->properties.type == VAR_1) {
  if (VAR_3->sdma_id >= FUNC_1(VAR_2))
   return;
  VAR_2->xgmi_sdma_bitmap |= (1ULL << VAR_3->sdma_id);
 }
}
