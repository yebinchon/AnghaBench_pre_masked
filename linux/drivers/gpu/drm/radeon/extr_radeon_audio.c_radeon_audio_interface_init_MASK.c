
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dp_funcs; int * hdmi_funcs; int * funcs; } ;
struct radeon_device {TYPE_1__ audio; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
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

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_11)
{
 if (FUNC_2(VAR_11)) {
  VAR_11->audio.funcs = &VAR_7;
  VAR_11->audio.hdmi_funcs = &VAR_8;
  VAR_11->audio.dp_funcs = &VAR_6;
 } else if (FUNC_1(VAR_11)) {
  VAR_11->audio.funcs = &VAR_4;
  VAR_11->audio.hdmi_funcs = &VAR_5;
  VAR_11->audio.dp_funcs = &VAR_3;
 } else if (FUNC_0(VAR_11)) {
  VAR_11->audio.funcs = &VAR_1;
  VAR_11->audio.hdmi_funcs = &VAR_2;
  VAR_11->audio.dp_funcs = &VAR_0;
 } else {
  VAR_11->audio.funcs = &VAR_9;
  VAR_11->audio.hdmi_funcs = &VAR_10;
  VAR_11->audio.dp_funcs = 0;
 }
}
