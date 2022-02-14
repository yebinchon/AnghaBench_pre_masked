
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct radeon_sync {int dummy; } ;
struct radeon_ring {int idx; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; TYPE_2__* asic; } ;
struct dma_resv {int dummy; } ;
struct TYPE_3__ {int dma_ring_index; } ;
struct TYPE_4__ {TYPE_1__ copy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 struct radeon_fence* FUNC_3 (int) ;
 unsigned int VAR_1 ;
 int FUNC_4 (struct radeon_device*,struct radeon_fence**,int ) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_8 (struct radeon_ring*,int) ;
 int FUNC_9 (struct radeon_sync*) ;
 int FUNC_10 (struct radeon_device*,struct radeon_sync*,struct radeon_fence*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_sync*,struct dma_resv*,int) ;
 int FUNC_12 (struct radeon_device*,struct radeon_sync*,int ) ;
 int FUNC_13 (int) ;

struct radeon_fence *FUNC_14(struct radeon_device *VAR_2,
     uint64_t VAR_3,
     uint64_t VAR_4,
     unsigned VAR_5,
     struct dma_resv *VAR_6)
{
 struct radeon_fence *VAR_7;
 struct radeon_sync VAR_8;
 int VAR_9 = VAR_2->asic->copy.dma_ring_index;
 struct radeon_ring *VAR_10 = &VAR_2->ring[VAR_9];
 u32 VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 FUNC_9(&VAR_8);

 VAR_11 = (VAR_5 << VAR_1) / 4;
 VAR_14 = FUNC_0(VAR_11, 0xfffff);
 VAR_15 = FUNC_5(VAR_2, VAR_10, VAR_14 * 5 + 11);
 if (VAR_15) {
  FUNC_2("radeon: moving bo (%d).\n", VAR_15);
  FUNC_10(VAR_2, &VAR_8, ((void*)0));
  return FUNC_3(VAR_15);
 }

 FUNC_11(VAR_2, &VAR_8, VAR_6, 0);
 FUNC_12(VAR_2, &VAR_8, VAR_10->idx);

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_12 = VAR_11;
  if (VAR_12 > 0xFFFFF)
   VAR_12 = 0xFFFFF;
  VAR_11 -= VAR_12;
  FUNC_8(VAR_10, FUNC_1(VAR_0, 0, VAR_12));
  FUNC_8(VAR_10, VAR_4 & 0xfffffffc);
  FUNC_8(VAR_10, VAR_3 & 0xfffffffc);
  FUNC_8(VAR_10, FUNC_13(VAR_4) & 0xff);
  FUNC_8(VAR_10, FUNC_13(VAR_3) & 0xff);
  VAR_3 += VAR_12 * 4;
  VAR_4 += VAR_12 * 4;
 }

 VAR_15 = FUNC_4(VAR_2, &VAR_7, VAR_10->idx);
 if (VAR_15) {
  FUNC_7(VAR_2, VAR_10);
  FUNC_10(VAR_2, &VAR_8, ((void*)0));
  return FUNC_3(VAR_15);
 }

 FUNC_6(VAR_2, VAR_10, 0);
 FUNC_10(VAR_2, &VAR_8, VAR_7);

 return VAR_7;
}
