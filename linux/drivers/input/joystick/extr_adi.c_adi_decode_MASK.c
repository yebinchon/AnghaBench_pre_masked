
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct adi {char* abs; short* key; scalar_t__ ret; scalar_t__ length; int id; int axes10; int axes8; int buttons; int pad; int hats; struct input_dev* dev; } ;
struct TYPE_2__ {int x; int y; } ;


 int FUNC_0 (struct adi*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static int FUNC_4(struct adi *VAR_1)
{
 struct input_dev *VAR_2 = VAR_1->dev;
 char *VAR_3 = VAR_1->abs;
 short *VAR_4 = VAR_1->key;
 int VAR_5, VAR_6;

 if (VAR_1->ret < VAR_1->length || VAR_1->id != (FUNC_0(VAR_1, 4) | (FUNC_0(VAR_1, 4) << 4)))
  return -1;

 for (VAR_5 = 0; VAR_5 < VAR_1->axes10; VAR_5++)
  FUNC_1(VAR_2, *VAR_3++, FUNC_0(VAR_1, 10));

 for (VAR_5 = 0; VAR_5 < VAR_1->axes8; VAR_5++)
  FUNC_1(VAR_2, *VAR_3++, FUNC_0(VAR_1, 8));

 for (VAR_5 = 0; VAR_5 < VAR_1->buttons && VAR_5 < 63; VAR_5++) {
  if (VAR_5 == VAR_1->pad) {
   VAR_6 = FUNC_0(VAR_1, 4);
   FUNC_1(VAR_2, *VAR_3++, ((VAR_6 >> 2) & 1) - ( VAR_6 & 1));
   FUNC_1(VAR_2, *VAR_3++, ((VAR_6 >> 1) & 1) - ((VAR_6 >> 3) & 1));
  }
  FUNC_2(VAR_2, *VAR_4++, FUNC_0(VAR_1, 1));
 }

 for (VAR_5 = 0; VAR_5 < VAR_1->hats; VAR_5++) {
  if ((VAR_6 = FUNC_0(VAR_1, 4)) > 8) VAR_6 = 0;
  FUNC_1(VAR_2, *VAR_3++, VAR_0[VAR_6].x);
  FUNC_1(VAR_2, *VAR_3++, VAR_0[VAR_6].y);
 }

 for (VAR_5 = 63; VAR_5 < VAR_1->buttons; VAR_5++)
  FUNC_2(VAR_2, *VAR_4++, FUNC_0(VAR_1, 1));

 FUNC_3(VAR_2);

 return 0;
}
