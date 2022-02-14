
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; char* name; TYPE_1__* dev; struct ps2dev ps2dev; } ;
struct TYPE_2__ {int keybit; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ps2dev*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_6, bool VAR_7)
{
 struct ps2dev *VAR_8 = &VAR_6->ps2dev;
 u8 VAR_9[2];
 static const u8 VAR_10[] = { 20, 60, 40, 20, 20, 60, 40, 20, 20 };
 int VAR_11;

 VAR_9[0] = 10;
 FUNC_2(VAR_8, VAR_9, VAR_4);
 VAR_9[0] = 0;
 FUNC_2(VAR_8, VAR_9, VAR_5);
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10); VAR_11++) {
  VAR_9[0] = VAR_10[VAR_11];
  FUNC_2(VAR_8, VAR_9, VAR_4);
 }
 FUNC_2(VAR_8, VAR_9, VAR_3);

 if (VAR_9[0] != 2)
  return -VAR_2;

 if (VAR_7) {
  FUNC_1(VAR_1, VAR_6->dev->keybit);
  FUNC_1(VAR_0, VAR_6->dev->keybit);

  VAR_6->vendor = "Kensington";
  VAR_6->name = "ThinkingMouse";
 }

 return 0;
}
