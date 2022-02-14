
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
struct TYPE_3__ {int blit_ring_index; } ;
struct TYPE_4__ {TYPE_1__ copy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 struct radeon_fence* FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_fence**,int ) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_9 (struct radeon_ring*,int) ;
 int FUNC_10 (struct radeon_sync*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_sync*,struct radeon_fence*) ;
 int FUNC_12 (struct radeon_device*,struct radeon_sync*,struct dma_resv*,int) ;
 int FUNC_13 (struct radeon_device*,struct radeon_sync*,int ) ;
 int FUNC_14 (int) ;

struct radeon_fence *FUNC_15(struct radeon_device *VAR_3,
        uint64_t VAR_4, uint64_t VAR_5,
        unsigned VAR_6,
        struct dma_resv *VAR_7)
{
 struct radeon_fence *VAR_8;
 struct radeon_sync VAR_9;
 int VAR_10 = VAR_3->asic->copy.blit_ring_index;
 struct radeon_ring *VAR_11 = &VAR_3->ring[VAR_10];
 u32 VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 int VAR_17 = 0;

 FUNC_10(&VAR_9);

 VAR_12 = (VAR_6 << VAR_2);
 VAR_16 = FUNC_0(VAR_12, 0x1fffff);
 VAR_17 = FUNC_6(VAR_3, VAR_11, VAR_16 * 7 + 18);
 if (VAR_17) {
  FUNC_1("radeon: moving bo (%d).\n", VAR_17);
  FUNC_11(VAR_3, &VAR_9, ((void*)0));
  return FUNC_2(VAR_17);
 }

 FUNC_12(VAR_3, &VAR_9, VAR_7, 0);
 FUNC_13(VAR_3, &VAR_9, VAR_11->idx);

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_13 = VAR_12;
  if (VAR_13 > 0x1fffff)
   VAR_13 = 0x1fffff;
  VAR_12 -= VAR_13;
  VAR_14 = 0;
  if (VAR_12 == 0)
   VAR_14 |= VAR_1;
  FUNC_9(VAR_11, FUNC_3(VAR_0, 5));
  FUNC_9(VAR_11, VAR_14);
  FUNC_9(VAR_11, FUNC_4(VAR_4));
  FUNC_9(VAR_11, FUNC_14(VAR_4));
  FUNC_9(VAR_11, FUNC_4(VAR_5));
  FUNC_9(VAR_11, FUNC_14(VAR_5));
  FUNC_9(VAR_11, VAR_13);
  VAR_4 += VAR_13;
  VAR_5 += VAR_13;
 }

 VAR_17 = FUNC_5(VAR_3, &VAR_8, VAR_11->idx);
 if (VAR_17) {
  FUNC_8(VAR_3, VAR_11);
  FUNC_11(VAR_3, &VAR_9, ((void*)0));
  return FUNC_2(VAR_17);
 }

 FUNC_7(VAR_3, VAR_11, 0);
 FUNC_11(VAR_3, &VAR_9, VAR_8);

 return VAR_8;
}
