
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
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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

struct radeon_fence *FUNC_15(struct radeon_device *VAR_8,
         uint64_t VAR_9, uint64_t VAR_10,
         unsigned VAR_11,
         struct dma_resv *VAR_12)
{
 struct radeon_fence *VAR_13;
 struct radeon_sync VAR_14;
 int VAR_15 = VAR_8->asic->copy.blit_ring_index;
 struct radeon_ring *VAR_16 = &VAR_8->ring[VAR_15];
 u32 VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;
 int VAR_22 = 0;

 FUNC_10(&VAR_14);

 VAR_17 = (VAR_11 << VAR_4);
 VAR_21 = FUNC_0(VAR_17, 0x1fffff);
 VAR_22 = FUNC_6(VAR_8, VAR_16, VAR_21 * 6 + 24);
 if (VAR_22) {
  FUNC_1("radeon: moving bo (%d).\n", VAR_22);
  FUNC_11(VAR_8, &VAR_14, ((void*)0));
  return FUNC_2(VAR_22);
 }

 FUNC_12(VAR_8, &VAR_14, VAR_12, 0);
 FUNC_13(VAR_8, &VAR_14, VAR_16->idx);

 FUNC_9(VAR_16, FUNC_3(VAR_2, 1));
 FUNC_9(VAR_16, (VAR_7 - VAR_3) >> 2);
 FUNC_9(VAR_16, VAR_5);
 for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
  VAR_18 = VAR_17;
  if (VAR_18 > 0x1fffff)
   VAR_18 = 0x1fffff;
  VAR_17 -= VAR_18;
  VAR_19 = FUNC_14(VAR_9) & 0xff;
  if (VAR_17 == 0)
   VAR_19 |= VAR_1;
  FUNC_9(VAR_16, FUNC_3(VAR_0, 4));
  FUNC_9(VAR_16, FUNC_4(VAR_9));
  FUNC_9(VAR_16, VAR_19);
  FUNC_9(VAR_16, FUNC_4(VAR_10));
  FUNC_9(VAR_16, FUNC_14(VAR_10) & 0xff);
  FUNC_9(VAR_16, VAR_18);
  VAR_9 += VAR_18;
  VAR_10 += VAR_18;
 }
 FUNC_9(VAR_16, FUNC_3(VAR_2, 1));
 FUNC_9(VAR_16, (VAR_7 - VAR_3) >> 2);
 FUNC_9(VAR_16, VAR_6);

 VAR_22 = FUNC_5(VAR_8, &VAR_13, VAR_16->idx);
 if (VAR_22) {
  FUNC_8(VAR_8, VAR_16);
  FUNC_11(VAR_8, &VAR_14, ((void*)0));
  return FUNC_2(VAR_22);
 }

 FUNC_7(VAR_8, VAR_16, 0);
 FUNC_11(VAR_8, &VAR_14, VAR_13);

 return VAR_13;
}
