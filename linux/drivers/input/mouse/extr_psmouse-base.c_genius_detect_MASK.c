
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ps2dev*,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_8, bool VAR_9)
{
 struct ps2dev *VAR_10 = &VAR_8->ps2dev;
 u8 VAR_11[4];

 VAR_11[0] = 3;
 FUNC_1(VAR_10, VAR_11, VAR_5);
 FUNC_1(VAR_10, ((void*)0), VAR_6);
 FUNC_1(VAR_10, ((void*)0), VAR_6);
 FUNC_1(VAR_10, ((void*)0), VAR_6);
 FUNC_1(VAR_10, VAR_11, VAR_4);

 if (VAR_11[0] != 0x00 || VAR_11[1] != 0x33 || VAR_11[2] != 0x55)
  return -VAR_3;

 if (VAR_9) {
  FUNC_0(VAR_1, VAR_8->dev->keybit);
  FUNC_0(VAR_0, VAR_8->dev->keybit);
  FUNC_0(VAR_2, VAR_8->dev->keybit);
  FUNC_0(VAR_7, VAR_8->dev->relbit);

  VAR_8->vendor = "Genius";
  VAR_8->name = "Mouse";
  VAR_8->pktsize = 4;
 }

 return 0;
}
