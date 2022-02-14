
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct ttm_mem_reg {int mem_type; unsigned int num_pages; scalar_t__ start; } ;
struct TYPE_6__ {int resv; } ;
struct ttm_buffer_object {TYPE_3__ base; int bdev; } ;
struct radeon_fence {int base; } ;
struct TYPE_4__ {int vram_start; int gtt_start; } ;
struct radeon_device {TYPE_2__* ring; TYPE_1__ mc; } ;
struct TYPE_5__ {int ready; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct radeon_fence*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 (struct radeon_fence*) ;
 unsigned int VAR_3 ;


 struct radeon_fence* FUNC_4 (struct radeon_device*,int,int,unsigned int,int ) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_fence**) ;
 struct radeon_device* FUNC_7 (int ) ;
 int FUNC_8 (struct ttm_buffer_object*,int *,int,struct ttm_mem_reg*) ;

__attribute__((used)) static int FUNC_9(struct ttm_buffer_object *VAR_4,
   bool VAR_5, bool VAR_6,
   struct ttm_mem_reg *VAR_7,
   struct ttm_mem_reg *VAR_8)
{
 struct radeon_device *VAR_9;
 uint64_t VAR_10, VAR_11;
 struct radeon_fence *VAR_12;
 unsigned VAR_13;
 int VAR_14, VAR_15;

 VAR_9 = FUNC_7(VAR_4->bdev);
 VAR_15 = FUNC_5(VAR_9);
 VAR_10 = (u64)VAR_8->start << VAR_1;
 VAR_11 = (u64)VAR_7->start << VAR_1;

 switch (VAR_8->mem_type) {
 case 128:
  VAR_10 += VAR_9->mc.vram_start;
  break;
 case 129:
  VAR_10 += VAR_9->mc.gtt_start;
  break;
 default:
  FUNC_1("Unknown placement %d\n", VAR_8->mem_type);
  return -VAR_0;
 }
 switch (VAR_7->mem_type) {
 case 128:
  VAR_11 += VAR_9->mc.vram_start;
  break;
 case 129:
  VAR_11 += VAR_9->mc.gtt_start;
  break;
 default:
  FUNC_1("Unknown placement %d\n", VAR_8->mem_type);
  return -VAR_0;
 }
 if (!VAR_9->ring[VAR_15].ready) {
  FUNC_1("Trying to move memory with ring turned off.\n");
  return -VAR_0;
 }

 FUNC_0((VAR_2 % VAR_3) != 0);

 VAR_13 = VAR_7->num_pages * (VAR_2 / VAR_3);
 VAR_12 = FUNC_4(VAR_9, VAR_10, VAR_11, VAR_13, VAR_4->base.resv);
 if (FUNC_2(VAR_12))
  return FUNC_3(VAR_12);

 VAR_14 = FUNC_8(VAR_4, &VAR_12->base, VAR_5, VAR_7);
 FUNC_6(&VAR_12);
 return VAR_14;
}
