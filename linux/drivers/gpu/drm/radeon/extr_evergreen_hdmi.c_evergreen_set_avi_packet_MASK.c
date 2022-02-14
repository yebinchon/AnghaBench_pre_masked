
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

void FUNC_3(struct radeon_device *VAR_6, u32 VAR_7,
         unsigned char *VAR_8, size_t VAR_9)
{
 uint8_t *VAR_10 = VAR_8 + 3;

 FUNC_1(VAR_0 + VAR_7,
  VAR_10[0x0] | (VAR_10[0x1] << 8) | (VAR_10[0x2] << 16) | (VAR_10[0x3] << 24));
 FUNC_1(VAR_1 + VAR_7,
  VAR_10[0x4] | (VAR_10[0x5] << 8) | (VAR_10[0x6] << 16) | (VAR_10[0x7] << 24));
 FUNC_1(VAR_2 + VAR_7,
  VAR_10[0x8] | (VAR_10[0x9] << 8) | (VAR_10[0xA] << 16) | (VAR_10[0xB] << 24));
 FUNC_1(VAR_3 + VAR_7,
  VAR_10[0xC] | (VAR_10[0xD] << 8) | (VAR_8[1] << 24));

 FUNC_2(VAR_5 + VAR_7,
   FUNC_0(2),
   ~VAR_4);
}
