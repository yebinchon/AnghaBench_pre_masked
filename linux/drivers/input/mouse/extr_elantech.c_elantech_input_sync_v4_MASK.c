
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct elantech_data* private; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct elantech_data {int info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*,int ,unsigned char) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct psmouse *VAR_1)
{
 struct input_dev *VAR_2 = VAR_1->dev;
 struct elantech_data *VAR_3 = VAR_1->private;
 unsigned char *VAR_4 = VAR_1->packet;


 if (FUNC_0(&VAR_3->info))
  FUNC_2(VAR_2, VAR_0, VAR_4[0] & 0x03);
 else
  FUNC_4(VAR_2, VAR_4[0]);

 FUNC_1(VAR_2, 1);
 FUNC_3(VAR_2);
}
