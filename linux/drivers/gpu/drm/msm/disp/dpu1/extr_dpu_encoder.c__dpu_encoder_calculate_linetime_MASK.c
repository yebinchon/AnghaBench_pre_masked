
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct drm_display_mode {scalar_t__ clock; int htotal; } ;
struct dpu_encoder_virt {TYPE_2__* cur_master; } ;
struct TYPE_3__ {int get_line_count; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (unsigned long long,scalar_t__) ;
 int FUNC_1 (struct dpu_encoder_virt*,char*,scalar_t__,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static u32 FUNC_3(struct dpu_encoder_virt *VAR_0,
  struct drm_display_mode *VAR_1)
{
 u64 VAR_2;
 u32 VAR_3;
 u32 VAR_4;




 if (!VAR_0->cur_master)
  return 0;

 if (!VAR_0->cur_master->ops.get_line_count) {
  FUNC_2("get_line_count function not defined\n");
  return 0;
 }

 VAR_2 = VAR_1->clock;
 if (VAR_2 == 0) {
  FUNC_2("pclk is 0, cannot calculate line time\n");
  return 0;
 }

 VAR_3 = FUNC_0(1000000000ull, VAR_2);
 if (VAR_3 == 0) {
  FUNC_2("pclk period is 0\n");
  return 0;
 }





 VAR_4 = (VAR_3 * VAR_1->htotal) / 1000;
 if (VAR_4 == 0) {
  FUNC_2("line time calculation is 0\n");
  return 0;
 }

 FUNC_1(VAR_0,
   "clk_rate=%lldkHz, clk_period=%d, linetime=%dns\n",
   VAR_2, VAR_3, VAR_4);

 return VAR_4;
}
