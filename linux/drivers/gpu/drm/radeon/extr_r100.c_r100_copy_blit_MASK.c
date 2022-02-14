
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


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (char*,int,unsigned int) ;
 int VAR_0 ;
 struct radeon_fence* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (struct radeon_device*,struct radeon_fence**,size_t) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,unsigned int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_9 (struct radeon_ring*,int) ;

struct radeon_fence *FUNC_10(struct radeon_device *VAR_21,
        uint64_t VAR_22,
        uint64_t VAR_23,
        unsigned VAR_24,
        struct dma_resv *VAR_25)
{
 struct radeon_ring *VAR_26 = &VAR_21->ring[VAR_15];
 struct radeon_fence *VAR_27;
 uint32_t VAR_28;
 uint32_t VAR_29 = VAR_13;
 uint32_t VAR_30;
 uint32_t VAR_31;
 unsigned VAR_32;
 int VAR_33;
 int VAR_34 = 0;


 VAR_29 &= 0x3fff;

 VAR_30 = VAR_29 / 64;
 VAR_31 = VAR_29 / 4;
 VAR_33 = FUNC_0(VAR_24, 8191);


 VAR_32 = 64 + (10 * VAR_33);
 VAR_34 = FUNC_6(VAR_21, VAR_26, VAR_32);
 if (VAR_34) {
  FUNC_1("radeon: moving bo (%d) asking for %u dw.\n", VAR_34, VAR_32);
  return FUNC_2(-VAR_0);
 }
 while (VAR_24 > 0) {
  VAR_28 = VAR_24;
  if (VAR_28 > 8191) {
   VAR_28 = 8191;
  }
  VAR_24 -= VAR_28;



  FUNC_9(VAR_26, FUNC_4(VAR_1, 8));
  FUNC_9(VAR_26,
      VAR_11 |
      VAR_8 |
      VAR_9 |
      VAR_7 |
      VAR_5 |
      (VAR_2 << 8) |
      VAR_10 |
      VAR_16 |
      VAR_3 |
      VAR_6 |
      VAR_12);
  FUNC_9(VAR_26, (VAR_30 << 22) | (VAR_22 >> 10));
  FUNC_9(VAR_26, (VAR_30 << 22) | (VAR_23 >> 10));
  FUNC_9(VAR_26, (0x1fff) | (0x1fff << 16));
  FUNC_9(VAR_26, 0);
  FUNC_9(VAR_26, (0x1fff) | (0x1fff << 16));
  FUNC_9(VAR_26, VAR_24);
  FUNC_9(VAR_26, VAR_24);
  FUNC_9(VAR_26, VAR_28 | (VAR_31 << 16));
 }
 FUNC_9(VAR_26, FUNC_3(VAR_4, 0));
 FUNC_9(VAR_26, VAR_14);
 FUNC_9(VAR_26, FUNC_3(VAR_20, 0));
 FUNC_9(VAR_26,
     VAR_17 |
     VAR_19 |
     VAR_18);
 VAR_34 = FUNC_5(VAR_21, &VAR_27, VAR_15);
 if (VAR_34) {
  FUNC_8(VAR_21, VAR_26);
  return FUNC_2(VAR_34);
 }
 FUNC_7(VAR_21, VAR_26, 0);
 return VAR_27;
}
