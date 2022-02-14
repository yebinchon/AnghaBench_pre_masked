
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct elantech_data {TYPE_1__* mt; } ;
struct TYPE_2__ {int x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->dev;
 struct elantech_data *VAR_5 = VAR_3->private;
 unsigned char *VAR_6 = VAR_3->packet;
 int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 int VAR_12, VAR_13;

 VAR_12 = ((VAR_6[0] & 0xe0) >> 5) - 1;
 if (VAR_12 < 0)
  return;

 VAR_13 = ((VAR_6[3] & 0xe0) >> 5) - 1;
 VAR_7 = (VAR_6[0] & 0x10) ? VAR_2 : 1;





 VAR_8 = (signed char)VAR_6[1];
 VAR_9 = (signed char)VAR_6[2];
 VAR_10 = (signed char)VAR_6[4];
 VAR_11 = (signed char)VAR_6[5];

 VAR_5->mt[VAR_12].x += VAR_8 * VAR_7;
 VAR_5->mt[VAR_12].y -= VAR_9 * VAR_7;
 FUNC_1(VAR_4, VAR_12);
 FUNC_2(VAR_4, VAR_0, VAR_5->mt[VAR_12].x);
 FUNC_2(VAR_4, VAR_1, VAR_5->mt[VAR_12].y);

 if (VAR_13 >= 0) {
  VAR_5->mt[VAR_13].x += VAR_10 * VAR_7;
  VAR_5->mt[VAR_13].y -= VAR_11 * VAR_7;
  FUNC_1(VAR_4, VAR_13);
  FUNC_2(VAR_4, VAR_0, VAR_5->mt[VAR_13].x);
  FUNC_2(VAR_4, VAR_1, VAR_5->mt[VAR_13].y);
 }

 FUNC_0(VAR_3);
}
