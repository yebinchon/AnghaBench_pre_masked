
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct elantech_data {int y_max; int width; TYPE_1__* mt; } ;
struct TYPE_2__ {unsigned char x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6->dev;
 struct elantech_data *VAR_8 = VAR_6->private;
 unsigned char *VAR_9 = VAR_6->packet;
 int VAR_10 = ((VAR_9[3] & 0xe0) >> 5) - 1;
 int VAR_11, VAR_12;

 if (VAR_10 < 0)
  return;

 VAR_8->mt[VAR_10].x = ((VAR_9[1] & 0x0f) << 8) | VAR_9[2];
 VAR_8->mt[VAR_10].y = VAR_8->y_max - (((VAR_9[4] & 0x0f) << 8) | VAR_9[5]);
 VAR_11 = (VAR_9[1] & 0xf0) | ((VAR_9[4] & 0xf0) >> 4);
 VAR_12 = (VAR_9[0] & 0xf0) >> 4;

 FUNC_2(VAR_7, VAR_10);
 FUNC_1(VAR_7, VAR_5, 1);

 FUNC_3(VAR_7, VAR_0, VAR_8->mt[VAR_10].x);
 FUNC_3(VAR_7, VAR_1, VAR_8->mt[VAR_10].y);
 FUNC_3(VAR_7, VAR_2, VAR_11);
 FUNC_3(VAR_7, VAR_3, VAR_12 * VAR_8->width);

 FUNC_3(VAR_7, VAR_4, VAR_12);

 FUNC_0(VAR_6);
}
