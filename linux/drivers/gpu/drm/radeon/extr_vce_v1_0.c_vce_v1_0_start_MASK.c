
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int wptr; int gpu_addr; int ring_size; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

int FUNC_6(struct radeon_device *VAR_18)
{
 struct radeon_ring *VAR_19;
 int VAR_20, VAR_21, VAR_22;


 FUNC_3(VAR_16, 1, ~1);

 VAR_19 = &VAR_18->ring[VAR_0];
 FUNC_2(VAR_9, VAR_19->wptr);
 FUNC_2(VAR_13, VAR_19->wptr);
 FUNC_2(VAR_7, VAR_19->gpu_addr);
 FUNC_2(VAR_5, FUNC_5(VAR_19->gpu_addr));
 FUNC_2(VAR_11, VAR_19->ring_size / 4);

 VAR_19 = &VAR_18->ring[VAR_1];
 FUNC_2(VAR_10, VAR_19->wptr);
 FUNC_2(VAR_14, VAR_19->wptr);
 FUNC_2(VAR_8, VAR_19->gpu_addr);
 FUNC_2(VAR_6, FUNC_5(VAR_19->gpu_addr));
 FUNC_2(VAR_12, VAR_19->ring_size / 4);

 FUNC_3(VAR_17, VAR_2, ~VAR_2);

 FUNC_3(VAR_15,
   VAR_3 |
   VAR_4, ~(
   VAR_3 |
   VAR_4));

 FUNC_4(100);

 FUNC_3(VAR_15, 0, ~(
   VAR_3 |
   VAR_4));

 for (VAR_20 = 0; VAR_20 < 10; ++VAR_20) {
  uint32_t VAR_23;
  for (VAR_21 = 0; VAR_21 < 100; ++VAR_21) {
   VAR_23 = FUNC_1(VAR_16);
   if (VAR_23 & 2)
    break;
   FUNC_4(10);
  }
  VAR_22 = 0;
  if (VAR_23 & 2)
   break;

  FUNC_0("VCE not responding, trying to reset the ECPU!!!\n");
  FUNC_3(VAR_15, VAR_3, ~VAR_3);
  FUNC_4(10);
  FUNC_3(VAR_15, 0, ~VAR_3);
  FUNC_4(10);
  VAR_22 = -1;
 }


 FUNC_3(VAR_16, 0, ~1);

 if (VAR_22) {
  FUNC_0("VCE not responding, giving up!!!\n");
  return VAR_22;
 }

 return 0;
}
