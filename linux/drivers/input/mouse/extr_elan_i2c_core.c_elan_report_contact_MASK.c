
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct elan_tp_data {unsigned int max_x; unsigned int max_y; unsigned int width_x; unsigned int width_y; unsigned int pressure_adjustment; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct elan_tp_data *VAR_9,
    int VAR_10, bool VAR_11,
    u8 *VAR_12)
{
 struct input_dev *VAR_13 = VAR_9->input;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23;

 if (VAR_11) {
  VAR_14 = ((VAR_12[0] & 0xf0) << 4) |
      VAR_12[1];
  VAR_15 = ((VAR_12[0] & 0x0f) << 8) |
      VAR_12[2];
  VAR_17 = (VAR_12[3] & 0x0f);
  VAR_18 = (VAR_12[3] >> 4);
  VAR_16 = VAR_12[4];

  if (VAR_14 > VAR_9->max_x || VAR_15 > VAR_9->max_y) {
   FUNC_0(VAR_13->dev.parent,
    "[%d] x=%d y=%d over max (%d, %d)",
    VAR_10, VAR_14, VAR_15,
    VAR_9->max_x, VAR_9->max_y);
   return;
  }





  VAR_19 = VAR_17 * (VAR_9->width_x - VAR_6);
  VAR_20 = VAR_18 * (VAR_9->width_y - VAR_6);

  VAR_21 = FUNC_4(VAR_19, VAR_20);
  VAR_22 = FUNC_5(VAR_19, VAR_20);

  VAR_23 = VAR_16 + VAR_9->pressure_adjustment;

  if (VAR_23 > VAR_7)
   VAR_23 = VAR_7;

  FUNC_2(VAR_13, VAR_10);
  FUNC_1(VAR_13, VAR_8, 1);
  FUNC_3(VAR_13, VAR_0, VAR_14);
  FUNC_3(VAR_13, VAR_1, VAR_9->max_y - VAR_15);
  FUNC_3(VAR_13, VAR_2, VAR_23);
  FUNC_3(VAR_13, VAR_5, VAR_17);
  FUNC_3(VAR_13, VAR_3, VAR_21);
  FUNC_3(VAR_13, VAR_4, VAR_22);
 } else {
  FUNC_2(VAR_13, VAR_10);
  FUNC_1(VAR_13, VAR_8, 0);
 }
}
