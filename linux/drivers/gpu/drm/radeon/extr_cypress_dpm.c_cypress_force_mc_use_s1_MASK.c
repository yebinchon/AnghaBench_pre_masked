
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mclk; } ;
struct rv7xx_ps {TYPE_1__ low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {scalar_t__ family; int num_crtc; int usec_timeout; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*,int ) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,int) ;
 struct rv7xx_ps* FUNC_9 (struct radeon_ps*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct radeon_device *VAR_13,
        struct radeon_ps *VAR_14)
{
 struct rv7xx_ps *VAR_15 = FUNC_9(VAR_14);
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18;

 if (FUNC_1(VAR_11) & VAR_12)
  return;

 FUNC_6(VAR_13, VAR_15->low.mclk);
 FUNC_7(VAR_13);

 if ((VAR_13->family == VAR_1) ||
     (VAR_13->family == VAR_2)) {
  FUNC_3(VAR_9, 0xf);
  FUNC_3(VAR_4, 0xf);
 } else {
  FUNC_3(VAR_8, 0xf);
  FUNC_3(VAR_3, 0xf);
 }

 for (VAR_18 = 0; VAR_18 < VAR_13->num_crtc; VAR_18++)
  FUNC_8(VAR_13, VAR_18);

 FUNC_3(VAR_10, VAR_7);
 FUNC_5(VAR_13, VAR_7);

 VAR_16 = FUNC_4(VAR_13,
             VAR_15->low.mclk);

 VAR_17 = FUNC_0(VAR_5);
 VAR_17 |= FUNC_2(VAR_16);
 FUNC_3(VAR_10, VAR_17);

 for (VAR_18 = 0; VAR_18 < VAR_13->usec_timeout; VAR_18++) {
  if (FUNC_1(VAR_11) & VAR_12)
   break;
  FUNC_10(1);
 }

 VAR_17 &= ~VAR_0;
 VAR_17 |= FUNC_0(VAR_6);
 FUNC_3(VAR_10, VAR_17);

 FUNC_5(VAR_13, VAR_6);
}
