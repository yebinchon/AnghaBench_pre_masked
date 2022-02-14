
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ps2dev {TYPE_1__* serio; } ;
struct psmouse {struct ps2dev ps2dev; } ;
struct TYPE_2__ {int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ps2dev*,int*,int ) ;
 int FUNC_1 (struct psmouse*,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_3)
{
 struct ps2dev *VAR_4 = &VAR_3->ps2dev;
 u8 VAR_5[2];
 int VAR_6;







 VAR_5[0] = 0xa5;
 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_1);
 if (VAR_6)
  return VAR_6;

 if (VAR_5[0] != 0x00 && VAR_5[0] != 0x03 &&
     VAR_5[0] != 0x04 && VAR_5[0] != 0xff)
  return -VAR_0;





 VAR_6 = FUNC_0(VAR_4, ((void*)0), VAR_2);
 if (VAR_6)
  FUNC_1(VAR_3, "Failed to reset mouse on %s: %d\n",
        VAR_4->serio->phys, VAR_6);

 return 0;
}
