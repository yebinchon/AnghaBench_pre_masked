
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static bool FUNC_2(struct radeon_device *VAR_19)
{
 bool VAR_20 = 0;
 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 bool VAR_27, VAR_28;

 VAR_21 = FUNC_0(VAR_3);
 VAR_27 = (VAR_6 == ((VAR_21 & VAR_4) >> VAR_5));
 VAR_28 = (VAR_9 == ((VAR_21 & VAR_7) >> VAR_8))
  & (VAR_12 == ((VAR_21 & VAR_10) >> VAR_11));

 FUNC_1(VAR_2, 0xb);
 VAR_22 = ((FUNC_0(VAR_1) >> 1) & 1) ? 16 : 32;

 VAR_21 = FUNC_0(VAR_0);
 VAR_23 = ((VAR_21 & VAR_17) >> VAR_18) + 10;
 VAR_24 = ((VAR_21 & VAR_15) >> VAR_16) + 8;
 VAR_25 = ((VAR_21 & VAR_13) >> VAR_14) + 2;

 VAR_26 = (1 << (VAR_23 + VAR_24 - 20 + VAR_25)) * VAR_22;

 if ((VAR_19->pdev->device == 0x6819) &&
     VAR_27 && VAR_28 && (VAR_26 == 0x400))
  VAR_20 = 1;

 return VAR_20;
}
