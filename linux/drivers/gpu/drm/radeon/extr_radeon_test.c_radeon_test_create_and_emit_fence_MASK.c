
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int idx; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_device*,struct radeon_fence**,int) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_5 (struct radeon_device*,int,int,int *) ;
 int FUNC_6 (struct radeon_device*,int,int,struct radeon_fence**) ;
 int FUNC_7 (struct radeon_device*,int,int,int *) ;
 int FUNC_8 (struct radeon_device*,int,int,struct radeon_fence**) ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_3,
          struct radeon_ring *VAR_4,
          struct radeon_fence **VAR_5)
{
 uint32_t VAR_6 = VAR_4->idx ^ 0xdeafbeef;
 int VAR_7;

 if (VAR_4->idx == VAR_0) {
  VAR_7 = FUNC_5(VAR_3, VAR_4->idx, VAR_6, ((void*)0));
  if (VAR_7) {
   FUNC_0("Failed to get dummy create msg\n");
   return VAR_7;
  }

  VAR_7 = FUNC_6(VAR_3, VAR_4->idx, VAR_6, VAR_5);
  if (VAR_7) {
   FUNC_0("Failed to get dummy destroy msg\n");
   return VAR_7;
  }

 } else if (VAR_4->idx == VAR_1 ||
     VAR_4->idx == VAR_2) {
  VAR_7 = FUNC_7(VAR_3, VAR_4->idx, VAR_6, ((void*)0));
  if (VAR_7) {
   FUNC_0("Failed to get dummy create msg\n");
   return VAR_7;
  }

  VAR_7 = FUNC_8(VAR_3, VAR_4->idx, VAR_6, VAR_5);
  if (VAR_7) {
   FUNC_0("Failed to get dummy destroy msg\n");
   return VAR_7;
  }

 } else {
  VAR_7 = FUNC_2(VAR_3, VAR_4, 64);
  if (VAR_7) {
   FUNC_0("Failed to lock ring A %d\n", VAR_4->idx);
   return VAR_7;
  }
  VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_4->idx);
  if (VAR_7) {
   FUNC_0("Failed to emit fence\n");
   FUNC_4(VAR_3, VAR_4);
   return VAR_7;
  }
  FUNC_3(VAR_3, VAR_4, 0);
 }
 return 0;
}
