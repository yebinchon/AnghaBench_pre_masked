
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mfd_cell {size_t id; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct asic3 {int dummy; } ;
struct TYPE_3__ {int parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (struct asic3*,scalar_t__,int) ;
 struct asic3* FUNC_3 (int ) ;
 unsigned int* VAR_8 ;
 struct mfd_cell* FUNC_4 (struct platform_device*) ;
 struct platform_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct led_classdev *VAR_9,
 unsigned long *VAR_10,
 unsigned long *VAR_11)
{
 struct platform_device *VAR_12 = FUNC_5(VAR_9->dev->parent);
 const struct mfd_cell *VAR_13 = FUNC_4(VAR_12);
 struct asic3 *VAR_14 = FUNC_3(VAR_12->dev.parent);
 u32 VAR_15;
 u32 VAR_16;
 unsigned int VAR_17;

 if (*VAR_10 > VAR_7 || *VAR_11 > VAR_7)
  return -VAR_4;

 if (*VAR_10 == 0 && *VAR_11 == 0) {

  VAR_15 = FUNC_1(500);
  VAR_16 = FUNC_1(500);
 } else {
  VAR_15 = FUNC_1(*VAR_10);
  VAR_16 = FUNC_1(*VAR_11);
  if ((VAR_15 + VAR_16) > VAR_6)
   return -VAR_4;
 }

 VAR_17 = VAR_8[VAR_13->id];
 FUNC_2(VAR_14, (VAR_17 + VAR_2), (VAR_15 + VAR_16));
 FUNC_2(VAR_14, (VAR_17 + VAR_1), VAR_15);
 FUNC_2(VAR_14, (VAR_17 + VAR_0), 0);
 FUNC_2(VAR_14, (VAR_17 + VAR_3), (VAR_5|0x4));

 *VAR_10 = FUNC_0(VAR_15);
 *VAR_11 = FUNC_0(VAR_16);

 return 0;
}
