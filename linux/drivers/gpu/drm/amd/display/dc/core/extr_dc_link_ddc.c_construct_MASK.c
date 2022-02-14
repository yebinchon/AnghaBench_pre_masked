
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int clk_a_shift; int clk_a_register_index; } ;
struct graphics_object_i2c_info {TYPE_3__ gpio_info; int i2c_hw_assist; int i2c_line; } ;
struct gpio_service {int dummy; } ;
struct gpio_ddc_hw_info {int hw_supported; int ddc_channel; } ;
struct ddc_service_init_data {int id; TYPE_1__* ctx; int link; } ;
struct TYPE_10__ {scalar_t__ raw; } ;
struct TYPE_9__ {int EDID_QUERY_DONE_ONCE; int FORCE_READ_REPEATED_START; int EDID_STRESS_READ; int IS_INTERNAL_DISPLAY; } ;
struct ddc_service {TYPE_5__ wa; TYPE_4__ flags; int * ddc_pin; TYPE_1__* ctx; int link; } ;
struct dc_bios {TYPE_2__* funcs; } ;
typedef enum connector_id { ____Placeholder_connector_id } connector_id ;
struct TYPE_7__ {scalar_t__ (* get_i2c_info ) (struct dc_bios*,int ,struct graphics_object_i2c_info*) ;} ;
struct TYPE_6__ {struct dc_bios* dc_bios; struct gpio_service* gpio_service; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct gpio_service*,int ,int,struct gpio_ddc_hw_info*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dc_bios*,int ,struct graphics_object_i2c_info*) ;

__attribute__((used)) static void FUNC_3(
 struct ddc_service *VAR_3,
 struct ddc_service_init_data *VAR_4)
{
 enum connector_id VAR_5 =
  FUNC_1(VAR_4->id);

 struct gpio_service *VAR_6 = VAR_4->ctx->gpio_service;
 struct graphics_object_i2c_info VAR_7;
 struct gpio_ddc_hw_info VAR_8;
 struct dc_bios *VAR_9 = VAR_4->ctx->dc_bios;

 VAR_3->link = VAR_4->link;
 VAR_3->ctx = VAR_4->ctx;

 if (VAR_0 != VAR_9->funcs->get_i2c_info(VAR_9, VAR_4->id, &VAR_7)) {
  VAR_3->ddc_pin = ((void*)0);
 } else {
  VAR_8.ddc_channel = VAR_7.i2c_line;
  VAR_8.hw_supported = VAR_7.i2c_hw_assist;

  VAR_3->ddc_pin = FUNC_0(
   VAR_6,
   VAR_7.gpio_info.clk_a_register_index,
   1 << VAR_7.gpio_info.clk_a_shift,
   &VAR_8);
 }

 VAR_3->flags.EDID_QUERY_DONE_ONCE = 0;
 VAR_3->flags.FORCE_READ_REPEATED_START = 0;
 VAR_3->flags.EDID_STRESS_READ = 0;

 VAR_3->flags.IS_INTERNAL_DISPLAY =
  VAR_5 == VAR_1 ||
  VAR_5 == VAR_2;

 VAR_3->wa.raw = 0;
}
