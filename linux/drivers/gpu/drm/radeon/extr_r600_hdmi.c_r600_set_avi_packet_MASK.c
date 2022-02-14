
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
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;

void FUNC_3(struct radeon_device *VAR_8, u32 VAR_9,
    unsigned char *VAR_10, size_t VAR_11)
{
 uint8_t *VAR_12 = VAR_10 + 3;

 FUNC_1(VAR_0 + VAR_9,
  VAR_12[0x0] | (VAR_12[0x1] << 8) | (VAR_12[0x2] << 16) | (VAR_12[0x3] << 24));
 FUNC_1(VAR_1 + VAR_9,
  VAR_12[0x4] | (VAR_12[0x5] << 8) | (VAR_12[0x6] << 16) | (VAR_12[0x7] << 24));
 FUNC_1(VAR_2 + VAR_9,
  VAR_12[0x8] | (VAR_12[0x9] << 8) | (VAR_12[0xA] << 16) | (VAR_12[0xB] << 24));
 FUNC_1(VAR_3 + VAR_9,
  VAR_12[0xC] | (VAR_12[0xD] << 8) | (VAR_10[1] << 24));

 FUNC_2(VAR_7 + VAR_9,
    FUNC_0(2));

 FUNC_2(VAR_6 + VAR_9,
    VAR_5 |
    VAR_4);

}
