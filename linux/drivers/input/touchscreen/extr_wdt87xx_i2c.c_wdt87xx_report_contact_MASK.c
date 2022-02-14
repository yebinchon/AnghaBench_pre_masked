
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wdt87xx_sys_param {int scaling_factor; int phy_h; int max_x; int max_y; int phy_w; } ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int) ;
 int FUNC_5 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_10,
       struct wdt87xx_sys_param *VAR_11,
       u8 *VAR_12)
{
 int VAR_13;
 u32 VAR_14, VAR_15, VAR_16;
 u8 VAR_17;

 VAR_13 = (VAR_12[VAR_4] >> 3) - 1;
 if (VAR_13 < 0)
  return;


 if (!(VAR_12[VAR_4] & 0x1))
  return;

 VAR_16 = VAR_12[VAR_6];
 VAR_16 *= VAR_11->scaling_factor;

 VAR_17 = VAR_12[VAR_5];

 VAR_14 = FUNC_2(VAR_12 + VAR_7);

 VAR_15 = FUNC_2(VAR_12 + VAR_8);
 VAR_15 = FUNC_0(VAR_15 * VAR_11->phy_h, VAR_11->phy_w);


 if (VAR_14 > VAR_11->max_x || VAR_15 > VAR_11->max_y)
  return;

 FUNC_1(VAR_10->dev.parent, "tip on (%d), x(%d), y(%d)\n",
  VAR_13, VAR_14, VAR_15);

 FUNC_4(VAR_10, VAR_13);
 FUNC_3(VAR_10, VAR_9, 1);
 FUNC_5(VAR_10, VAR_3, VAR_16);
 FUNC_5(VAR_10, VAR_2, VAR_17);
 FUNC_5(VAR_10, VAR_0, VAR_14);
 FUNC_5(VAR_10, VAR_1, VAR_15);
}
