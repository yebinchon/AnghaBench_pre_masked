
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm {int* data; scalar_t__ packetsize; scalar_t__ idx; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct pm *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->dev;

 if ((VAR_3->data[0] & 0x80) && VAR_3->packetsize == ++VAR_3->idx) {
  FUNC_0(VAR_4, VAR_0, VAR_3->data[1] * 128 + VAR_3->data[2]);
  FUNC_0(VAR_4, VAR_1, VAR_3->data[3] * 128 + VAR_3->data[4]);
  FUNC_1(VAR_4, VAR_2, !!(VAR_3->data[0] & 0x40));
  FUNC_2(VAR_4);
  VAR_3->idx = 0;
 }
}
