
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm {int* data; scalar_t__ packetsize; scalar_t__ idx; TYPE_1__* slots; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int active; int x; int y; } ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (struct pm*,struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct pm *VAR_0)
{
 struct input_dev *VAR_1 = VAR_0->dev;

 if ((VAR_0->data[0] & 0xce) == 0x40 && VAR_0->packetsize == ++VAR_0->idx) {
  if (FUNC_0(VAR_0->data)) {
   int VAR_2 = VAR_0->data[0] & 0x0f;
   VAR_0->slots[VAR_2].active = VAR_0->data[0] & 0x30;
   VAR_0->slots[VAR_2].x = VAR_0->data[2] * 256 + VAR_0->data[1];
   VAR_0->slots[VAR_2].y = VAR_0->data[4] * 256 + VAR_0->data[3];
   FUNC_1(VAR_0, VAR_1);
  }
  VAR_0->idx = 0;
 }
}
