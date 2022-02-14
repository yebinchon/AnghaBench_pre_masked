
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intf_timing_params {scalar_t__ v_back_porch; scalar_t__ vsync_pulse_width; scalar_t__ v_front_porch; } ;
struct dpu_encoder_phys {TYPE_2__* hw_intf; } ;
struct TYPE_4__ {TYPE_1__* cap; } ;
struct TYPE_3__ {scalar_t__ prog_fetch_lines_worst_case; } ;


 int FUNC_0 (struct dpu_encoder_phys*,char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u32 FUNC_2(
  struct dpu_encoder_phys *VAR_0,
  const struct intf_timing_params *VAR_1)
{
 u32 VAR_2 =
     VAR_0->hw_intf->cap->prog_fetch_lines_worst_case;
 u32 VAR_3 =
     VAR_1->v_back_porch + VAR_1->vsync_pulse_width;
 u32 VAR_4 = VAR_2 - VAR_3;
 u32 VAR_5 = 0;


 if (VAR_3 >= VAR_2) {
  FUNC_0(VAR_0,
    "prog fetch is not needed, large vbp+vsw\n");
  VAR_5 = 0;
 } else if (VAR_1->v_front_porch < VAR_4) {

  FUNC_1
   ("low vbp+vfp may lead to perf issues in some cases\n");
  FUNC_0(VAR_0,
    "less vfp than fetch req, using entire vfp\n");
  VAR_5 = VAR_1->v_front_porch;
 } else {
  FUNC_0(VAR_0, "room in vfp for needed prefetch\n");
  VAR_5 = VAR_4;
 }

 FUNC_0(VAR_0,
  "v_front_porch %u v_back_porch %u vsync_pulse_width %u\n",
  VAR_1->v_front_porch, VAR_1->v_back_porch,
  VAR_1->vsync_pulse_width);
 FUNC_0(VAR_0,
  "wc_lines %u needed_vfp_lines %u actual_vfp_lines %u\n",
  VAR_2, VAR_4, VAR_5);

 return VAR_5;
}
