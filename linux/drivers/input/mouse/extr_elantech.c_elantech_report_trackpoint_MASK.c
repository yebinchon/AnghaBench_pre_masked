
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct psmouse {unsigned char* packet; struct elantech_data* private; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int debug; } ;
struct elantech_data {TYPE_1__ info; struct input_dev* tp_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*) ;
 unsigned int FUNC_1 (unsigned char*) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct psmouse *VAR_2,
           int VAR_3)
{
 struct elantech_data *VAR_4 = VAR_2->private;
 struct input_dev *VAR_5 = VAR_4->tp_dev;
 unsigned char *VAR_6 = VAR_2->packet;
 int VAR_7, VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_1(&VAR_6[0]);

 switch (VAR_9 & ~7U) {
 case 0x06000030U:
 case 0x16008020U:
 case 0x26800010U:
 case 0x36808000U:
  VAR_7 = VAR_6[4] - (int)((VAR_6[1]^0x80) << 1);
  VAR_8 = (int)((VAR_6[2]^0x80) << 1) - VAR_6[5];

  FUNC_4(VAR_5, VAR_6[0]);

  FUNC_2(VAR_5, VAR_0, VAR_7);
  FUNC_2(VAR_5, VAR_1, VAR_8);

  FUNC_3(VAR_5);

  break;

 default:

  if (VAR_4->info.debug == 1)
   FUNC_0(VAR_2);

  break;
 }
}
