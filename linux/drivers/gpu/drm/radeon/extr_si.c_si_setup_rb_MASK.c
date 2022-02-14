
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int backend_enable_mask; } ;
struct TYPE_4__ {TYPE_1__ si; } ;
struct radeon_device {TYPE_2__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*,int,int) ;
 int FUNC_2 (struct radeon_device*,int,int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_5,
   u32 VAR_6, u32 VAR_7,
   u32 VAR_8)
{
 int VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   FUNC_2(VAR_5, VAR_9, VAR_10);
   VAR_11 = FUNC_1(VAR_5, VAR_8, VAR_7);
   VAR_13 |= VAR_11 << ((VAR_9 * VAR_7 + VAR_10) * VAR_4);
  }
 }
 FUNC_2(VAR_5, 0xffffffff, 0xffffffff);

 VAR_12 = 1;
 for (VAR_9 = 0; VAR_9 < VAR_8 * VAR_6; VAR_9++) {
  if (!(VAR_13 & VAR_12))
   VAR_14 |= VAR_12;
  VAR_12 <<= 1;
 }

 VAR_5->config.si.backend_enable_mask = VAR_14;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  FUNC_2(VAR_5, VAR_9, 0xffffffff);
  VAR_11 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   switch (VAR_14 & 3) {
   case 1:
    VAR_11 |= (VAR_1 << (VAR_9 * VAR_7 + VAR_10) * 2);
    break;
   case 2:
    VAR_11 |= (VAR_3 << (VAR_9 * VAR_7 + VAR_10) * 2);
    break;
   case 3:
   default:
    VAR_11 |= (VAR_2 << (VAR_9 * VAR_7 + VAR_10) * 2);
    break;
   }
   VAR_14 >>= 2;
  }
  FUNC_0(VAR_0, VAR_11);
 }
 FUNC_2(VAR_5, 0xffffffff, 0xffffffff);
}
