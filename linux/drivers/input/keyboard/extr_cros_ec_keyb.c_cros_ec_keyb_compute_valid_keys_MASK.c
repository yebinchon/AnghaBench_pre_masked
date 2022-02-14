
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cros_ec_keyb {int row_shift; int cols; int rows; int* valid_keys; int dev; TYPE_1__* idev; } ;
struct TYPE_2__ {unsigned short* keycode; int keycodesize; } ;


 int FUNC_0 (int) ;
 unsigned short VAR_0 ;
 size_t FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct cros_ec_keyb *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4 = VAR_1->row_shift;
 unsigned short *VAR_5 = VAR_1->idev->keycode;
 unsigned short VAR_6;

 FUNC_0(VAR_1->idev->keycodesize != sizeof(*VAR_5));

 for (VAR_3 = 0; VAR_3 < VAR_1->cols; VAR_3++) {
  for (VAR_2 = 0; VAR_2 < VAR_1->rows; VAR_2++) {
   VAR_6 = VAR_5[FUNC_1(VAR_2, VAR_3, VAR_4)];
   if (VAR_6 && (VAR_6 != VAR_0))
    VAR_1->valid_keys[VAR_3] |= 1 << VAR_2;
  }
  FUNC_2(VAR_1->dev, "valid_keys[%02d] = 0x%02x\n",
   VAR_3, VAR_1->valid_keys[VAR_3]);
 }
}
