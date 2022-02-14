
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_2)
{
 struct input_dev *VAR_3 = VAR_2->dev;
 unsigned char *VAR_4 = VAR_2->packet;
 unsigned VAR_5;
 int VAR_6;


 VAR_5 = VAR_4[1] & 0x1f;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if ((VAR_5 & (1 << VAR_6)) == 0) {
   FUNC_2(VAR_3, VAR_6);
   FUNC_1(VAR_3, VAR_1, 0);
  }
 }

 FUNC_0(VAR_2);
}
