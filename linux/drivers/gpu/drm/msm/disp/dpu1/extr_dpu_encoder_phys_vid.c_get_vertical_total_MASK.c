
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intf_timing_params {scalar_t__ vsync_pulse_width; scalar_t__ v_front_porch; scalar_t__ v_back_porch; scalar_t__ yres; } ;



__attribute__((used)) static u32 FUNC_0(const struct intf_timing_params *VAR_0)
{
 u32 VAR_1 = VAR_0->yres;
 u32 VAR_2 =
     VAR_0->v_back_porch + VAR_0->v_front_porch +
     VAR_0->vsync_pulse_width;
 return VAR_1 + VAR_2;
}
