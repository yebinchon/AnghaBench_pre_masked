
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int scanning_period; int debounce_timeout; int settling_timeout; int touch_timeout; int average_data; int fifo_threshold; int max_x; int max_y; int fuzz_x; int fuzz_y; void* invert_y; void* invert_x; } ;
struct iproc_ts_priv {TYPE_1__ cfg_params; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 TYPE_1__ VAR_1 ;
 void* FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct iproc_ts_priv *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->of_node;
 u32 VAR_5;

 VAR_3->cfg_params = VAR_1;

 if (!VAR_4)
  return 0;

 if (FUNC_2(VAR_4, "scanning_period", &VAR_5) >= 0) {
  if (VAR_5 < 1 || VAR_5 > 256) {
   FUNC_0(VAR_2, "scanning_period (%u) must be [1-256]\n",
    VAR_5);
   return -VAR_0;
  }
  VAR_3->cfg_params.scanning_period = VAR_5;
 }

 if (FUNC_2(VAR_4, "debounce_timeout", &VAR_5) >= 0) {
  if (VAR_5 > 255) {
   FUNC_0(VAR_2, "debounce_timeout (%u) must be [0-255]\n",
    VAR_5);
   return -VAR_0;
  }
  VAR_3->cfg_params.debounce_timeout = VAR_5;
 }

 if (FUNC_2(VAR_4, "settling_timeout", &VAR_5) >= 0) {
  if (VAR_5 > 11) {
   FUNC_0(VAR_2, "settling_timeout (%u) must be [0-11]\n",
    VAR_5);
   return -VAR_0;
  }
  VAR_3->cfg_params.settling_timeout = VAR_5;
 }

 if (FUNC_2(VAR_4, "touch_timeout", &VAR_5) >= 0) {
  if (VAR_5 > 255) {
   FUNC_0(VAR_2, "touch_timeout (%u) must be [0-255]\n",
    VAR_5);
   return -VAR_0;
  }
  VAR_3->cfg_params.touch_timeout = VAR_5;
 }

 if (FUNC_2(VAR_4, "average_data", &VAR_5) >= 0) {
  if (VAR_5 > 8) {
   FUNC_0(VAR_2, "average_data (%u) must be [0-8]\n", VAR_5);
   return -VAR_0;
  }
  VAR_3->cfg_params.average_data = VAR_5;
 }

 if (FUNC_2(VAR_4, "fifo_threshold", &VAR_5) >= 0) {
  if (VAR_5 > 31) {
   FUNC_0(VAR_2, "fifo_threshold (%u)) must be [0-31]\n",
    VAR_5);
   return -VAR_0;
  }
  VAR_3->cfg_params.fifo_threshold = VAR_5;
 }


 FUNC_2(VAR_4, "touchscreen-size-x", &VAR_3->cfg_params.max_x);
 FUNC_2(VAR_4, "touchscreen-size-y", &VAR_3->cfg_params.max_y);

 FUNC_2(VAR_4, "touchscreen-fuzz-x",
        &VAR_3->cfg_params.fuzz_x);
 FUNC_2(VAR_4, "touchscreen-fuzz-y",
        &VAR_3->cfg_params.fuzz_y);

 VAR_3->cfg_params.invert_x =
  FUNC_1(VAR_4, "touchscreen-inverted-x");
 VAR_3->cfg_params.invert_y =
  FUNC_1(VAR_4, "touchscreen-inverted-y");

 return 0;
}
