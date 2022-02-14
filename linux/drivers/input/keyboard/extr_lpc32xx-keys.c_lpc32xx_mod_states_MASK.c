
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lpc32xx_kscan_drv {int* lastkeystates; unsigned int* keymap; int row_shift; int kscan_base; struct input_dev* input; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 unsigned int FUNC_1 (unsigned int,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct input_dev*,int ,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*,unsigned int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct lpc32xx_kscan_drv *VAR_2, int VAR_3)
{
 struct input_dev *VAR_4 = VAR_2->input;
 unsigned VAR_5, VAR_6, VAR_7, VAR_8;
 u8 VAR_9;

 VAR_9 = FUNC_4(FUNC_0(VAR_2->kscan_base, VAR_3));
 VAR_6 = VAR_9 ^ VAR_2->lastkeystates[VAR_3];
 VAR_2->lastkeystates[VAR_3] = VAR_9;

 for (VAR_5 = 0; VAR_6; VAR_5++, VAR_6 >>= 1) {
  if (VAR_6 & 1) {

   VAR_7 = FUNC_1(VAR_5, VAR_3,
          VAR_2->row_shift);
   VAR_8 = VAR_2->keymap[VAR_7];
   FUNC_2(VAR_4, VAR_0, VAR_1, VAR_7);
   FUNC_3(VAR_4, VAR_8, VAR_9 & (1 << VAR_5));
  }
 }
}
