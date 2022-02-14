
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
struct r600_audio_pin {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct radeon_device *VAR_6,
         struct r600_audio_pin *VAR_7,
         u8 VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_1);

 if (!VAR_7)
  return;

 if (VAR_8) {
  VAR_9 |= VAR_0;
  if (VAR_8 & 1)
   VAR_9 |= VAR_2;
  if (VAR_8 & 2)
   VAR_9 |= VAR_3;
  if (VAR_8 & 4)
   VAR_9 |= VAR_4;
  if (VAR_8 & 8)
   VAR_9 |= VAR_5;
 } else {
  VAR_9 &= ~(VAR_0 |
    VAR_2 |
    VAR_3 |
    VAR_4 |
    VAR_5);
 }

 FUNC_1(VAR_1, VAR_9);
}
