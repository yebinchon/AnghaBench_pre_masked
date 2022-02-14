
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int num_pins; TYPE_1__* pin; } ;
struct TYPE_6__ {TYPE_2__ audio; } ;
struct amdgpu_device {TYPE_3__ mode_info; } ;
struct TYPE_4__ {int offset; int connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3->mode_info.audio.num_pins; VAR_4++) {
  VAR_5 = VAR_3->mode_info.audio.pin[VAR_4].offset;
  VAR_6 = FUNC_0(VAR_5,
      VAR_2);
  if (((VAR_6 &
  VAR_0) >>
  VAR_1) == 1)
   VAR_3->mode_info.audio.pin[VAR_4].connected = 0;
  else
   VAR_3->mode_info.audio.pin[VAR_4].connected = 1;
 }
}
