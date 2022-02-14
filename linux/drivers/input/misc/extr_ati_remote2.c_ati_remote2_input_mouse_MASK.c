
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {int dummy; } ;
struct ati_remote2 {int** buf; int channel_mask; int mode_mask; TYPE_1__** intf; struct input_dev* idev; } ;
typedef int s8 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int,int,int) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct ati_remote2 *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4->idev;
 u8 *VAR_6 = VAR_4->buf[0];
 int VAR_7, VAR_8;

 VAR_7 = VAR_6[0] >> 4;

 if (!((1 << VAR_7) & VAR_4->channel_mask))
  return;

 VAR_8 = VAR_6[0] & 0x0F;

 if (VAR_8 > VAR_0) {
  FUNC_0(&VAR_4->intf[0]->dev,
   "Unknown mode byte (%02x %02x %02x %02x)\n",
   VAR_6[3], VAR_6[2], VAR_6[1], VAR_6[0]);
  return;
 }

 if (!((1 << VAR_8) & VAR_4->mode_mask))
  return;

 FUNC_1(VAR_5, VAR_1, VAR_2, (s8) VAR_6[1]);
 FUNC_1(VAR_5, VAR_1, VAR_3, (s8) VAR_6[2]);
 FUNC_2(VAR_5);
}
