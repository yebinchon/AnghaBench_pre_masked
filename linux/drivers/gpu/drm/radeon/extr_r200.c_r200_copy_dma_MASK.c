
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_ring {int dummy; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;
struct dma_resv {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 struct radeon_fence* FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct radeon_device*,struct radeon_fence**,size_t) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_8 (struct radeon_ring*,int) ;

struct radeon_fence *FUNC_9(struct radeon_device *VAR_4,
       uint64_t VAR_5,
       uint64_t VAR_6,
       unsigned VAR_7,
       struct dma_resv *VAR_8)
{
 struct radeon_ring *VAR_9 = &VAR_4->ring[VAR_1];
 struct radeon_fence *VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;


 VAR_11 = VAR_7 << VAR_0;
 VAR_14 = FUNC_0(VAR_11, 0x1FFFFF);
 VAR_15 = FUNC_5(VAR_4, VAR_9, VAR_14 * 4 + 64);
 if (VAR_15) {
  FUNC_1("radeon: moving bo (%d).\n", VAR_15);
  return FUNC_2(VAR_15);
 }

 FUNC_8(VAR_9, FUNC_3(VAR_3, 0));
 FUNC_8(VAR_9, (1 << 16));
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_12 = VAR_11;
  if (VAR_12 > 0x1FFFFF) {
   VAR_12 = 0x1FFFFF;
  }
  VAR_11 -= VAR_12;
  FUNC_8(VAR_9, FUNC_3(0x720, 2));
  FUNC_8(VAR_9, VAR_5);
  FUNC_8(VAR_9, VAR_6);
  FUNC_8(VAR_9, VAR_12 | (1 << 31) | (1 << 30));
  VAR_5 += VAR_12;
  VAR_6 += VAR_12;
 }
 FUNC_8(VAR_9, FUNC_3(VAR_3, 0));
 FUNC_8(VAR_9, VAR_2);
 VAR_15 = FUNC_4(VAR_4, &VAR_10, VAR_1);
 if (VAR_15) {
  FUNC_7(VAR_4, VAR_9);
  return FUNC_2(VAR_15);
 }
 FUNC_6(VAR_4, VAR_9, 0);
 return VAR_10;
}
