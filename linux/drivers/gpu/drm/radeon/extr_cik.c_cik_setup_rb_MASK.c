
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int backend_enable_mask; } ;
struct TYPE_4__ {TYPE_1__ cik; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int,int) ;
 int FUNC_3 (struct radeon_device*,int,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_7,
    u32 VAR_8, u32 VAR_9,
    u32 VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
   FUNC_3(VAR_7, VAR_11, VAR_12);
   VAR_13 = FUNC_2(VAR_7, VAR_10, VAR_9);
   if (VAR_7->family == VAR_0)
    VAR_15 |= VAR_13 << ((VAR_11 * VAR_9 + VAR_12) * VAR_2);
   else
    VAR_15 |= VAR_13 << ((VAR_11 * VAR_9 + VAR_12) * VAR_1);
  }
 }
 FUNC_3(VAR_7, 0xffffffff, 0xffffffff);

 VAR_14 = 1;
 for (VAR_11 = 0; VAR_11 < VAR_10 * VAR_8; VAR_11++) {
  if (!(VAR_15 & VAR_14))
   VAR_16 |= VAR_14;
  VAR_14 <<= 1;
 }

 VAR_7->config.cik.backend_enable_mask = VAR_16;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  FUNC_3(VAR_7, VAR_11, 0xffffffff);
  VAR_13 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
   switch (VAR_16 & 3) {
   case 0:
    if (VAR_12 == 0)
     VAR_13 |= FUNC_0(VAR_6);
    else
     VAR_13 |= FUNC_0(VAR_4);
    break;
   case 1:
    VAR_13 |= (VAR_4 << (VAR_11 * VAR_9 + VAR_12) * 2);
    break;
   case 2:
    VAR_13 |= (VAR_6 << (VAR_11 * VAR_9 + VAR_12) * 2);
    break;
   case 3:
   default:
    VAR_13 |= (VAR_5 << (VAR_11 * VAR_9 + VAR_12) * 2);
    break;
   }
   VAR_16 >>= 2;
  }
  FUNC_1(VAR_3, VAR_13);
 }
 FUNC_3(VAR_7, 0xffffffff, 0xffffffff);
}
