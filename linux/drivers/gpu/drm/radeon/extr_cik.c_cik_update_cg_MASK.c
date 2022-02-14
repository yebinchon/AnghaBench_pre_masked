
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; scalar_t__ has_uvd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int) ;

void FUNC_12(struct radeon_device *VAR_8,
     u32 VAR_9, bool VAR_10)
{

 if (VAR_9 & VAR_1) {
  FUNC_2(VAR_8, 0);

  if (VAR_10) {
   FUNC_7(VAR_8, 1);
   FUNC_1(VAR_8, 1);
  } else {
   FUNC_1(VAR_8, 0);
   FUNC_7(VAR_8, 0);
  }
  FUNC_2(VAR_8, 1);
 }

 if (VAR_9 & VAR_3) {
  if (!(VAR_8->flags & VAR_7)) {
   FUNC_6(VAR_8, VAR_10);
   FUNC_5(VAR_8, VAR_10);
  }
 }

 if (VAR_9 & VAR_4) {
  FUNC_8(VAR_8, VAR_10);
  FUNC_9(VAR_8, VAR_10);
 }

 if (VAR_9 & VAR_0) {
  FUNC_0(VAR_8, VAR_10);
 }

 if (VAR_9 & VAR_5) {
  if (VAR_8->has_uvd)
   FUNC_10(VAR_8, VAR_10);
 }

 if (VAR_9 & VAR_2) {
  FUNC_4(VAR_8, VAR_10);
  FUNC_3(VAR_8, VAR_10);
 }

 if (VAR_9 & VAR_6) {
  FUNC_11(VAR_8, VAR_10);
 }
}
