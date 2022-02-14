
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mfd_cell {size_t id; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct asic3 {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_3__ {int parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct asic3*,scalar_t__,int) ;
 struct asic3* FUNC_1 (int ) ;
 unsigned int* VAR_6 ;
 struct mfd_cell* FUNC_2 (struct platform_device*) ;
 struct platform_device* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_7,
 enum led_brightness VAR_8)
{
 struct platform_device *VAR_9 = FUNC_3(VAR_7->dev->parent);
 const struct mfd_cell *VAR_10 = FUNC_2(VAR_9);
 struct asic3 *VAR_11 = FUNC_1(VAR_9->dev.parent);
 u32 VAR_12;
 unsigned int VAR_13;

 VAR_12 = (VAR_8 == VAR_5) ? 0 : (VAR_4|0x4);

 VAR_13 = VAR_6[VAR_10->id];
 FUNC_0(VAR_11, (VAR_13 + VAR_2), 32);
 FUNC_0(VAR_11, (VAR_13 + VAR_1), 32);
 FUNC_0(VAR_11, (VAR_13 + VAR_0), 0);
 FUNC_0(VAR_11, (VAR_13 + VAR_3), VAR_12);
}
