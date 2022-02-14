
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct line_buffer_params {int interleave_en; int alpha_en; int pixel_expan_mode; int dynamic_pixel_depth; int depth; } ;
struct TYPE_4__ {TYPE_1__* caps; } ;
struct dcn10_dpp {TYPE_2__ base; } ;
typedef enum lb_memory_config { ____Placeholder_lb_memory_config } lb_memory_config ;
struct TYPE_3__ {scalar_t__ dscl_data_proc_format; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ,int ,int ,int,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
 struct dcn10_dpp *VAR_12,
 const struct line_buffer_params *VAR_13,
 enum lb_memory_config VAR_14)
{

 if (VAR_12->base.caps->dscl_data_proc_format == VAR_1) {

  uint32_t VAR_15 = FUNC_2(VAR_13->depth);
  uint32_t VAR_16 = VAR_13->dynamic_pixel_depth;

  FUNC_1(VAR_4, 0,
   VAR_9, VAR_15,
   VAR_10, VAR_13->pixel_expan_mode,
   VAR_11, 1,
   VAR_2, VAR_16,
   VAR_0, 0,
   VAR_3, VAR_13->interleave_en,
   VAR_5, VAR_13->alpha_en);
 }
 FUNC_0(VAR_7, 0,
  VAR_8, VAR_14,
  VAR_6, 63);
}
