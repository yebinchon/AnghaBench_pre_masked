
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; char* name; int pktsize; TYPE_1__* dev; struct ps2dev ps2dev; } ;
struct TYPE_2__ {int relbit; int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ps2dev*,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_5, bool VAR_6)
{
 struct ps2dev *VAR_7 = &VAR_5->ps2dev;
 u8 VAR_8[2];

 VAR_8[0] = 200;
 FUNC_1(VAR_7, VAR_8, VAR_3);
 VAR_8[0] = 100;
 FUNC_1(VAR_7, VAR_8, VAR_3);
 VAR_8[0] = 80;
 FUNC_1(VAR_7, VAR_8, VAR_3);
 FUNC_1(VAR_7, VAR_8, VAR_2);

 if (VAR_8[0] != 3)
  return -VAR_1;

 if (VAR_6) {
  FUNC_0(VAR_0, VAR_5->dev->keybit);
  FUNC_0(VAR_4, VAR_5->dev->relbit);

  if (!VAR_5->vendor)
   VAR_5->vendor = "Generic";
  if (!VAR_5->name)
   VAR_5->name = "Wheel Mouse";
  VAR_5->pktsize = 4;
 }

 return 0;
}
