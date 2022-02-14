
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct input_dev {unsigned short* keycode; } ;
struct cros_ec_keyb {int cols; int rows; int* old_kb_state; struct input_dev* idev; int dev; int row_shift; scalar_t__ ghost_filter; } ;


 int FUNC_0 (int,int,int ) ;
 scalar_t__ FUNC_1 (struct cros_ec_keyb*,int*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct input_dev*,unsigned short const,int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct cros_ec_keyb *VAR_0,
    uint8_t *VAR_1, int VAR_2)
{
 struct input_dev *VAR_3 = VAR_0->idev;
 int VAR_4, VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_0->ghost_filter && FUNC_1(VAR_0, VAR_1)) {





  FUNC_2(VAR_0->dev, "ghosting found\n");
  return;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->cols; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_0->rows; VAR_5++) {
   int VAR_8 = FUNC_0(VAR_5, VAR_4, VAR_0->row_shift);
   const unsigned short *VAR_9 = VAR_3->keycode;

   VAR_6 = VAR_1[VAR_4] & (1 << VAR_5);
   VAR_7 = VAR_0->old_kb_state[VAR_4] & (1 << VAR_5);
   if (VAR_6 != VAR_7) {
    FUNC_2(VAR_0->dev,
     "changed: [r%d c%d]: byte %02x\n",
     VAR_5, VAR_4, VAR_6);

    FUNC_3(VAR_3, VAR_9[VAR_8],
       VAR_6);
   }
  }
  VAR_0->old_kb_state[VAR_4] = VAR_1[VAR_4];
 }
 FUNC_4(VAR_0->idev);
}
