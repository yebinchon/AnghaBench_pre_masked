
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct radeon_device {int dummy; } ;
struct r600_audio_pin {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct radeon_device *VAR_2,
         struct r600_audio_pin *VAR_3,
         u8 VAR_4)
{
 if (!VAR_3)
  return;

 FUNC_0(VAR_3->offset, VAR_1,
   VAR_4 ? VAR_0 : 0);
}
