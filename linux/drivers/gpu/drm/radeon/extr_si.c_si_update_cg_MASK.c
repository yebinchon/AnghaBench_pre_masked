
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ has_uvd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,int) ;
 int FUNC_8 (struct radeon_device*,int) ;
 int FUNC_9 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_10(struct radeon_device *VAR_6,
    u32 VAR_7, bool VAR_8)
{
 if (VAR_7 & VAR_1) {
  FUNC_3(VAR_6, 0);

  if (VAR_8) {
   FUNC_8(VAR_6, 1);
   FUNC_1(VAR_6, 1);
  } else {
   FUNC_1(VAR_6, 0);
   FUNC_8(VAR_6, 0);
  }
  FUNC_3(VAR_6, 1);
 }

 if (VAR_7 & VAR_3) {
  FUNC_7(VAR_6, VAR_8);
  FUNC_6(VAR_6, VAR_8);
 }

 if (VAR_7 & VAR_4) {
  FUNC_2(VAR_6, VAR_8);
 }

 if (VAR_7 & VAR_0) {
  FUNC_0(VAR_6, VAR_8);
 }

 if (VAR_7 & VAR_5) {
  if (VAR_6->has_uvd) {
   FUNC_9(VAR_6, VAR_8);
  }
 }

 if (VAR_7 & VAR_2) {
  FUNC_5(VAR_6, VAR_8);
  FUNC_4(VAR_6, VAR_8);
 }
}
