
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct ttm_mem_reg {size_t mem_type; } ;
struct ttm_buffer_object {TYPE_2__* bdev; } ;
struct drm_mm_node {int start; } ;
struct TYPE_4__ {TYPE_1__* man; } ;
struct TYPE_3__ {scalar_t__ gpu_offset; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64_t FUNC_0(struct ttm_buffer_object *VAR_2,
        struct drm_mm_node *VAR_3,
        struct ttm_mem_reg *VAR_4)
{
 uint64_t VAR_5 = 0;

 if (VAR_3->start != VAR_0) {
  VAR_5 = VAR_3->start << VAR_1;
  VAR_5 += VAR_2->bdev->man[VAR_4->mem_type].gpu_offset;
 }
 return VAR_5;
}
