
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_pins; TYPE_2__* pin; } ;
struct radeon_device {TYPE_1__ audio; } ;
struct TYPE_4__ {int offset; int connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3->audio.num_pins; VAR_4++) {
  VAR_5 = VAR_3->audio.pin[VAR_4].offset;
  VAR_6 = FUNC_0(VAR_5,
          VAR_0);
  if (((VAR_6 & VAR_1) >> VAR_2) == 1)
   VAR_3->audio.pin[VAR_4].connected = 0;
  else
   VAR_3->audio.pin[VAR_4].connected = 1;
 }
}
